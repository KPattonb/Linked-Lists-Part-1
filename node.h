#include <iostream>
#include <vector>
#include <map>
#include "student.h"
#include "string.h"

#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
 public:
  Node(Student*);
  ~Node();

  Node* getNext();
  Student* getStudent();
  void setNext();

 protected:
  Student* student;
  Node* node;
};

#endif
