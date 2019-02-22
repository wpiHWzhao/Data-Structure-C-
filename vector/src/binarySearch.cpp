//
// Created by haowei on 2/20/19.
//

#include "Vector.h"

// complexity O(logn)
template <typename T>
Rank Vector<T>::search(const T &e, Rank lo, Rank hi) const {
    while (lo<hi){
        Rank mi = (lo+hi)/2;
        (e<_elem[mi]) ? (hi=mi):(lo=mi+1); // [lo,mi) : (mi,hi)
    }
    return --lo;
}

template class Vector<int>;