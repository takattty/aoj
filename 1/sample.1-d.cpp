#include <iostream>
using namespace std;

int main() {
  int a, b, c, d, e, f, g;

  cin >> a;
  b = a / 3600; // hour
  c = b * 3600; // hourをminに直す
  d = a - c;    // 入力から時間文を引く
  e = d / 60;   // min
  f = e * 60;   // minをsecに直す
  g = d - f;    // min - secで残りのsec

  cout << b << ":" << e << ":" << g << endl;
}