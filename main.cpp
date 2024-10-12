//José Antonio Fernández Pineda - A00344848

#include <iostream>

struct Node {
    int data; 
    Node* next; // Pointer to the next node in the linked list
};

void addNode(Node* &head, int data) {
    // Dynamically allocate memory for a new node
    Node* newNode = new Node; // Creates a new node on the heap
    newNode->data = data; // Assigns the passed-in value to the data field of the new node
    newNode->next = nullptr; // Sets the next pointer of the new node to nullptr (end of the list)

    // If the list is empty (head is null), the new node becomes the head of the list
    if (head == nullptr) {
        head = newNode; 
        return; 
    }

    Node* temp = head; // Temporary pointer to start at the head and traverse the list
    while (temp->next != nullptr) { // Traverse until reaching the last node (where next is nullptr)
        temp = temp->next; // Move to the next node
    }
    
    temp->next = newNode; 
}

void showList(Node* head) {
    Node* temp = head; 
    while (temp != nullptr) { 
        std::cout << temp->data << " "; 
        temp = temp->next; 
    }
    std::cout << std::endl;
}

int main() {
    Node* list = nullptr; // Initialize an empty list

    // Add nodes with values 40, 30, and 20 to the list
    addNode(list, 40); 
    addNode(list, 30);
    addNode(list, 20);

    std::cout << "Lista: ";
    showList(list); 

    return 0; 
}
