#include <iostream>
using namespace std;

int main(){
  double lado1, lado2;
  cout << "Tamanho lado 1: ";
  cin >> lado1;
  cout << "Tamanho lado 2: ";
  cin >> lado2;
  cout << "Perímetro: " << lado1+lado1+lado2+lado2 << "m" << endl;
  cout << "Área: " << lado1*lado2 << "m²" << endl;
  return 0;
}
