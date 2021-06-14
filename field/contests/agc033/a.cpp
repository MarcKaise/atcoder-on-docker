#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;

int main() {
  ll H, W;
  cin >> H >> W;

  // 頂点数
  ll N = H * W;
  ll is_black = 0;

  // グラフ入力受取（ここでは無向グラフを想定）
  Graph G(H);
  for (int i = 0; i < H; ++i) {
    string s;
    cin >> s;

    for (auto c : s) {
      if (c == )
      G[i].push_back(c);
    }
  }

  // BFSの為のデータ構造
  vector<int> dist(N, -1);  // -1:未訪問状態に初期化
  queue<int> que;

  // 初期状態
  dist[0] = 0;
  que.push(0);

  // BFS開始
  while (!que.empty()) {
    int v = que.front();
    que.pop();

    // vから辿れる頂点を全て調べる
    for (int nv : G[v]) {
      if (dist[nv] != -1) continue; // 既に発見済みの頂点はスキップ

      // 新たな頂点nvについて距離情報を更新してキューに追加
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  // 結果出力
  for (int v = 0; v < N; ++v) {
    cout << v << ": " << dist[v] << endl;
  }
}
