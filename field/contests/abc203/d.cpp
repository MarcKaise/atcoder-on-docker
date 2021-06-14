#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N,K;
  cin >> N >> K;

  vector<vector<ll>> A(N, vector<ll>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A.at(i).at(j);
    }
  }

  // 中央値を計算して、最小を保持。
  ll min_hight = 1000000000;
  for (int i = 0; i < N-K+1; i++) {
    for (int j = 0; j < N-K+1; j++) {

      // この座標を左上とするK*Kの中央値を算出する
      vector<ll> p(K*K);
      ll idx = 0;
      for (int m = 0; m < K; m++) {
        for (int n = 0; n < K; n++) {
          p[idx] = A[i+m][j+n];
          idx++;
        }
      }
      sort(p.begin(), p.end(), greater<int>());
      ll center = (int)(K * K / 2) + 1;
      min_hight = min(min_hight, p[center-1]);
      
      // test
      // cout << "center = " << center << " p[center] = " << p[center] << endl;
    }
  }



  cout << min_hight << endl;
}