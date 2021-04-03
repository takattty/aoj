#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c;

  cin >> a >> b >> c;

  int x[3];
  x[0] = a;
  x[1] = b;
  x[2] = c;

  sort(x, x+3);
  cout << x[0] << " " << x[1] << " " << x[2] << endl;
}

// 参考コード
// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main(){
//   int a[3];
//   cin >> a[0] >> a[1] >> a[2];
//   sort(a,a+3); // sort(関数名、関数の要素数)
//   cout << a[0]  << " "<< a[1] << " " <<a[2] << endl;
// }