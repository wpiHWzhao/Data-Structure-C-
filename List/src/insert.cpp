//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
ListNodePosi(T) List<T>::insertAsFirst(const T &e) {
    _size++;
    return header->insertAsSucc(e); // e as the first node
}

template <typename T>
ListNodePosi(T) List<T>::insertAsLast(const T &e) {
    _size++;
    return trailer->insertAsPred(e); // e as the last node
}

template <typename T>
ListNodePosi(T) List<T>::insertAfter(ListNode<T> *p, const T &e) {
    _size++;
    return p->insertAsPred(e); // Insert e after p
}

template <typename T>
ListNodePosi(T) List<T>::insertBefore(ListNode<T> *p, const T &e) {
    _size++;
    return p->insertAsPred(e); // Insert e before p
}
