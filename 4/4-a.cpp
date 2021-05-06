#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, d, r;
  double f;
  cin >> a >> b;

  f = (double)a / (double)b;
  cout << a / b << " ";
  cout << a % b << " ";
  cout << fixed << setprecision(5) << f << endl;
}