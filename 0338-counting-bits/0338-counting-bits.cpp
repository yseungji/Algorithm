class Solution {
public:
    vector<int> countBits(int n) {
        int binary_array[20] = {0,};
        vector <int> dp(n+1, 0);
        for(int i=0;i<=n;i++){ //십만번
            for(int index=0;index<20;index++){
                if(binary_array[index]==1) dp[i]++;
            }
        
            //로직
            for(int index=19;index>=0;index--){
                if(binary_array[index]==0) {
                    binary_array[index]=1;
                    break;
                }
                else{
                    binary_array[index]=0;
                }
            }
        }
        return dp;
    }
};