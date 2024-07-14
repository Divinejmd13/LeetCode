/****************************************************************

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

*****************************************************************/
Node *findIntersection(Node *firstHead, Node *secondHead)
{
    if (!firstHead || !secondHead)
        return NULL;

    Node *temp1 = firstHead;
    Node *temp2 = secondHead;

    while (temp1 != temp2)
    {
        temp1 = (temp1) ? temp1->next : secondHead;
        temp2 = (temp2) ? temp2->next : firstHead;
    }

    return temp1;
}
