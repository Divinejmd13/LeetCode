/*
Following is the class structure of the Node class:

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
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
Node *recurssive(Node *head, int *n, int i)
{
    if (head->next == NULL || head == NULL)
    {
        *n = i;
        return NULL;
    }
    else
    {
        Node *mid = recurssive(head->next, n, i + 1);
        if (mid != NULL)
        {
            return mid;
        }
        else if (i == (*n / 2))
        {
            return head;
        }
        else
        {
            return NULL;
        }
    }
}
Node *findMiddle(Node *head)
{
    int n = 0;
    if (!head->next)
    {
        return head;
    }
    else if (!head->next->next)
    {
        return head->next;
    }

    return recurssive(head, &n, -1);
}
