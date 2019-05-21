#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cout << "Digite um valor: ";
  cin >> a;
  cout << "Digite um valor: ";
  cin >> b;
  cout << "Valores Digitados: " << endl;
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  c = b;
  b = a;
  a = c;
  cout << "Depois da Troca: " << endl;
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  return 0;
}
