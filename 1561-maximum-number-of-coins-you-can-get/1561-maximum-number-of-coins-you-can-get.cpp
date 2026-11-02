class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int i = 0;
        int j = piles.size() - 1;
        int sum = 0;
        //투포인터
        while (i < j) {
            sum += piles[j-1];
            j -= 2;
            i += 1;
        }

        return sum;
    }
};