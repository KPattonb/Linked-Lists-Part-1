#include "node.h"

Node::Node(Student* student) {
  student = _student;
  node = NULL;
}

Node::~Node() {
  delete student;
  node = NULL;
}

Node* Node::getNext() {
  return node;
}

Student* Node::getStudent() {
  return student;
}

void Node::setNext(Node* current) {
  node = current;
}
