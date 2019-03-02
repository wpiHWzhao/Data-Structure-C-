//
// Created by haowei on 2/26/19.
//

#include "listNode.h"

template <typename T>
ListNodePosi(T) ListNode<T>::insertAsPred(const T &e) {
    ListNodePosi(T) x = new ListNode(e,pred,this); // New node
    pred->succ = x;
    pred = x;
    return x;
}