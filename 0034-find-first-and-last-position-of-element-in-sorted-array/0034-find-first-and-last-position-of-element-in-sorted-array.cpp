class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int s = 0;
int e = nums.size()-1; // nums의 최대 배열길이이므로, s와 e사이의 인덱스에서 target이 발견될 것이다. 
int mid;
if (nums.size() == 0) return { -1,-1 };
while (s <= e) {
    //lower bound를 찾아보자.
    mid = (s + e) / 2;
    if (nums[mid] < target) { //mid는 배열 인덱스이므로 nums[mid]를 통해 값을 비교한다.
        s = mid + 1;
    }
    else if (nums[mid] >= target) {
        e = mid - 1;
    }
    //이러면 하한이 나올 듯 하다.
}
int lower=s;
s = 0;
e = nums.size() - 1;
//target이 배열에 존재하는 지 확인.
if ( lower >= nums.size()||nums[lower] != target ) return { -1, -1 };
while (s <= e) {
    //upper bound를 따로 찾는다.
    mid = (s + e) / 2;
    if (nums[mid] <= target) { //mid는 배열 인덱스이므로 nums[mid]를 통해 값을 비교한다.
        s = mid + 1;
    }
    else if (nums[mid] > target) {
        e = mid - 1;
    }
    //이러면 상한이 나올 듯 하다.
}
int upper= e;
//target이 배열에 존재하는 지 확인.
if (nums[upper] != target) return { -1, -1 };

return { lower, upper };
    }
};