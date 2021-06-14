#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_prime(ll N) {
    if (N == 1) return false;
    for (ll i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {

  // 素数リスト
  vector<bool> prime_list(100004);
  prime_list[0] = false;
  for (ll i = 1; i < 100001; i++) {
    prime_list[i] = is_prime(i);
  }

  // 累積和リスト
  vector<ll> ruisekiwa(100004);
  ruisekiwa[0] = 0;
  for (ll i = 1; i < 100001; i++) {
    // iが2017に似た奇数か?
    ll k = (i+1)/2;
    if ((i % 2 != 0) &&
        (prime_list[i] == true) &&
        (prime_list[k] == true)) {
          ruisekiwa[i] = ruisekiwa[i-1] + 1;
    } else {
          ruisekiwa[i] = ruisekiwa[i-1];
    }       
  }

  ll Q;
  cin >> Q;

  ll l, r;
  for (ll i = 0; i < Q; i++) {
    cin >> l >> r;
    cout << ruisekiwa[r] - ruisekiwa[l-1] << endl;
  }
}