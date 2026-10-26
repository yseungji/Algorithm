class Solution {
public:
    int longestPalindrome(string s) {
        int count[26][2] = {0,};
int ans = 0;
for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 65 && s[i] <= 90) {
        count[s[i] - 65][0]++; //대문자 고려
    }
    else {
        count[s[i] - 97][1]++; //소문자 고려
    }
}
int odd = false;
for (int i = 0; i < 26; i++) {
    for (int j = 0; j < 2; j++) {
        if (count[i][j] % 2 == 0) ans += count[i][j];
        else {
            if (!odd) {
                odd = true;
                ans++;
            }
            ans += count[i][j] - 1;
        }
    }
}
return ans;
    }
};