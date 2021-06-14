#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<ll> A(N);
  for (int i=0; i<N; i++) {
    cin >> A[i];
  }

  ll nut = 0;
  for (int i=0; i<N; i++) {
    if (A[i] <= 10) {
      // skip
    } else {
      nut += A[i] - 10;
    }
  }
  cout << nut << endl;
}