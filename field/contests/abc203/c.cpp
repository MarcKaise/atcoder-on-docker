#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N,K;
  cin >> N >> K;

  vector<pair<ll,ll>> v;

  for (int i=0; i<N; i++) {
    ll a,b;
    cin >> a >> b;
    v.push_back({a,b});
  }
  sort(v.begin(), v.end());
  // add dummy
  v.push_back({0,0});

  ll location = 0;
  ll friend_marker = 0;
  while (0 < K) {
    // go next villege
    location++;
    K--;

    while (location == v[friend_marker].first) {
      K += v[friend_marker].second;
      friend_marker++;
    }
    if (friend_marker == N) {
      location += K;
      K = 0;
    } else {
      // 次の友達までの距離を計算
      ll d = v[friend_marker].first - location;
      // 手持ちのお金でたどり着けるか？
      if (d <= K) {
        // たどり着けるなら、その一つ前にジャンプ
        location = v[friend_marker].first - 1;
        K -= d - 1;
      } else {
        // たどり着けないなら、いけるところまで行く
        location += K;
        K = 0;
      }
    }
  }

  cout << location << endl;
}