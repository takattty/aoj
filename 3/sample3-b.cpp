#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, i=0;
  vector<int> num(10000);
  while(cin>>a) {
    if(a==0) {
      return 0;
    } else {
      num[i] = a;
      cout << "Case" << " " << i+1 << ":" << " " << num[i] << endl;
      i++;
    }
  }
}