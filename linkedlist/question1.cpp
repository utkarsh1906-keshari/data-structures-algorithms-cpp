#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Insert at End
void insertEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Display List
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Union of two sorted linked lists
Node* Union(Node *L1, Node *L2)
{
    Node *L3 = NULL;

    while (L1 != NULL && L2 != NULL)
    {
        if (L1->data < L2->data)
        {
            insertEnd(L3, L1->data);
            L1 = L1->next;
        }
        else if (L2->data < L1->data)
        {
            insertEnd(L3, L2->data);
            L2 = L2->next;
        }
        else
        {
            insertEnd(L3, L1->data);
            L1 = L1->next;
            L2 = L2->next;
        }
    }

    while (L1 != NULL)
    {
        insertEnd(L3, L1->data);
        L1 = L1->next;
    }

    while (L2 != NULL)
    {
        insertEnd(L3, L2->data);
        L2 = L2->next;
    }

    return L3;
}

// Intersection of two sorted linked lists
Node* Intersection(Node *L1, Node *L2)
{
    Node *L3 = NULL;

    while (L1 != NULL && L2 != NULL)
    {
        if (L1->data < L2->data)
            L1 = L1->next;

        else if (L2->data < L1->data)
            L2 = L2->next;

        else
        {
            insertEnd(L3, L1->data);
            L1 = L1->next;
            L2 = L2->next;
        }
    }

    return L3;
}

int main()
{
    Node *list1 = NULL;
    Node *list2 = NULL;

    // S1 = {2,4,6,10,12,15}
    insertEnd(list1, 2);
    insertEnd(list1, 4);
    insertEnd(list1, 6);
    insertEnd(list1, 10);
    insertEnd(list1, 12);
    insertEnd(list1, 15);

    // S2 = {1,3,4,5,8,10}
    insertEnd(list2, 1);
    insertEnd(list2, 3);
    insertEnd(list2, 4);
    insertEnd(list2, 5);
    insertEnd(list2, 8);
    insertEnd(list2, 10);

    cout << "List 1: ";
    display(list1);

    cout << "List 2: ";
    display(list2);

    Node *uni = Union(list1, list2);
    cout << "Union: ";
    display(uni);

    Node *inter = Intersection(list1, list2);
    cout << "Intersection: ";
    display(inter);

    return 0;
}