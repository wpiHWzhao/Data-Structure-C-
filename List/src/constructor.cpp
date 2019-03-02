//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
List<T>::List(ListNodePosi(T) p, int n) {copyNodes(p,n);} // Copy all n elements starting from p

template <typename T>
List<T>::List(const List<T> &L) {copyNodes(L.first(),L._size);} // Copy all elements in a list

template <typename T>
List<T>::List(const List<T> &L, Rank r, int n) {copyNodes(L[r],n);} // Copy n elements from rank r in a list L

