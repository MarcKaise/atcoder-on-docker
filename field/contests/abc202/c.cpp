#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s_in, s_out;
  cin >> s_in;

  for (int i = 0; i < s_in.size(); i++) {
    char c = s_in[i];
    if (c == '6') {
      s_out.insert(0,"9");
    } else if (c == '9') {
      s_out.insert(0,"6");
    } else if (c == '0') {
      s_out.insert(0,"0");
    } else if (c == '1') {
      s_out.insert(0,"1");
    } else if (c == '8') {
      s_out.insert(0,"8");
    }
  }

  cout << s_out << endl;
}ab