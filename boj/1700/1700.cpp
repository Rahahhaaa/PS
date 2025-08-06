#include <bits/stdc++.h>
using namespace std;

int main(){
    int plan[105],n,k,mt[105] = {0,};
    cin >> n >> k;
    for(int i=0;i<k;i++) cin >> plan[i];
    
    int ans = 0;
    for(int i=0;i<k;i++){
        // 있으면 continue;
        bool flag = false;
        for(int j=0;j<n;j++){
            if(mt[j] == plan[i]){
                flag = true;
                break;
            }
        }
        if(flag) continue;
        // 꽂을 자리 잇으면 꽂고 continue;
        flag = false;
        for(int j=0;j<n;j++){
            if(mt[j]==0){
                mt[j] = plan[i];
                flag = true;
                break;
            }
        }
        if(flag) continue;
        // 없으면 가장 나중에 써도 되는 거랑 바꿔끼기;
        int idx=-1, dist=-1;
        for(int j=0;j<n;j++){
            int tmp=0;
            for(int t = i+1;t<k;t++){
                if(mt[j] == plan[t]) break;
                tmp++;
            }
            if(tmp > dist){
                dist = tmp;
                idx = j;
            }
        }
        mt[idx] = plan[i];
        ans++;
    }
    cout << ans << endl;
}
