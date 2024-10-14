#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* newNode(int data) {
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

Node* insertEnd(Node* head, int data) {
    if (head == NULL) return newNode(data);

    else 
        head->next = insertEnd(head->next, data);
    return head;
}

// Function to traverse the given LinkedList node using recursion
void traverse(Node* head) {
    if (head == NULL) return;
    cout << head->data << " -> ";
    traverse(head->next);
}

int main() {
    Node* head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);

    traverse(head);
}
