//
// Created by haowei on 2/26/19.
//

#ifndef LIST_LIST_H
#define LIST_LIST_H

#include "listNode.h"

template <typename T> class List{
private:
    int _size;
    ListNodePosi(T) header;
    ListNodePosi(T) trailer;

protected:
    void init();
    int clear(); // Delete all nodes in the list
    void copyNodes(ListNodePosi(T), int); // Copy n starting nodes from p
    void merge(ListNodePosi(T)&,int,List<T>&,ListNodePosi(T),int); // The merge step in merge sort
    void mergeSort(ListNodePosi(T)&,int); // Merge sort for n nodes starting from p
    void selectionSort(ListNodePosi(T),int); // Selection sort for n nodes starting from p
    void insertionSort(ListNodePosi(T),int); // Insertion sort for n nodes starting from p

public:
    // Constructors
    List(){init();} // Default
    List(const List<T> &); // Copy all nodes from a list
    List(const List<T> &, Rank r, int n); // Copy n nodes in a list starting from rank r
    List(ListNodePosi(T) p, int n); // Copy n nodes starting from position p
    // Destructors
    ~List();
    /// Read only
    Rank size() const{ return _size;}
    bool empty() const { return _size<=0;}
    T& operator [] (Rank r) const; // Access by rank;
    ListNodePosi(T) first() const { return header->succ;} // The position of header node
    ListNodePosi(T) last() const { return trailer->pred;} // The position of trailer node
    bool valid (ListNodePosi(T) p){
        return p&&(header!=p)&&(trailer!=p);
    } // Check if the node p is valid
    int disordered() const; // Check if the list is sorted
    ListNodePosi(T) find (const T&e) const{
        return find(e,_size,trailer);
    } // Find in a disordered list
    ListNodePosi(T) find (const T &, int, ListNodePosi(T))const; // Find in a disordered range
    ListNodePosi(T) search (T const& e) const{
        return search(e,_size,trailer);
    } // Search in a sorted list
    ListNodePosi(T) search(const T &, int, ListNodePosi(T) p)const; // Search in a sorted range
    ListNodePosi(T) selectMax (ListNodePosi(T) p, int n); // Select the max value from n-1 node starting from p(including p)
    ListNodePosi(T) selectMax (){ return selectMax(header->succ,_size);} // Select the max value in a list
    /// Write allowed
    ListNodePosi(T) insertAsFirst(const T &e); // Insert e as the first node(not header)
    ListNodePosi(T) insertAsLast(const T &e); // Insert e as the last node(not trailer)
    ListNodePosi(T) insertAfter(ListNodePosi(T) p, const T &e); // Insert e after node p
    ListNodePosi(T) insertBefore(ListNodePosi(T) p, const T &e); // Insert e before node p
    T remove(ListNodePosi(T) p); // Remove the node at p, then return it
    void merge(List<T> &L){merge(first(),size(),L,L.first(),L._size);} // Merge for a whole list
    void sort (ListNodePosi(T), int); // Sort the list in a range
    void sort (){sort(first(),_size);}; // Sort for whole list
    int deduplicate(); // Deduplicate in a unsorted list
    int uniquify(); // Deduplicate in a sorted list
    void reverse();
    // Traverse
    void traverse(void (*)(T&)); // Function pointer
    template <typename VST> void traverse(VST&); // Functor
};//List

#endif //LIST_LIST_H
