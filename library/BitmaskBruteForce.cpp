#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 入力
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // bit 全探索
    bool exist = false;
    for (int bit = 0; bit < (1 << N); ++bit) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) sum += a[i];
        }

        // 判定
        if (sum == W) exist = true;
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}
