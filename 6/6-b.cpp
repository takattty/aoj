#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, num;
  string mark;
  cin >> n;

  vector<int> s(13);
  vector<int> h(13);
  vector<int> c(13);
  vector<int> d(13);

  for(int i=0; i<n; i++) {
    cin >> mark >> num;
    if(mark == "S") {
      s.at((num-1)) = num;
    } else if(mark == "H") {
      h.at((num-1)) = num;
    } else if(mark == "C") {
      c.at((num-1)) = num;
    } else if(mark == "D") {
      d.at((num-1)) = num;
    }
  }

  for(int i=0; i<13; i++) {
    if(s.at(i) == 0) {
      cout << "S " << i+1 << endl;
    }
  }
  for(int i=0; i<13; i++) {
    if(h.at(i) == 0) {
      cout << "H " << i+1 << endl;
    }
  }
  for(int i=0; i<13; i++) {
    if(c.at(i) == 0) {
      cout << "C " << i+1 << endl;
    }
  }
  for(int i=0; i<13; i++) {
    if(d.at(i) == 0) {
      cout << "D " << i+1 << endl;
    }
  }
}