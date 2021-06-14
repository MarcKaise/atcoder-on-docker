#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N,K;
  cin >> N >> K;

  // 1の位の合計を計算
  ll ans = 0;
  for (int i = 1; i < K+1; i++) {
    ans += N * i;
  }

  // 100の位の合計を計算
  for (int i = 1; i < N+1; i++) {
    ans += i * 100 * K;
  }

  cout << ans << endl;
}