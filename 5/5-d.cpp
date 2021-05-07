#include <bits/stdc++.h>
using namespace std;

// bool isth(int n) {
//   while(n) {
//     if(n % 10 == 3) {return true;}
//     n /= 10;
//   }
//   return false;
// } 

int main() {
  int n, i;
  cin >> n;
  while(1) { // なんでこれでいけないのかわからん
    if(i > n) break;
    if(i % 3 == 0) {
      cout << " " << i;
    } else if(i % 10 == 3) {
      cout << " " << i;
    }
    i++;
  }
  // for(int i=3; i<=n; i++) {
  //   if(i % 3 == 0 || isth(i)) {
  //     cout << " " << i;
  //   }
  // }
  cout << endl;
}