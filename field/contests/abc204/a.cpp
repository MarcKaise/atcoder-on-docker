#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int x,y;
  cin >> x >> y;

  if (x == y) {
    cout << x << endl;
    return 0;
  } else {
    int sum = x + y;
    if (sum == 1) {
      cout << 2 << endl;
      return 0;
    } else if (sum == 2) {
      cout << 1 << endl;
      return 0;
    } else if (sum == 3) {
      cout << 0 << endl;
      return 0;
    }
  }

}