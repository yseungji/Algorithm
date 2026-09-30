class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 1;
        int e = 65536;//제곱근으로 나올 수 있는 최대값.

while (s <= e) {
    long long target = (s + e) / 2;
    if (target*target < num) {
        s = target + 1;
    }
    else if (target * target > num) {
        e = target - 1;
    }
    else { //target * target == num 이면 제곱수인 정수가 존재한다는 거니까 true 리턴.
        return true;
    }
}
//만약에 while문을 빠져나왔다면, 만족하는 정수가 없다는 뜻이니 false 리턴.
return false;
    }
};