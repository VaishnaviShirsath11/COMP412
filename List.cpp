#include "List.h"
#include <iostream>

Node::Node(int value) {
    this->data = value;
    this->next = nullptr;
}

List::List() {
    this->head = nullptr;
}

List::List(const List& copy) {
    this->head = nullptr;
    Node* present = copy.head;
    while (present != nullptr) {
        insertBack(present->data);
        present = present->next;
    }
}

List& List::operator=(const List& copy) {
    if (this == &copy) {
        return *this;
    }

    clear();

    Node* present = copy.head;
    while (present != nullptr) {
        insertBack(present->data);
        present = present->next;
    }

    return *this;
}

List::~List() {
    clear();
}

void List::insertBack(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void List::clear() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void List::display() {
    Node* present = head;
    while (present) {
        std::cout << present->data << " ";
        present = present->next;
    }
    std::cout << std::endl;
}
