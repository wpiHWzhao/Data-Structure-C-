//
// Created by haowei on 2/19/19.
//

#include "Vector.h"
#include <iostream>

// You can test the implement of Vector here.
// NOTE: If you want to try other type names. please declare template class Vector<"your typename">
// at the end of each *.cpp
int main(){
    Vector<int> v;
    v.Vector<int>::insert(0,1);
    v.Vector<int>::insert(1,4);
    v.Vector<int>::insert(2,3);
    v.Vector<int>::insert(3,4);
    v.Vector<int>::insert(4,2);
    std::cout<<"Before sorting:"<<std::endl;
    std::cout<<v;
    v.Vector<int>::sort();
    std::cout<<"After sorting:"<<std::endl;
    std::cout<<v;
};