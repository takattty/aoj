#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c; cin >> r >> c;
  vector< vector<int> > data(r+1, vector<int>(c+1));
  for(int i=0; i<r; i++) {
    for(int j=0; j<c; j++) {
      cin >> data.at(i).at(j);
    }
  }

  // 縦の計算
  for(int i=0; i<c; i++) {
    int count = 0;
    for(int j=0; j<r; j++) {
      count += data.at(j).at(i);
    }
    data.at(r).at(i) = count;
  }

  // 横の計算
  for(int i=0; i<=r; i++) {
    int count = 0;
    for(int j=0; j<=c; j++) {
      count += data.at(i).at(j);
    }
    data.at(i).at(c) = count;
  }

  for(int i=0; i<r+1; i++) {
    for(int j=0; j<c+1; j++) {
      if(j == c) {
        cout << data.at(i).at(j); 
      } else {
        cout << data.at(i).at(j) << " ";
      }
    }
    cout << endl;
  }
}