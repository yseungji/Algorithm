class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change[3] = { 0, };
for (int i = 0; i < bills.size(); i++) {
    if (bills[i] == 5) change[0]++;
    else if (bills[i] == 10) {
        change[0]--;
        change[1]++;
    }
    else if (bills[i] == 20) {
        if (change[1] == 0) {
    change[0] -= 3;
}
else {
    change[0]--;
    change[1]--;
}
change[2]++;
    }

    for(int j=0;j<3;j++)
    if (change[j] < 0) {
        return false;
    }
}

return true;
    }
};