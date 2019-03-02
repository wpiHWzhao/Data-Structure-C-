//
// Created by haowei on 2/26/19.
//

#include "listNode.h"

template <typename T>
ListNodePosi(T) ListNode<T>::insertAsSucc(const T &e) {
    ListNodePosi(T) x = new ListNode(e,this,succ); // new node
    succ->pred = x;
    succ = x;
    return x;
}