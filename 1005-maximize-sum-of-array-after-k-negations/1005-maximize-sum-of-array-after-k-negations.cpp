class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        while (k > 0) {
            if (i >= nums.size() - 1) break;
            if (nums[i] < 0) {
                nums[i++] *= -1;
            }
            else {
                break;
            }
            k--;
        }

        sort(nums.begin(), nums.end());

        while (k > 0) {
            nums[0] *= -1;
            k--;
        }

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        return sum;
    }
};