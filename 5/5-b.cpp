#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  while(1) {
    if(a == 0 && b == 0) break;
    cin >> a >> b;
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
        if((i == 0 || i == (a-1)) || (j == 0 || j == (b-1))) {
          cout << "#";
        } else {
          cout << ".";
        }
      }
      cout << endl;
    }
    cout << endl;
  }
}