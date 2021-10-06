#include <bits/stdc++.h>
using namespace std;

int main() {
  string ans;
  getline(cin, ans);

  for(int i=0; i<ans.size(); i++) {
    if(isupper(ans.at(i))) {
      ans.at(i) = tolower(ans.at(i));
    } else {
      ans.at(i) = toupper(ans.at(i));
    }
  }

  for(int i=0; i<ans.size(); i++) {
    cout << ans.at(i);
  }
  cout << endl;
}