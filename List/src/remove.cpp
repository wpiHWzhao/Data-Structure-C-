//
// Created by haowei on 2/27/19.
//
#include "list.h"

template <typename T>
T List<T>::remove(ListNode<T> *p) {
    T e=p->data;
    // Renew predecessor and successor
    p->pred->succ = p->succ;
    p->succ->pred = p->pred;
    delete p;
    _size--;
    return e;
}