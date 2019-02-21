//
// Created by haowei on 2/20/19.
//

#include "Vector.h"

template <typename T>
void Vector<T>::sort(Rank lo, Rank hi) {
    int n = 1; // Change this to switch between sorting methods
    switch (n){
        case 1:mergeSort(lo,hi);
            break;
        default:bubbleSort(lo,hi);
            break;
    }
}