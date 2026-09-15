#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer;
    long long times_max=times[0];
    for(int i=1;i<times.size();i++){
        if(times_max < times[i]) {
            times_max = times[i];
        }
    }
    long long left = 1;
    long long right = n * times_max;
    cout << right << '\n';
    long long mid;
    //n명 이상 처리할 수 있는 최초의 시간을 찾는 알고리즘.
    while(left < right) {
        answer = 0;
        mid = (left + right) / 2;
        for(int i=0;i<times.size();i++){
            answer += mid / times[i];
            //cout << "left:" << left << ' ';
            //cout << "right:" << right << ' ';
            //cout << "mid:" << mid << ' ';
            //cout << "answer:" << answer << '\n';
        }
        if(answer >= n) {
            right = mid;
        }
        else if(answer < n) {
            left = mid+1;
        }
    }
    //left == right 상태.
    return left;
}

