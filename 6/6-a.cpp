#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> ans(n);
  for(int i=0; i<n; i++) {
    cin >> ans.at(i);
  }
  reverse(ans.begin(), ans.end());
  for(int i=0; i<n; i++) {
    if(i == (n-1)) {
      cout << ans.at(i);
    } else {
      cout << ans.at(i) << " ";
    }
  }
  cout << endl;
}