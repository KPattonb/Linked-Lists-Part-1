//LinkedList
//Program using linked lists function in c++ for a student list
//Author: Kian Patton
//Date: 12/18/2017
#include "node.h"

int main() {

  //create students
  Student* student1 = new Student(1);
  Student* student2 = new Student(90);

  //create node pointers
  Node* node1 = new Node(student1);
  Node* node2 = new Node(student2);

  //set the next pointer
  node1->setNext(node2);

  //test output (should return 90)
  cout << node1->getNext()->getStudent()->getStud() << endl;

  return 0;
}
