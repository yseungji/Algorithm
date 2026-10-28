class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
int ans = 0;
int i = 0;
int j = 0;

sort(g.begin(), g.end());
sort(s.begin(), s.end());
while (1) {
    if (i == g.size()) break;
    if (j == s.size()) break;
    if (g[i] <= s[j]) {
        ans++;
        i++;
        j++;
    }
    else {
        j++;
    }
}

return ans;    }
};