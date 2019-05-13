#include <iostream>
using namespace std;

int main() {
  char opcao;
  int x, y, resultado;
  cin >> x;
  cin >> opcao;
  if (opcao == '+'){
    cin >> y;
    resultado = x + y;
  }
  if (opcao == '-'){
    cin >> y;
    resultado = x - y;
  }
  if (opcao == '*'){
    cin >> y;
    resultado = x * y;
  }
  if (opcao == '/'){
    cin >> y;
    resultado = x / y;
  }
  cout << " = " << resultado << endl;
  return 0;
}
