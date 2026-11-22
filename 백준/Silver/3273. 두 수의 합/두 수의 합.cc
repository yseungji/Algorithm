#include <bits/stdc++.h>
using namespace std;

int main() {
	//정렬해서, 투포인터로 하는게 시간초과가 안날것같다.
	//투포인터 로직 : 값이 작으면 왼쪽 포인터 이동, 값이 크면 오른쪽 포인터 이동
	//값이 같으면 서로 다른 양의 정수이므로, 좌우를 모두 이동

	int N,a;
	cin >> N;
	int arr[100000] = {0,};
	for(int i=0;i<N;i++){
		cin >> a;
		arr[i] = a;
	}
	sort(arr, arr+N);
	int l=0, r=N-1;
	int X;
	cin >> X;
	int count = 0;
	while(l < r){
		if(arr[l] + arr[r] < X){
			l++;
		}else if(arr[l] + arr[r] > X){
			r--;
		}else{
			count++;
			l++;
			r--;
		}
	}

	cout << count << "\n";

	return 0;
}