#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include "list.h"

using namespace std;

int main()
{
  srand(time(NULL));
  list* link = new list();
  link->build();
  //list* l = new list();
  link->print();
  cout << endl;
  list* py = new list();
  py->cpyTill(link, 13);
  py->print();
  //link->addNum(20121, 9);
  //link->deleteNum(5);
  //link->print();
  //link->rmHead();
  //link->print();
  //cout << endl;
  //l->sub(link, 10);
  //l->change();
  //cout << endl;
  //l->print();
  //cout << endl;
  //link->print();
}
