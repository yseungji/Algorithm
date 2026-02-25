//욕심쟁이 판다
#include <bits/stdc++.h>

using namespace std;

#define INF 1234567890;

int arr[501+1][501+1];
int indegree[501+1][501+1];
int n;
int ans;
void dfs(int i, int j, int cnt){
    if(i < 1 || i > n || j < 1 || j > n) {
        return ;
    }
    ans = max(ans, cnt);
    if(arr[i][j-1] > arr[i][j]){
        dfs(i,j-1,cnt+1);
    } if(arr[i][j+1] > arr[i][j]){
        dfs(i,j+1,cnt+1);
    } if(arr[i-1][j] > arr[i][j]){
        dfs(i-1,j,cnt+1);
    } if(arr[i+1][j] > arr[i][j]){
        dfs(i+1,j,cnt+1);
    }
    return;
}

int main(void){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a;
    cin >> n;

    for(int i=0;i<=n+1;i++){
        for(int j=0;j<n+1;j++){
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
            if(indegree[i][j]==0) dfs(i,j,1);
        }
    }
    cout << ans << '\n';



    return 0;
}