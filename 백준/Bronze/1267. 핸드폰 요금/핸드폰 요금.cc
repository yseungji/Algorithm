#include <iostream>
using namespace std;

int main() {
	int N;
	int a;
	int Y = 0;
	int M = 0;
	cin >> N;

	for(int i=0;i<N;i++){ //N번 계산
		cin >> a;
		Y += a/30*10 + 10;
		M += a/60*15 + 15;
	}

	if(Y==M) cout << "Y M " << Y;
	else if(Y<M) cout << "Y " << Y;
	else cout << "M " << M; //Y>M

	return 0;
}