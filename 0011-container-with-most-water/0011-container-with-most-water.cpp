class Solution {
public:
    int maxArea(vector<int>& height) {
        int answer;
int left = 0;
int right = height.size() - 1;
int max = min(height[left], height[right])*(right-left);

while (left < right) {
    if (height[left] < height[right]) {
        left++;
    }
    else {
        right--;
    }
    if (max < min(height[left], height[right]) * (right - left)) {
        max = min(height[left], height[right]) * (right - left);
    }
}

return max;
    }
};  