#include <iostream>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    // Create nodes
    LinkedListNode<int> *node1 = new LinkedListNode<int>(10);
    LinkedListNode<int> *node2 = new LinkedListNode<int>(2);
    LinkedListNode<int> *node3 = new LinkedListNode<int>(3);

    // Link nodes
    node1->next = node2;
    
    node2->next = node3;

    // Print linked list
    LinkedListNode<int> *current = node1;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    // Delete nodes
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
