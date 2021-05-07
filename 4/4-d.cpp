#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, total;
  cin >> n;
  vector<long long> ans(n);

  for(int i=0; i<n; i++) {
    cin >> ans.at(i);
  }

  sort(ans.begin(), ans.end());
  long long min = ans.at(0);
  long long max = ans.at(n-1);

  for(int i=0; i<n; i++) {
    total += ans.at(i);
  }

  cout << min << " " << max << " " << total << endl;
}