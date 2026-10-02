#define MAX 100001
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        //배열에 가중치 저장.
vector<vector<int>> D(n);
for (int i = 0; i < n; i++) {
    D[i].resize(n); //최단거리 2차원 배열
    for (int j = 0; j < n; j++) {
        D[i][j] = MAX;
    }
}
for (int i = 0; i < edges.size(); i++) {
    int s, d, w;
    s = edges[i][0]; d = edges[i][1]; w = edges[i][2];
    D[s][d] = w; D[d][s] = w;
}

// 크루스칼 알고리즘
for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
        }
    }
}

int val = MAX;
int ans;

for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
        if (D[i][j] <= distanceThreshold) {
            if (i == j) continue;
            cnt++;
        }
    }
    if (val >= cnt) {
        val = cnt;
        ans = i;
    }
}
return ans;
    }
};