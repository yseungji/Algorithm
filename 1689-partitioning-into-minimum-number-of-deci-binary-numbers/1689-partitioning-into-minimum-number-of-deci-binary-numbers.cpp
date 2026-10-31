class Solution {
public:
    int minPartitions(string n) {
        int big=0;
        for(int i=0;i<n.size();i++){
            big = max(big, n[i]-48);
        }

        return big;
    }
};