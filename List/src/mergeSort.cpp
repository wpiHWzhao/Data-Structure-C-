//
// Created by haowei on 2/27/19.
//
#include "list.h"

template <typename T>
void List<T>::mergeSort(ListNode <T> *&p, int n) {
    if (n<2) return;
    int m = n /2;
    ListNodePosi(T) q = p;
    for (int i = 0; i<m; i++) q=q->succ; // Increment q to its desired position
    mergeSort(p,m);mergeSort(q,n-m);
    merge(p,m,*this,q,n-m);
}