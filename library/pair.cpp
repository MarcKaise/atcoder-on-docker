using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    vector<pair<string,int>> v;
    v.push_back({ "apple",4 });
    v.push_back({ "banana",3 });
    v.push_back({ "melon",1 });
    v.push_back({ "apple",2 });
    v.push_back({ "orange",6 });

    //sort
    sort(v.begin(), v.end());

    for (auto V : v) {
        cout << V.first << " " << V.second << endl;

    }
    //apple 2
    //apple 4
    //banana 3
    //melon 1
    //orange 6

    return 0;
}