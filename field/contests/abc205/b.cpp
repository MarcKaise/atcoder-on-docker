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

  sort(A.begin(), A.end());
  for (int i=1; i<N; i++) {
    if ((A[0] == 1) && (A[i-1] + 1 == A[i])) {
      // Do nothing
    } else {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}