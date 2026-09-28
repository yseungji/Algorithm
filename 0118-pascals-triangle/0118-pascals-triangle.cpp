class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> dp(numRows);

for (int i = 0; i < numRows; i++) {
    dp[i].assign(i+1, 0);
}

for (int i = 0; i < numRows; i++) {
    for (int j = 0; j <= i; j++) {
        if (j == 0 || j == i) dp[i][j] = 1;
        else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
}


return dp; 
    }
};