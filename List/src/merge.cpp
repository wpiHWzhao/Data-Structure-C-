//
// Created by haowei on 2/27/19.
//

#include "list.h"

template <typename T>
void List<T>::merge(ListNode<T> *&p, int n, List<T> & L, ListNode<T> *q, int m) {
    // Assert: this.valid(p) && rank(p)+n<=_size && this.sorted(p,n)
    //         L.valid(p) && rank(q)+m<=L._size && L.sorted(q,m)
    // Note: It is possible that   this == L && rank(p)+n=rank(q)
    ListNodePosi(T) pp = p->pred; // Use predecessor to store position
    while (0<m){ // When q is still in range
        if ((0<n)&&(p->data<=q->data)){ // If p is in range and v(p)<=v(q) then
            if(q==(p=p->succ)) break;// Merge p into list, and let p points to its successor
            n--;
        } else{
            insertBefore(p,L.remove((q=q->succ)->pred)); // Insert q before p, then remove q and let it points to its successor
            m--;
        }
    }
    p=pp->succ; // New start point after merge
}