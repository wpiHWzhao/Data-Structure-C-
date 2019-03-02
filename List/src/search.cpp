//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
ListNodePosi(T) List<T>::search(const T &e, int n, ListNode<T> *p) const {
    // In a sorted list, for n predecessors of node p, find the max element.
    // If failed, return the predecessor of left boundary.
    do{
        p=p->pred;
        n--;
    }while((-1<n--)&&(e<p->data));
    return p;
}