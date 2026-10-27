class Solution {
public:
    bool validPalindrome(string s) {
        bool ans1 = true;
bool ans2 = true;
for (int i = 0; i < 2; i++) {
    
    int left = 0;
    int right = s.size() - 1;
    bool possible = true;
    
    //팰린드롬 판정 알고리즘
    while (left <= right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        }
        else { //다른 경우, 하나까지는 제거가능.
            if (!possible) {
                if (i == 0) ans1 = false;
                else if(i==1)ans2 = false;
                break;
            }
            //왼쪽 제거
            if (possible && i == 0){
                left++;
                possible = false;
            }
            //오른쪽 제거
            if (possible && i == 1) {
                right--;
                possible = false;
            }
        }
    }
    
}
if (ans1 || ans2) return true;
return false;
    }
};