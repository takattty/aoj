#include <iostream>
using namespace std;

int main() {
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  if(x < 0 || y < 0) {
    cout << "No" << endl;
  } else if(W >= x+r && H >= y+r) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

// 参考コード
// #include<iostream>
// using namespace std;
// int main() {
//   int w, h, x, y, r;
//   cin >> w >> h >> x >> y >> r;
//   // ポイントは２つ
//   // ・円が中にある絶対条件を書く
//   // 　・xとyが負である＝xとyが正であればいいので、0<=r<=100を使って判断
//   // 　・加えて円が外に出ない様に条件を記入
//   // ・それ以外をまとめる
//   if (r <= x&&x <= w - r&&r <= y&&y <= h - r)cout << "Yes" << endl;
//   else cout << "No" << endl;
//   return 0;
// }