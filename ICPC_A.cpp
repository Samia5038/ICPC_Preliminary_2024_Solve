#include <bits/stdc++.h>
using namespace std;

void init_code(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
  #endif
}
  

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  init_code();
  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;

    vector<int>v;
    for(auto i=0;i<n;++i){
        v.push_back(2+(i%11));
    }
    for(int i=0;i<n;++i){
        cout << v[i] << " ";
    }
    cout << endl;
  }
  
  return 0;
}