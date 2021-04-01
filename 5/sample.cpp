#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; // この子はc++の標準出力を行う。<<演算子で値を送る。

int main() {
  int s = 0;
  int j;
  cin >> j;
  if (j>10) {
    for(int i=0; i<10; i++) {
      s = s + i + j;
    }
  } else if(j<10){
    s = s + j;
  } else {
    s = s + j + j;
  }

  cout << s << endl;
}