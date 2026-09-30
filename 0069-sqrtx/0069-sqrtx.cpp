class Solution {
public:
    int mySqrt(int x) {
     int s = 1;
int e = 65536;//제곱근으로 나올 수 있는 최대값.
long long target;
while (s <= e) {
    target = (s + e) / 2;
    if (target*target < x) {
        s = target + 1;
    }
    else if (target * target > x) {
        e = target - 1;
    }
    else { //target * target == x 이면 제곱수인 정수가 존재한다는 거니까 true 리턴.
        return target;
    }
}

//만약에 while문을 빠져나왔다면, 만족하는 정수가 없다는 뜻.
//이때 target*target과 num의 대소비교를 못하니까 대소비교를 통해 lowerbound인지 upperbound인지 판단후 return
if (target * target < x) {
    return target;
}
else { // target * target > x 이런 경우도 있을 수 있음.
    return target - 1;
}
return 0;   
    }
};