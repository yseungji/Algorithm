class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = 0;
        int size = nums.size();
        sort(nums.begin(), nums.end());


        for(int i=0;i<size/2;i++){
            ans = max(ans, nums[i] + nums[(size-1)-i]); 
        }

        return ans;
    }
};
