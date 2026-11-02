class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int i = 0;
        int j = piles.size() - 1;
        //투포인터
        piles[0] = 0;
        while (i < j) {
            piles[0] += piles[j - 1];
            j -= 2;
            i += 1;
        }

        return piles[0];
    }
};