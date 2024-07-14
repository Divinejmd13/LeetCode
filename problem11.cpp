#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.



************************************************************/
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };
Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    Node<int> *head;
     Node<int> *curent;
    if (first->data > second->data)
    {
        head = second;
        second = second->next;
    }else{
        head = first;
        first = first->next;
    }
    curent = head;
    while (first || second)
    {
        if (first && second){
        if (first->data > second->data) {
                curent->next = second;
                curent = curent->next;
                second = second->next;
            }else{
                curent->next = first;
                curent = curent->next;
                first = first->next;
            }
        }else if(first){
            curent->next = first;
            break;
        }else if(second){
            curent->next = second;
            break;
        }
    }
    return head;
}
