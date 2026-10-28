class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans = 0;
        //오름차순 정렬
        sort(s.begin(), s.end());

        for (int i = 0; i < g.size(); i++) {
            int value = g[i];
            auto iter = lower_bound(s.begin(), s.end(), value);
            if (iter == s.end()) {
                //cout << "a";
            }
            else {
                //cout << "b";
                s.erase(iter);
                ans++;
            }
        }

        return ans; 
    }
};