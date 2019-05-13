#include <iostream>
using namespace std;

int main() {
  int idade;
  cout << "Insira sua idade: ";
  cin >> idade;
  if (idade >= 18) {
    cout << "Pode beber!" << endl;
  }
  else {
    cout << "Não pode beber!" << endl;
  }
}
