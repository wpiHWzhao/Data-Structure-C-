//
// Created by haowei on 2/27/19.
//

#include "list.h"

// Starting from p, in r prior elements, find the last data that equals to e
template <typename T>
ListNodePosi(T) List<T>::find(const T &e, int n, ListNode<T> *p) const {
    while (0<n--) {
        p=p->pred;
        if (e==p->data) return p;
    }
    return NULL;
}