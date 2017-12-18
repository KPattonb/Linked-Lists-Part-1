#include <iostream>
#include <vector>
#include <map>
#include "student.h"
#include "string.h"

#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
  //constructor and deconstructor
 public:
  Node(Student*);
  ~Node();

  //function declarations
  Node* getNext();
  Student* getStudent();
  void setNext(Node*);

  //variable declarations
 protected:
  Student* student;
  Node* node;
};

#endif
