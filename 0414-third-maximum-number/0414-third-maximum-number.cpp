class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max = INT_MIN;
        int max2 = INT_MIN;
        long long max3 = LONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > max) max = nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] > max2 && nums[i] < max) max2 = nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] > max3 && nums[i] < max2) max3 = nums[i];
        }
        cout << max << ' ' << max2 << ' ' << max3  << ' ';
        if(max3==LONG_MIN) return max;
        return max3;
    }
};