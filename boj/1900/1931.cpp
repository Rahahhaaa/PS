#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    pair<int, int> times[100000];
    for(int i=0;i<n;i++){
        int s, e;
        cin >> s >> e;
        times[i] = {e,s};
    }
    
    sort(times, times+n);
    
    int result = 0, limit = 0;
    for(int i=0;i<n;i++){
        if(times[i].second >= limit){
            limit = times[i].first;
            result++;
        }
    }
    cout << result << endl;
}
