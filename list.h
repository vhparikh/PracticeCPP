#include <iostream>
#include <cstring>

using namespace std;

struct Node {
  int value;
  Node* next;
};

class list {
 public:
  void build();
  void print();
  void rmHead();
 private:
  Node* head;
};
