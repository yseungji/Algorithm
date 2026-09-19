#include <bits/stdc++.h>

using namespace std;

vector <int> v;
string s;

int N, Q;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N >> Q;
    cin >> s;
    v.resize(s.size());
    
    for (int i = 0; i < v.size(); i++) {
        v[i] = INT_MIN;
    }
    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i] == 'P') {
            v[i] = i;
        }
        else if (s[i] == 'M') {
            v[i + 1] = i;
        }
        else if (s[i] == 'T') {
            v[i - 1] = i;
        }
    }

    //구간합
    vector <int> s;
    vector <int> S;
    
    s.push_back(0);
    for (int i = 1; i < v.size(); i++) {
        s.push_back(s[i - 1] + i);
    }
    
    S.push_back(v[0]);
    for (int i = 1; i < v.size(); i++) {
        S.push_back(S[i - 1] + v[i]);
    }


    for (int i = 0; i < Q; i++) {
        int a, b;
        cin >> a >> b; //구간 입력
        int m, n;
        if (a == 1) {
            m = S[b - 1];
            n = s[b - 1];
        }
        else {
            m = S[b - 1] - S[a - 1 - 1];
            n = s[b - 1] - s[a - 1 - 1];
        }
        if (m == n) {
            //구간으로 이루어졌는지 추가 검사.
            bool flag = true;
            if (!(v[a - 1] <= b - 1 && v[a - 1] >= a - 1)) flag = false;
            if (!(v[b - 1] <= b - 1 && v[b - 1] >= a - 1)) flag = false;
     
            if(flag) cout <<"YES" <<'\n';
            else cout <<"NO" << '\n';
        
        }
        else cout << "NO" << '\n';
        
    }
 
    
    return 0;
}
