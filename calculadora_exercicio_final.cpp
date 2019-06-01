#include <iostream>
using namespace std;

int main() {
  char opcao;
  int x, y;
  do {
    cin >> x;
    cin >> opcao;
    cin >> y;
    cout << "= ";
    switch (opcao) {
      case '+':
        cout << x+y << endl;
      break;
      case '-':
        cout << x-y << endl;
      break;
      case '*':
        cout << x*y << endl;
      break;
      case '/':
        cout << x/y << endl;
      break;
    }
    cout << endl;
  } while(opcao == '+' || opcao == '-' || opcao == '*' || opcao == '/');
  return 0;
}
