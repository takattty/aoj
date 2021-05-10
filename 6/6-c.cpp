#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, b, f, r, v;
  cin >> n;

  vector<vector<int>> first(3, vector<int>(10));
  vector<vector<int>> second(3, vector<int>(10));
  vector<vector<int>> third(3, vector<int>(10));
  vector<vector<int>> forth(3, vector<int>(10));

  for(int i=0; i<n; i++) {
    cin >> b >> f >> r >> v;
    if(b == 1) {
      first.at(f-1).at(r-1) = v;
    } else if(b == 2) {
      second.at(f-1).at(r-1) = v;
    } else if(b == 3) {
      third.at(f-1).at(r-1) = v;
    } else {
      forth.at(f-1).at(r-1) = v;
    }
  }

  for(int i=0; i<3; i++) {
    for(int j=0; j<10; j++) {
      cout << first.at(i).at(j);
    }
    cout << endl;
  }
  cout << "####################" << endl;

  for(int i=0; i<3; i++) {
    for(int j=0; j<10; j++) {
      cout << second.at(i).at(j);
    }
    cout << endl;
  }
  cout << "####################" << endl;

  for(int i=0; i<3; i++) {
    for(int j=0; j<10; j++) {
      cout << third.at(i).at(j);
    }
    cout << endl;
  }
  cout << "####################" << endl;

  for(int i=0; i<3; i++) {
    for(int j=0; j<10; j++) {
      cout << forth.at(i).at(j);
    }
    cout << endl;
  }
}