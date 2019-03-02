//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
void List<T>::init() {
    header = new ListNode<T>;
    trailer = new ListNode<T>;
    header->pred = NULL; header->succ = trailer;
    trailer->pred = NULL; trailer->pred = header;
    _size=0;
}