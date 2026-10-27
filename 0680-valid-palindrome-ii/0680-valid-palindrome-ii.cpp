class Solution {
public:
    bool isPalindrome(int left, int right, string &s) {
        while (left <= right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            }
            else return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left <= right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            }
            else { //다른 경우, 왼쪽 제거 or 오른쪽 제거
                if (isPalindrome(left, right - 1,s) 
                || isPalindrome(left + 1, right,s)) {
                    return true;
                }
                else return false;
            }
        } 
        return true;
    }
};