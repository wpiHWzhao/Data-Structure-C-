//
// Created by haowei on 2/20/19.
//

#include "Vector.h"

// Complexity O(nlogn)

template <typename T>
void Vector<T> ::mergeSort(Rank lo, Rank hi) {
    if (hi-lo<2) return;
    Rank mi = (lo+hi)/2;
    mergeSort(lo,mi);
    mergeSort(mi,hi);
    merge(lo,mi,hi);
}

template <typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi) {
    T* A = _elem+lo; // A[0,hi-lo) = _elem[lo,hi)
    int lb = mi-lo;
    T* B = new T[lb]; // B[0,hi-lo) = _elem[lo,mi)
    for (int i = 0; i<lb; B[i] = A[i++]);
    int lc = hi-mi;
    T* C = _elem + mi; // C[0,lc) = _elem[mi,hi)
    for (int i=0, j =0, k=0; (j<lb)||(k<lc);){
        if ((j<lb) && ((k>=lc)||(B[j]<=C[k]))) A[i++] = B[j++];
        if ((k<lc) && ((j>=lb)||(B[j]>C[k]))) A[i++] = C[k++]; // If we code like B[j]>=C[k], the stability of the code cannot be guaranteed
    }
    delete []B;
    // Simple version:
//    for ( Rank i = 0, j = 0, k = 0; j < lb; ) {
//        if ( ( k < lc ) && ( C[k] < B[j] ) ) A[i++] = C[k++];
//        if ( ( lc <= k ) || ( B[j] <= C[k] ) ) A[i++] = B[j++];
//        }
}

template class Vector<int>;