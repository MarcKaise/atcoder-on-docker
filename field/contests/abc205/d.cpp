#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N, Q;
  cin >> N >> Q;

  vector<ll> A(N);
  for (int i=0; i<N; ++i) {
    cin >> A[i];
  }

  ll K;
  for (int q=0; q<Q; ++q) {
    cin >> K;
    ans = 0;
    if ((A[N-1] - N) <= K) {
      ans = A[N-1] + (K - (A[N-1] - N));
    } else {
      ll st = 0;
      ll ed = N;
      while ()
    }



  }


}