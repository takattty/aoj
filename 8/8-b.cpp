#include <bits/stdc++.h>
using namespace std;

int main() {
  while(1) {
    string n;
    int sum=0;
    cin >> n;
    if(n == "0") break;
    for(int i=0; i<n.size(); i++) {
      sum += n.at(i) - '0';
    }
    cout << sum << endl;
  }
}