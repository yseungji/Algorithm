//욕심쟁이 판다
#include <bits/stdc++.h>

using namespace std;

#define MINF -1234567890;
#define INF 1234567890;
int arr[501+1][501+1];
int indegree[501+1][501+1];
int dp[502][502];
int n;
int ans;
int dfs(int i, int j){
    //범위 내에서만 dfs
    if(dp[i][j] != 0) return dp[i][j]; //메모이제이션 ***
    dp[i][j] = 1;
    if(i-1>=1&&arr[i-1][j]>arr[i][j]){//위
        dp[i][j] = max(dp[i][j], dfs(i-1,j)+1);
    }
    if(i+1<=n&&arr[i+1][j]>arr[i][j]){//아래
        dp[i][j] = max(dp[i][j], dfs(i+1,j)+1);
    }
    if(j-1>=1&&arr[i][j-1]>arr[i][j]){//왼
        dp[i][j] = max(dp[i][j], dfs(i,j-1)+1);
    }
    if(j+1<=n&&arr[i][j+1]>arr[i][j]){//오
        dp[i][j] = max(dp[i][j], dfs(i,j+1)+1);
    }
    return dp[i][j];

}

int main(void){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a;
    cin >> n;

    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=n+1;j++){
            arr[i][j] = INF;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a;
            arr[i][j] = a;
        }
    }
    
    //차수
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j-1] < arr[i][j]) {
                indegree[i][j]++;
            } if(arr[i][j+1] < arr[i][j]) {
                indegree[i][j]++;
            } if(arr[i-1][j] < arr[i][j]) {
                indegree[i][j]++;
            } if(arr[i+1][j] < arr[i][j]) {
                indegree[i][j]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(indegree[i][j]==0) dfs(i,j);
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ans = max(ans,dp[i][j]);
        }
    }

    cout << ans;


    return 0;
}