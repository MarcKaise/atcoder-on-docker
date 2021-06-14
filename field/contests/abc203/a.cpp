#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a,b,c;
  cin >> a >> b >> c;

  if (a == b) {
    cout << c;
  } else if (a == c) {
    cout << b;
  } else if (b == c) {
    cout << a;
  } else {
    cout << 0;
  }

  cout << endl;
}