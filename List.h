#ifndef LIST_H
#define LIST_H

class Node {
public:
    int data;
    Node* next;

    Node(int value);
};

class List {
private:
    Node* head;

public:
    List();
    List(const List& copy);
    List& operator=(const List& copy);
    ~List();

    void insertBack(int value);
    void clear();
    void display();
};

#endif
