#include <iostream>
#include <cstring>
#include "list.h"

using namespace std;

void list::rmHead() {
  Node* temp = head;
  head = head->next;
  delete temp;
}
