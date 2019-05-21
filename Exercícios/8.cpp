#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cout << "Digite o valor de a: ";
  cin >> a;
  cout << "Digite o valor de b: ";
  cin >> b;
  cout << "Digite o valor de c: ";
  cin >> c;
  a++;
  b = b + 1;
  c+=1;
  cout << "Depois de incrementar: " << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  return 0;
}
