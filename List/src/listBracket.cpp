//
// Created by haowei on 2/27/19.
//
#include "list.h"

// Operator overload. Low efficiency.
template <typename T>
T& List<T>::operator[](Rank r) const {
    ListNodePosi(T) p = first();
    while (0<r--) p=p->succ; // Iterate to the r th node.
    return p->data;
}