#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  // 頂点数と辺陬
  int N, M;
  cin >> N >> M;

  // グラフ入力受取
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
  }

  ll ans = 0;

  for (int i = 0; i < N; i++) {
    // BFSの為のデータ構造
    vector<int> dist(N, -1);  // -1:未訪問状態に初期化
    queue<int> que;

    // 初期状態
    dist[i] = 0;
    que.push(i);
    ans++;

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
        ans++;
      }
    }
  }

  cout << ans << endl;
}
