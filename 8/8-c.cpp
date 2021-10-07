#include <bits/stdc++.h>
using namespace std;

int main() {
  // string res;
  // map<char, int> score;

  // for(char al='a'; al<='z'; al++) {
  //   score[al] = 0;
  // }

  // while(cin >> res) {
  //   // for(char al='a'; al<='z'; al++) {
  //   //   int count = 0; 
  //   //   for(int i=0; i<res.size(); i++) {
  //   //     if(res.at(i) == al) {
  //   //       count++;
  //   //     }
  //   //   }
  //   //   score[al] = count;
  //   // }
  //   for(int i=0; i<(int)res.size(); i++) {
  //     if(isupper(res.at(i))) {
  //       res.at(i) = tolower(res.at(i));
  //     }
  //   }
  //   for(int i=0; i<(int)res.size(); i++) {
  //     score[res.at(i)]++;
  //   }
  // }

  // for(char al='a'; al<='z'; al++) {
  //   cout << al << ":" << score[al] << endl;
  // }


  char ch;
  vector<int> vec(26);

  while(cin >> ch) {
    ch = tolower(ch);
    if((ch - 'a')>0 ) {
      vec.at(ch - 'a')++;
    }
  }

  for(int i=0; i<26; i++) {
    cout << 'a'+i << " : " << vec.at(i) << endl;
  }

  char ch;
  int a[26]={0};

  while ( cin>> ch){
    int num;
    if(isupper(ch)){
      ch=tolower(ch);
    }
    a[ch - 'a']++;
  }
  for(int i=0; i<26;i++){
    ch='a'+i;
    cout << ch << " : "<<a[i]<< endl;
  }
}