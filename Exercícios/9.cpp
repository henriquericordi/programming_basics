#include <iostream>
using namespace std;

int main(){
  int quantidade;
  double total;
  cout << "Insira o consumo de água em m³: ";
  cin >> quantidade;
  if (quantidade <= 10) {
    total = quantidade*2.55;
  }
  if (quantidade > 10 && quantidade <= 20) {
    total = quantidade*3.44;
  }
  if (quantidade > 20) {
    total = quantidade*5.25;
  }
  cout << "O total a pagar será de R$" << total << endl;
  return 0;
}
