//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
void List<T>::selectionSort(ListNode<T> *p, int n) {
    ListNodePosi(T) head = p->pred;
    ListNodePosi(T) tail = p;
    for (int i = 0; i < n; ++i) {
        tail = tail->succ;
    }// Selection range is (head,tail)
    while (1<n){
        ListNodePosi(T) max = selectMax(head->succ,n);
        insertBefore(tail,remove(max)); // Put it at the end of the range
        tail = tail->pred;
        n--;
    }
}