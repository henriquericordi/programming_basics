#include <iostream>
using namespace std;

int main(){
  int x = 0;
  int total = 0;
  for (int i = 0; i < 10; i++) {
    cin >> x;
    total+=x;
  }
  cout << "O total é de: " << total << endl;
  return 0;
}
