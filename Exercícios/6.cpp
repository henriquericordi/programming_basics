#include <iostream>
using namespace std;

int main(){
  double farenheit;
  double celsius;
  cout << "Digite os graus Farenheit: ";
  cin >> farenheit;
  celsius = 5.0/9 * (farenheit - 32); //5.0 por estar trabalhando com decimais e não inteiros
  cout << "O equivalente em Célsius: " << celsius << endl;
  return 0;
}
