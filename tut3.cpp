#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "Enter the number a: " << endl;
  cin >> a;

  cout << "Enter the number b: " << endl;
  cin >> b;

  cout << "Enter the number c: " << endl;
  cin >> c;

  if (a > b)
  {
    if (a > c) {
      cout << a << " Is the biggest\n" << endl;
    }
    else
    {
      cout << c << " Is the biggest\n" << endl;
    } 
  }
  else {
    if (b > c) {
      cout << b << " Is the biggest\n" << endl;
    }
    else
    {
      cout << c << " Is the biggest" << endl;
    }
    
  }

  return 0;
}
