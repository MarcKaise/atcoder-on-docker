#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  if (C % 2 == 0) {
    // Cが偶数の場合はABの絶対値の大小関係に依存する
    if (abs(A) < abs(B)) {
      cout << "<" << endl;
      return 0;
    } else if (abs(A) > abs(B)) {
      cout << ">" << endl;
      return 0;
    } else {
      cout << "=" << endl;
      return 0;
    }
  } else {
    // Cが奇数の場合はABの正負に依存する
    if (((0 <= A) && (0 <= B))
     || ((A <  0) && (B <  0))) {
       // ABの大小関係に依存する
      if (A < B) {
        cout << "<" << endl;
        return 0;
      } else if (A > B) {
        cout << ">" << endl;
        return 0;
      } else {
        cout << "=" << endl;
        return 0;
      }
    } else if ((0 <= A) && (B <  0)) {
      cout << ">" << endl;
      return 0;
    } else if ((A <  0) && (0 <= B)) {
      cout << "<" << endl;
      return 0;
    } else {
      cout << "=" << endl;
      return 0;
    }
  }
}