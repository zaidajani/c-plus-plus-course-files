#include <iostream>
using namespace std;

int main() {
  
  int amount1;
  cout << "How much money you got from your mother? " << endl;
  cin>>amount1;
  
  int amount2;
  cout << "How much money you got from your father? " << endl;
  cin>>amount2;

  int sum = amount1 + amount2;
  cout << "The money you got in total is " << sum << endl;

  return 0;
}