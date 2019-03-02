//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
int List<T>::clear() {
    int oldSize = _size;
    while (0<_size)remove(header->succ);
    return oldSize;
}