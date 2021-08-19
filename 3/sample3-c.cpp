#include <bits/stdc++.h>
using namespace std;

// int main() {
//   int a, b;

//   while(1) {
//     cin >> a >> b;
//     if(a == 0 && b == 0) break;
//     if(a > b) {
//       cout << b << " " << a << endl;
//     } else {
//       cout << a << " " << b << endl;
//     }
//   }
// }

int main() {
  int a, b;
  cin >> a >> b;
  while(a != 0 && b != 0) {
    if(a > b) {
      cout << b << " " << a << endl;
    } else {
      cout << a << " " << b << endl; 
    }
    cin >> a >> b;
  }
  return 0;
}