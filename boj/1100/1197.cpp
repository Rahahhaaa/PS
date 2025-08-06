#include <bits/stdc++.h>
using namespace std;

constexpr int MAXN = 10005;
int uf[MAXN];
int find(int x){
    if(uf[x] < 0) return x;
    return uf[x] = find(uf[x]);
}

bool merge(int a, int b){
    a = find(a);
    b = find(b);
    if(a==b) return false;
    uf[b] = a;
    return true;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for(int i=0;i<MAXN;i++) uf[i] = -1;
    vector<tuple<int, int, int>> w;
    int N, M ; cin >> N >> M;
  
    
    for(int i=0;i<M;i++){
        int a,b,cost;
        cin >> a >> b >> cost;
        w.emplace_back(cost,a,b);
    }
    sort(w.begin(), w.end());
    int ans = 0;
    for(auto &[c,a,b]: w){
        if(merge(a,b)) ans += c;
    }
    cout << ans << endl;
    return 0;
}
