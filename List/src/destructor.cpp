//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
List<T>::~List(){
    clear();
    delete header;
    delete trailer;
}