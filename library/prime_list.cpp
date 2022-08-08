#include<bits/stdc++.h>
using namespace std;

#define MAXP 1000005
vector<long long> prime_list;

void construct_plist(){
  vector<bool> fl(MAXP,false);
  for(int i=2;i<MAXP;i++){
    if(fl[i]) {
        continue;
    }
    prime_list.push_back(i);
    for(int j=i;j<MAXP;j+=i) {
        fl[j]=true;
    }
  }
}

int main(){
  construct_plist();
  int sz=prime_list.size();

  for(int p=0;p<prime_list.size();p++){
    cout << prime_list[p] << endl;
  }

  return 0;
}