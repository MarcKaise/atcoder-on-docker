#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  // 頂点数と辺陬
  int N, M;
  cin >> N >> M;

  // グラフ入力受取（ここでは無向グラフを想定）
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a,b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
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
