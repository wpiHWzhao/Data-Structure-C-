//
// Created by haowei on 2/19/19.
//

#include "Vector.h"

template <typename T>// Success: return rank. Failed: return rank lo-1
Rank Vector<T>::find(const T &e, Rank lo, Rank hi) const { //0<=lo<hi<=_size
    while ((lo<hi--)&&(_elem[hi] != e));
    return hi;
}