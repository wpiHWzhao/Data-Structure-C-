//
// Created by haowei on 3/7/19.
//

#include <cstdlib>
#include "list.h"

template <typename T>
void List<T>::sort(ListNode<T> *p, int n) {
    switch (rand()%3){
        case 1: insertionSort(p,n); // Insertion Sort
            break;
        case 2: selectionSort(p,n); // Selection Sort
            break;
        default: mergeSort(p,n); // Merge Sort
            break;
    }
}