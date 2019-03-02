//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T> // Select max data from n nodes starting from node p(including p)
ListNodePosi(T) List<T>::selectMax(ListNode<T> *p, int n) {
    ListNodePosi(T) max = p;
    while (1<n--){
        ListNodePosi(T) curr = p->succ;
        if (!(curr->data < max->data)){
            max = curr;
            p=curr;
        }
    }
    return max;
}