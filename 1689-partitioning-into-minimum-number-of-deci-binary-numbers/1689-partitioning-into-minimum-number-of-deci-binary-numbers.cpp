class Solution {
public:
    int minPartitions(string n) {
        for(int i=0;i<n.length();i++){
            n[0] = max(n[0], n[i]);
        }

        return n[0]-48;
    }
};