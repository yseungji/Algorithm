class Solution {
public:
    int minPartitions(string n) {
        for(int i=0;i<n.length();i++){
            if(n[i] > n[0]) n[0] = n[i];
        }

        return n[0]-48;
    }
};