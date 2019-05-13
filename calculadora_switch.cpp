#include <iostream>
using namespace std;

int main() {
  char opcao;
  int x, y, resultado;
  cin >> x;
  cin >> opcao;
  switch (opcao) {
    case '+':
      cin >> y;
      resultado = x + y;
    break;
    case '-':
      cin >> y;
      resultado = x - y;
    break;
    case '*':
      cin >> y;
      resultado = x * y;
    break;
    case '/':
      cin >> y;
      resultado = x / y;
    break;
  }
  cout << " = " << resultado << endl;
  return 0;
}
