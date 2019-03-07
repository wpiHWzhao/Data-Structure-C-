//
// Created by haowei on 3/7/19.
//

#ifndef STACK_STACK_LIST_H
#define STACK_STACK_LIST_H

#include "../../List/src/list.h"

template <typename T> class Stack:public List<T>{
public:
    void push(const T& e){insertAsLast(e);};
    T pop(){ return remove(List<T>::last());}
    T& top(){ return List<T>::last()->data;}
};

#endif //STACK_STACK_LIST_H
