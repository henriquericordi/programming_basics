#include <iostream>
using namespace std;

int main() {
  int contador = 1; //declaração da variavel contador e atribuição do valor 1
  do {
    cout << contador << endl;
    contador++; //soma +1 a variavel contador
  } while (contador <= 10);
  return 0;
}
