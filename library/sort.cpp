#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> v = {3, 1, 4, 2, 5};

  // 昇順に並べ替える
  std::sort(v.begin(), v.end());

  std::for_each(v.begin(), v.end(), [](int x) {
    std::cout << x << std::endl;
  });
  std::cout << std::endl;

  // 降順に並べ替える
  std::sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;
  });
  // こちらでもよい
  // std::sort(v.begin(), v.end(), std::greater<int>{});

  std::for_each(v.begin(), v.end(), [](int x) {
    std::cout << x << std::endl;
  });
}