//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
int List<T>::disordered() const { // Count the adjacent inverse pair
    int n = 0;
    ListNodePosi(T) p=first();
    for (int i=0; i<_size-1; p=p->succ, i++ ){
        if (p->data>p->succ->data) n++;
    }
    return n;
}