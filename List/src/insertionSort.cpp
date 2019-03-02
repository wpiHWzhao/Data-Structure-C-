//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
void List<T>::insertionSort(ListNode<T> *p, int n) {
    for (int r = 0; r < n; ++r) { // For every node
        insertAfter(search(p->data,r,p),p->data); // Find the right place to insert
        p=p->succ;remove(p->pred); // Move to the next node
    }
}