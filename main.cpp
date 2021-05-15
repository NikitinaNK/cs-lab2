#include <iostream>

using namespace std;

int main()
{cout << "Enter A and B: ";
int a, b, min;
cin >> a >> b;
 cout << "A + B = " << a + b << '\n'
      << "A - B = " << a - b << '\n'
      << "A*B = " << a*b << '\n'
      << "A / B = " << a / b << '\n';
      min=b;
      if(a<b)
      {
          min=a;
          cout << "min = " << a << '\n';
      }
      else
        cout << "min= " << b << '\n';
    return 0;
}
