//욕심쟁이 판다
#include <bits/stdc++.h>

using namespace std;

#define INF 1234567890;
int arr[501][501];
int indegree[501][501];
int dp[501][501];
int n;
int ans;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int nx, ny;
bool OOB(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= n) return true;
    return false;
}

int go(int x, int y){
    //범위 내에서만 dfs
    if(dp[x][y] != 0) return dp[x][y]; //메모이제이션 ***
    dp[x][y] = 1;

    for(int i=0;i<4;i++){
        nx = x + dx[i];
        ny = y + dy[i];
        if(OOB(nx,ny) || arr[x][y] >= arr[nx][ny]) continue;
        dp[x][y] = max(dp[x][y],go(nx,ny)+1);
    }
    return dp[x][y];

}

int main(void){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    
    //차수
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            for(int k=0;k<4;k++){
                nx = x + dx[k];
                ny = y + dy[k];
                if(OOB(nx,ny)) continue;
                if(arr[nx][ny] < arr[x][y]){
                    indegree[x][y]++;
                } 
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(indegree[i][j]==0) go(i,j);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans = max(ans,dp[i][j]);
        }
    }

    cout << ans;


    return 0;
}

