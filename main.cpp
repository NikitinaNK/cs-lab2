#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
int a, b,max;
cin >> a >> b;
max=a;
      if (a<b)
      {
          max=b;
          cout << "max= " << b << '\n';
      }
      else
        cout << "max= " << a << '\n';
 cout << "A + B = " << a + b << '\n'
      << "A - B = " << a - b << '\n'
      << "A*B = " << a*b << '\n'
      << "A / B = " << a / b << '\n';
    return 0;
}
