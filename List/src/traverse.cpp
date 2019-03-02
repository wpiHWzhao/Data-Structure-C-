//
// Created by haowei on 2/28/19.
//

#include "list.h"

template <typename T>
void List<T>::traverse(void (*visit) (T&)) { // Function pointer
    for (ListNodePosi(T) p= header->succ;p!=trailer;p=p->succ) visit(p->data);
}

template <typename T> template <typename VST>
void List<T>::traverse(VST & visit) { // Functor
    for (ListNodePosi(T) p= header->succ;p!=trailer;p=p->succ) visit(p->data);
}