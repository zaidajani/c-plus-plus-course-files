#include <iostream>
using namespace std;

int main() {
  int noc;
  int nor;
  int i;
  int j;

  cout << "Enter the number of rows" << endl;
  cin >> nor;

  cout << "Enter the number of columns" << endl;
  cin >> noc;

  for ( i = 0; i < noc; i++)
  {
    for ( j = 0; j < nor; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  
}