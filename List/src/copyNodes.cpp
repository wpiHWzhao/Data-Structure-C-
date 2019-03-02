//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
void List<T>::copyNodes(ListNode<T> *p, int n) {
    init(); // Create header and trailer
    while (0<n--){insertAsLast(p->data);p=p->succ;} // Insert n nodes from p as successors
}