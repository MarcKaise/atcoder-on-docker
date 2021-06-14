#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<ll> a(N);
  vector<ll> b(N);
  vector<ll> c(N);
  for (int i=0; i<N; i++) {
    cin >> a[i];
  }
  for (int i=0; i<N; i++) {
    cin >> b[i];
  }
  for (int i=0; i<N; i++) {
    cin >> c[i];
  }

  vector<ll> ai(N+1);
  vector<ll> bcj(N+1);
  for (int i=0; i<N; i++) {
    ai.at(a.at(i)) += 1;
    bcj.at(b.at(c.at(i)-1)) += 1;
  }

  ll ans = 0;
  for (int i=1; i<N+1; i++) {
    ans += ai.at(i) * bcj.at(i);
  }

  cout << ans << endl;
}