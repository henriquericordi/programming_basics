#include <iostream>
using namespace std;

int main() {
  int ano;
  int idade;
  cout << "Digite o ano que voce nasceu: ";
  cin >> ano;
  idade = 2019 - ano;
  if (idade >= 18) {
    cout << "Pode tirar carteira de motorista" << endl;
  }
  else {
    cout << "Nao pode tirar carteira de motorista" << endl;
  }
  return 0;
}
