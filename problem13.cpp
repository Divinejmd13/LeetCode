/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    long dig = 1;
    long numb1 = 0;
    long numb2 = 0;
    while (num1 || num2)
    {
        if (num1)
        {
            numb1 = numb1 + num1->data * dig;
            num1 = num1->next;
        }
        if (num2)
        {
            numb2 = numb2 + num2->data * dig;
            num2 = num2->next;
        }
        dig = dig * 10;
    }
    long sum = numb1 + numb2;
    Node *head = nullptr;
    Node *tail = nullptr;

    while (sum != 0)
    {
        long digin = sum % 10;
        Node *newnode = new Node(digin);

        if (!head)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        sum /= 10;
    }
    return head;
}