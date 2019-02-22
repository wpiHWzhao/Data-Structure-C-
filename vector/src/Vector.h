//
// Created by haowei on 2/19/19.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

typedef int Rank;
#define DEFAULT_CAPACITY 3 //Default value, can be expand later

#include <iostream>

template <typename T> class Vector{
protected:
    Rank _size;
    int _capacity;
    T* _elem;
    // Below are member functions
    void copyFrom(const T* A, Rank lo, Rank hi); // Copy the vector ranging from A[lo,hi)
    void expand(); // Expand if needed
    void shrink(); // Shrink if too much space in vector is null to save storage
    bool bubble(Rank lo, Rank hi); // Part of bubble sort
    void bubbleSort(Rank lo, Rank hi); // Bubble sort
    Rank max(Rank lo, Rank hi); // Find the rank of largest vector element
    void selectionSort(Rank lo, Rank hi);// TODO:Selection sort
    void merge(Rank lo, Rank mi, Rank hi); // Merge algorithm
    void mergeSort(Rank lo, Rank hi); // Merge sort
    Rank partition(Rank lo, Rank hi); // TODO:
    void quickSort (Rank lo, Rank hi); // TODO:Quick sort
    void heapSort (Rank lo, Rank hi); // TODO:Heap sort
    void swap(T&, T&);
public:
    /// Constructors
    Vector(int c = DEFAULT_CAPACITY, int s =0, T v=0){ // Initial capacity is c, size is s, all element is v
        _elem=new T[_capacity=c];
        for(_size=0;_size<s;_elem[_size++]=v); // s<=c
    }

    Vector (const T* A, Rank n){copyFrom(A,0,n);} // Copy all element
    Vector (const T* A, Rank lo, Rank hi){copyFrom(A,lo,hi);} // Copy from a lo to hi
    Vector (const Vector<T> &V){copyFrom(V._elem, 0, V._size);}
    Vector (const Vector<T> &V, Rank lo, Rank hi){copyFrom(V._elem, lo, hi);}
    // Destructors
    ~Vector(){delete [] _elem;}
    /// Read only ports
    Rank size() const { return _size;} // Return size
    bool empty() const { return !_size;} // Return if vector is empty
    int disordered() const; // Check if vector is sorted
    Rank find (const T& e) const { return find(e,0,_size);} // Find an element in a disordered vector
    Rank find (const T& e, Rank lo, Rank hi) const; // Find an element in a range of disordered vector
    Rank search (const T& e) const {
        return (!_size) ? -1:search(e,0,_size);
        // return (0>=_size) ? -1:search(e,0,_size);
    }; // Search an element from a sorted vector
    Rank search(const T& e, Rank lo, Rank hi) const; // Search an element in a range of a sorted vector
    /// Write-allowed ports
    T& operator[](Rank r);// overload [] to reference a element like a array
    const T& operator[](Rank r) const ; // To be used as rvalue
    Vector<T> & operator = (const Vector<T> &); // overload = to directly clone a vector
    T remove(Rank r); // Delete the element of rank r
    int remove (Rank lo, Rank hi); // Delete all elements in [lo,hi)
    Rank insert (Rank r, const T &e); // Insert an element at a certain rank
    Rank insert (const T &e){ return insert(_size,e);} // Default insert position is at the end
    void sort(Rank lo, Rank hi); // Sort elements between lo and hi
    void sort(){sort(0,_size);} // Sort all elements
    void unsort(Rank lo, Rank hi); // Unsort elements in [Lo,hi)
    void unsort(){unsort(0,_size);} // Unsort all elements
    int deduplicate(); // For unsorted vector
    int uniquify(); // For sorted vector
    // Traverse. Can be used to do some operations to all elements in the vector
    void traverse(void(*)(T&)); // Function pointer. Read-only or modify locally.
    template <typename VST> void traverse(VST &); // Function object. It can modify globally.
    ///Operator overload
    // Overload "<<" to print vector
    friend std::ostream& operator << (std::ostream& os, const Vector<T>& v ){
        if(v.size()==0) return os<<"The vector is empty";
        else {
            os << "[ ";
            for (int i = 0; i < v.size(); ++i) {
                os << v[i] << " ";
            }
            os << "]" << std::endl;
        }
        return os;
    };
}; // Vector


#endif //VECTOR_VECTOR_H
