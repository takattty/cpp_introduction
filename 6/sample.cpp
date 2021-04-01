#include <iostream>

int a[5]; // 整数を格納できる要素数５の配列宣言
// int a[5] = {10, 2, 0, -5, -23}; // これも配列と変数代入の初期化
int b[10];
int n = 3;
double *arr; //ポインタの部分

int main() {
  a[0] = 10;
  a[1] = 2;
  a[2] = 0;
  a[3] = -5;
  a[4] = -23;
  arr = new double[n];

  for(int i=0; i<10; i++) {
    b[i] = 3*i;
    std::cout << b[i] << std::endl;
  }

  for(int i=0; i<5; i++) {
    std::cout << "配列aの" << i << "番目は" << a[i] << "です" << std::endl;
  }
  delete[] arr;
}

