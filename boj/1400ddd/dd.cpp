#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,l; cin >> n >> l;
    int a[1005];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a, a+n);
    int tmp = a[0] + l - 1;
    int ans = 1;
    for(int i=0;i<n;i++){
        if(tmp >= a[i]) continue;
        else{
            tmp = a[i] + l - 1;
            ans++;
        }
    }
    cout << ans << endl;
}
