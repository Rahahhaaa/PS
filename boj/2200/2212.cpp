#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k; cin >> n >> k;
    set<int> s;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        s.insert(a);
    }
    
    vector<int> v;
    int prev;
    for(auto it = s.begin();it!=s.end();it++){
        if(it==s.begin()){
            prev = *it;
            continue;
        }
        v.push_back(*it-prev);
        prev=*it;
    }
    sort(v.rbegin(), v.rend());
    
    int ans = 0;
    for(int i=0;i<v.size();i++){
        if(i<k-1) continue;
        ans += v[i];
    }
    cout << ans << endl;
}
