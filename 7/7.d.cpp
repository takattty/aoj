#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m, l; cin >> n >> m >> l;
  vector< vector<long long> > A(n, vector<long long>(m));
  vector< vector<long long> > B(m, vector<long long>(l));
  vector< vector<long long> > result(n, vector<long long>(l));

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cin >> A.at(i).at(j);
    }
  }
  for(int i=0; i<m; i++) {
    for(int j=0; j<l; j++) {
      cin >> B.at(i).at(j);
    }
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<l; j++) {
      long long sum = 0;
      for(int k=0; k<m; k++) {
        sum += A.at(i).at(k) * B.at(k).at(j);
      }
      result.at(i).at(j) = sum;
    }
  }

 for(int i=0; i<n; i++) {
    for(int j=0; j<l; j++) {
      cout << result.at(i).at(j);
      if(j != l-1) cout << " ";
    }
    cout << endl;
  }
}