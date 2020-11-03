#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include "list.h"

using namespace std;

void list::build() {
  int counter = 0;
  Node* n = new Node();
  n->value = rand() % 21;
  head = n;
  counter++;
  while (counter != 12) {
    Node* temp = new Node();
    temp->value = rand() % 20;
    n->next = temp;
    n = n->next;
    counter++;
  }
}

void list::print() {
  Node* current = head;
  while (current != NULL) {
    cout << current->value << endl;
    current = current->next;
  }
}
