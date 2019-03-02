//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
int List<T>::deduplicate() {
    if (_size<2) return 0;
    int oldSize = _size;
    ListNodePosi(T) p =header;Rank r =0;
    while (trailer!=(p->succ)){
        ListNodePosi(T) q=find(p->data,r,p); //In r nodes prior to p. find the same data as p
        q? remove(q):r++; // If q exists. then remove. Else increment r.
    }
    return oldSize-_size;
}