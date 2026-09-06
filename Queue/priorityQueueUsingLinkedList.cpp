#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* GetNode() {
    Node* p = new Node;
    p->next = NULL;
    return p;
}

Node* ENQueue(Node* pq, int x) {
    Node* newnode = GetNode();
    newnode->data = x;

    Node *p, *q;
    p = pq;
    q = NULL;

    while (p != NULL && x >= p->data) {
        q = p;
        p = p->next;
    }

    if (q != NULL) {
        q->next = newnode;
        newnode->next = p;
    }
    else {
        newnode->next = pq;
        pq = newnode;
    }

    return pq;
}

void traverse(Node* head) {
    Node* p = head;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << endl;
}

Node* Dequeue(Node* pq) {

    if (pq == NULL) {
        cout << "Queue is empty!" << endl;
        return pq;
    }

    Node* p = pq;

    pq = pq->next;

    int x = p->data;

    cout << "Deletion Information is : " << x << endl;

    delete p;

    return pq;
}

int main() {

    Node* pq = NULL;

    pq = ENQueue(pq, 10);
    pq = ENQueue(pq, 5);
    pq = ENQueue(pq, 7);
    pq = ENQueue(pq, 3);
    pq = ENQueue(pq, 13);
    pq = ENQueue(pq, 8);

    cout << "Priority Queue: ";
    traverse(pq);

    pq = Dequeue(pq);

    cout << "After Dequeue: ";
    traverse(pq);

    return 0;
}