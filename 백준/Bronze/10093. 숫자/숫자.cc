#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   
    long long int A, B;
    
    cin >> A >> B;
    if(A>B) swap(A,B);
    if(A==B || A+1 == B){
        cout << 0;
        return 0;
    }
    cout <<B-A-1;
    cout << '\n';

    for(long long int i=A+1;i<B;i++){
        cout << i << ' ';
    }
    return 0;
}