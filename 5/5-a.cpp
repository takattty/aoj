#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  while(1) {
    if(a == 0 && b == 0) break;
    cin >> a >> b;
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
        cout << "#";
      }
      cout << endl;
    }
    cout << endl;
  }
}