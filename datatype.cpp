#include <iostream>
using namespace std;

int main() {

  int a;
  a = 12;

  cout<<"Size of int "<<sizeof(a)<<endl;

  float b;
  cout<<"Size of float "<<sizeof(b)<<endl;

  char c;
  cout<<"Size of char "<<sizeof(b)<<endl;

  bool d;
  cout<< "Size of char "<<sizeof(d)<<endl;

  // type modifiers

  /*
    unsigned
    signed
    long
    short
  */

  short int shortest;
  cout<<"Size of int short int "<<sizeof(shortest)<<endl;

  long int longest;
  cout<<"Size of int long int "<<sizeof(longest)<<endl;

  unsigned int unsignedint;
  cout<<"Size of int unsignedint int "<<sizeof(unsignedint)<<endl;

  signed int signedint;
  cout<<"Size of int signedint int "<<sizeof(signedint)<<endl;

  return 0;
}