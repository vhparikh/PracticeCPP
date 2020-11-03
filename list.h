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
  void sub(list* origin, int copyNum);
  void cpyTill(list* origin, int num);
  void change();
  void deleteNum(int num);
  void addNum(int num, int pos);
private:
  Node* head;
};
