#include <iostream>
using namespace std;

int main(){
  int quantidade;
  double preco;
  cout << "Insira a quantidade: ";
  cin >> quantidade;
  cout << "Insira o preço (utilizando \".\"): R$";
  cin >> preco;
  cout << "O preço total da compra é R$" << quantidade*preco << endl;
  return 0;
}
