//
// Created by haowei on 2/26/19.
//

#ifndef LIST_LISTNODE_H
#define LIST_LISTNODE_H
typedef int Rank;
#define ListNodePosi(T) ListNode<T>*
#define NULL nullptr

template <typename T> struct ListNode{
    T data;
    ListNodePosi(T) pred;
    ListNodePosi(T) succ;
    ListNode(){}; // Constructor for header and trailer
    ListNode(T e, ListNodePosi(T) p = NULL, ListNodePosi(T) s= NULL): data(e), pred(p), succ(s){} // Constructor for normal node

    ListNodePosi(T) insertAsPred(const T &e);
    ListNodePosi(T) insertAsSucc(const T &e);
};//ListNode
#endif //LIST_LISTNODE_H
