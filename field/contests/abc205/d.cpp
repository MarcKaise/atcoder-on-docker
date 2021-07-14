#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll K_MAX = 10e5;

int main() {
  ll N, Q;
  cin >> N >> Q;

  vector<ll> A(N+1);
  vector<ll> DiffList(N+1);
  A[0] = 0;
  DiffList[0] = 0;
  for (int i = 1; i < N+1; ++i) {
    cin >> A[i];
    DiffList[i] = A[i] - i;
  }
  
  ll K;
  while (Q--) {
    cin >> K;
    if (DiffList[N] < K) {
      // KがAの範囲外の場合
      cout << K + N << endl;
    } else {
      // KがAの範囲内の場合
      auto skipped = lower_bound(DiffList.begin(), DiffList.end(), K) - DiffList.begin();
      cout << A[skipped - 1] + (K - DiffList[skipped - 1]) << endl;
    }
  }
  return 0;
}