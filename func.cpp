#include <iostream>
#include <cstring>
#include "list.h"

using namespace std;

void list::rmHead() {
  Node* temp = head;
  head = head->next;
  delete temp;
}

void list::sub(list* origin, int copyNum) {
  int counter = 0;
  head = new Node();
  Node* temp = head;
  Node* c = origin->head;
  temp->value = c->value;
  c = c->next;
  counter++;
  while (counter != copyNum) {
    Node* n = new Node();
    n->value = c->value;
    temp->next = n;
    temp = temp->next;
    c = c->next;
    counter++;
  }
}

void list::cpyTill(list* origin, int num) {
  if (origin->head->value == num) {
    cout << "Nothing to copy as the head node is the value you want to stop at" << endl;
    return;
  }

  head = new Node();
  Node* temp = head;
  Node* c = origin->head;
  temp->value = c->value;
  c = c->next;
  while (c->value != num) {
    Node* n = new Node();
    n->value = c->value;
    temp->next = n;
    temp = temp->next;
    if (c->next == NULL) {
      return;
    }
    c = c->next;
  }
}

void list::change() {
  head->value = 40;
}

void list::deleteNum(int num) {
  Node* current = head;
  while (current != NULL) {
    if (current->value == num && current == head) {
      head = head->next;
      delete current;
      current = head;
    }
    else if (current->next == NULL) {
      return;
    }
    else if (current->next->value == num) {
      Node* temp = current->next->next;
      delete current->next;
      current->next = temp;
    }
    else {
      current = current->next;
    }
  }
}

void list::addNum(int num, int pos) {
  Node* current = head;
  int counter = 1;

  while (counter != pos - 1) {
    current = current->next;
    counter++;
  }

  Node* temp = new Node();
  temp->value = num;
  temp->next = current->next;
  current->next = temp;
}          
