#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int ans = 0;
  while(a<=b) {
    if(c % a == 0) {
      ans += 1;
    }
    a++;
  }
  cout << ans << endl;
}