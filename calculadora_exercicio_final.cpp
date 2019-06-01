#include <iostream>
using namespace std;

int main() {
  char opcao;
  int x, y;
  do {
    cin >> x;
    cin >> opcao;
    cin >> y;
    switch (opcao) {
      case '+':
      cout << "= " << x+y  << endl << endl;
      break;
      case '-':
      cout << "= " << x-y  << endl << endl ;
      break;
      case '*':
      cout << "= " << x*y  << endl << endl ;
      break;
      case '/':
      cout << "= " << x/y  << endl << endl ;
      break;
    }
  } while(opcao == '+' || opcao == '-' || opcao == '*' || opcao == '/');
  return 0;
}
