#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<ll> T(N);
  for (int i=0; i<N; i++) {
    cin >> T[i];
  }

  sort(T.begin(), T.end(), greater<ll>());

  ll oven1 = T[0];
  ll oven2 = 0;

  for (int i=1; i<N; i++) {
    if (oven1 <= oven2) {
      oven1 += T[i];
    } else {
      oven2 += T[i];
    }
  }
  cout << max(oven1, oven2) << endl;
}