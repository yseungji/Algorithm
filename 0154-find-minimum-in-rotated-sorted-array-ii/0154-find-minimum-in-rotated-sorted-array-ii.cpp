class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1; //배열 개수만큼
        int mid;
        while(left<right) {
            mid = (left + right)/2;
     
            if(nums[mid] > nums[right]){
                left = mid + 1;
                cout << left << ' ';
            }
            else if(nums[mid] < nums[right]){
                right = mid;
            }
            else {
                right--;
            }
        }
        return nums[left];
    }
};