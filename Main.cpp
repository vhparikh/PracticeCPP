#include <iostream>
#include <cstring>
#include "list.h"

using namespace std;

int main()
{
  list* link = new list();
    
  link->build();
  link->print();
  cout << endl;
  link->rmHead();
  link->print();
}
