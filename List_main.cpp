#include "List.h"
#include <iostream>

int main() {
    List linkedList;
    linkedList.insertBack(10);
    linkedList.insertBack(20);
    linkedList.insertBack(30);

    std::cout << "Original list: ";
    linkedList.display();

    List copyList = linkedList;

    std::cout << "Copy of the original list: ";
    copyList.display();

    // Insert an element in the original list
    linkedList.insertBack(40);

    std::cout << "Original list after insertion: ";
    linkedList.display();

    std::cout << "Copied list after inserting an element in the original list: ";
    copyList.display();

    List assignedList;
    assignedList = linkedList;

    std::cout << "Original list after assignment: ";
    linkedList.display();
    std::cout << "Assigned List: ";
    assignedList.display();

    return 0;
}
