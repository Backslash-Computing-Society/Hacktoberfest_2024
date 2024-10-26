#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the list
void insert(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

// Function to display the entire list
void display(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Function to delete a node by value
void deleteNode(Node*& head, int value) {
    if (!head) return; // List is empty
    if (head->data == value) { // Node to delete is the head
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    while (current->next && current->next->data != value) {
        current = current->next;
    }
    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

// Function to find if a value exists in the list
bool find(Node* head, int value) {
    Node* temp = head;
    while (temp) {
        if (temp->data == value) return true;
        temp = temp->next;
    }
    return false;
}

// Function to reverse the linked list
void reverse(Node*& head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

// Function to count the number of nodes in the list
int countNodes(Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    Node* head = nullptr;

    // Inserting nodes
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    
    cout << "Original list: ";
    display(head);

    // Deleting a node
    deleteNode(head, 2);
    cout << "After deleting 2: ";
    display(head);

    // Finding a node
    int searchValue = 3;
    if (find(head, searchValue)) {
        cout << searchValue << " is found in the list." << endl;
    } else {
        cout << searchValue << " is not found in the list." << endl;
    }

    // Reversing the list
    reverse(head);
    cout << "Reversed list: ";
    display(head);

    // Counting nodes
    int totalNodes = countNodes(head);
    cout << "Total number of nodes: " << totalNodes << endl;

    return 0;
}
