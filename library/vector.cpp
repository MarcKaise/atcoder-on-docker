  int n = 4;

  //変数宣言（要素数0）
  vector<int> v1;
  cout << v1.empty() << endl;//1(TRUE)

  //変数宣言&初期化（要素数n, 0で初期化）
  vector<int> v2(n,0);

  //値の代入
  v2[0] = 1;v2[1] = 3;v2[2] = 2;v2[3] = 4;
  cout << v2.size() << endl;//4

  //末尾に要素を追加
  v2.push_back(-1);
  cout << v2.size() << endl;//5

  //2次元配列の場合
  vector<vector<int>> vv;
  vv.push_back({1,2,3,4});
  cout << vv[0][0] << " " << vv[0][1] << " " << vv[0][2] << endl;//1 2 3

  //v1に含まれるすべての要素を走査
  //mapやsetでも同じことができるので便利
  for(auto v : v2)cout << v << " ";cout << endl;//1 3 2 4 -1

  //末尾の要素を確認
  cout << v2.back() << endl;  //-1

  //末尾の要素に代入
  v2.back() = 0;
  cout << v2.back() << endl;  //0

  //末尾の要素を削除
  v2.pop_back();
  cout << v2.size() << endl;//4

  //昇順でソート
  sort(v2.begin(),v2.end());
  for(auto v : v2)cout << v << " ";cout << endl;//1 2 3 4

  //要素の順番を逆にする
  reverse(v2.begin(),v2.end());
  for(auto v : v2)cout << v << " ";cout << endl;//4 3 2 1

  reverse(v2.begin(),v2.end());

  //b → 1, 2, 3, 4
  //指定された要素以上が現れる最初の位置のイテレータを取得
  //事前にソートしておく必要あり
  //見つからない場合、itr == v2.end()がTRUE
  auto itr = lower_bound(v2.begin(),v2.end(),3);
  int index = itr - v2.begin();
  cout << index << endl;//2

  //指定された要素より大きい値が現れる最初の位置のイテレータを取得
  itr = upper_bound(v2.begin(),v2.end(),3);
  index = itr - v2.begin();
  cout << index << endl;//3

  //降順にソートされている場合のlower_bound, upper_bound
  //降順にソート
  sort(v2.begin(),v2.end(),greater<int>());
  for(auto v : v2)cout << v << " ";cout << endl; //4 3 2 1

  //指定された要素以下が現れる最初の位置のイテレータを取得
  itr = lower_bound(v2.begin(),v2.end(),3,greater<int>());
  index = itr - v2.begin();
  cout << index << endl;//1

  //指定された要素より小さい値が現れる最初の位置のイテレータを取得
  itr = upper_bound(v2.begin(),v2.end(),3,greater<int>());
  index = itr - v2.begin();
  cout << index << endl;//2

  v1.push_back(11);v1.push_back(12);v1.push_back(13);
  //v1とv2を入れ替える
  swap(v1,v2);

  //vector同士の結合
  v1.insert(v1.end(),v2.begin(),v2.end());

  //以下は低速のためあまり使わないほうが良い
  v2.insert(v2.begin()+2,99);//v[2]の位置に99を挿入（代入ではない）
  v2.erase(v2.begin()+2);//v[2]の位置の要素を削除