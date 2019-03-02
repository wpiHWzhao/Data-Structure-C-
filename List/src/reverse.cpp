//
// Created by haowei on 2/28/19.
//

#include "list.h"

template <typename T>
void List<T>::reverse() {
    ListNodePosi(T) p = header;
    ListNodePosi(T) q = trailer;
    for (int i = 0; i < _size; i+=2) { // For each pair of node, swap them
        T temp = (p=p->succ)->data;
        p->data = (q=q->pred)->data;
        q->data = temp;
    }
}