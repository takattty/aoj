#include <bits/stdc++.h>
using namespace std;

// int main() {
//   int a, i=0;
//   vector<int> num(10000); // 今回は入力値を覚える必要が無いから、この配列は絶対要らない。
//   while(cin>>a) {
//     if(a==0) {
//       return 0;
//     } else {
//       num[i] = a;
//       cout << "Case" << " " << i+1 << ":" << " " << num[i] << endl;
//       i++;
//     }
//   }
// }

//参考コード
// #include <iostream>
// using namespace std;

// int main(){
// 	int i=1,x;
// 	cin >> x;
// 	while(x!=0){
// 		cout << "Case " << i <<": " << x << endl;
// 		i++;
// 		cin >> x;//ここで一つづつ代入している。
// 	}
// 	return 0;
// }

int main() {
  int i=1, x;
  cin >> x;
  while(x != 0) {
    cout << "Case " << i << ": " << x << endl;
    i++;
    // ここで大事な事は、余計な値を記憶しない事。大事なのは、iの値が記憶され続ける事。
    cin >> x;
  }
  return 0;
}