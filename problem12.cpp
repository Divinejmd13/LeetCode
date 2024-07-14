#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *removeKthNode(Node *head, int K)
{
    int i = 1;
    Node *pre;
    Node *nhead;
    if (head == nullptr || K <= 0)
    {
        return head;
    }

    if (K == 0)
    {
        return head->next;
    }
    else
    {
        nhead = head;
        pre = head;
        head = head->next;
    }
    while (head)
    {
        if (i == K)
        {
            pre->next = head->next;
            delete head;
            break;
        }
        i++;
        head = head->next;
        pre = pre->next;
        if (head->next == NULL)
            return nhead->next;
    }

    return nhead;
}

int main()
{
    // Creating a linked list:20 11 27 21 30 27 25 20 
    Node *head = new Node(20);
    head->next = new Node(11);
    head->next->next = new Node(27);
    head->next->next->next = new Node(21);
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->next = new Node(27);
    head->next->next->next->next->next->next = new Node(25);
    head->next->next->next->next->next->next = new Node(20);


    // Displaying the original linked list
    std::cout << "Original Linked List: ";
    Node *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // Removing the 3rd node (K=3)
    int K = 3;
    head = removeKthNode(head, K);

    // Displaying the modified linked list
    std::cout << "Modified Linked List: ";
    current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // Deallocating memory
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}