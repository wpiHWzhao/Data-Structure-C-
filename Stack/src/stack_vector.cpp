//
// Created by haowei on 3/7/19.
//

#include "../../Vector/src/Vector.h"

template <typename T> class Stack:public Vector<T>{
public:
    void push(const T& e){
        insert(e);
    }
    T pop(){ return remove(Vector<T>::size()-1);}
    T& top(){ return (*this)[Vector<T>::size()-1];}
};