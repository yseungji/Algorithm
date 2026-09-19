#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int T;

    cin >> T;

    
    while (T--) {
        string f;
        vector <int> one;
        long long ans=0;
        cin >> f;

        for (int i = f.size()-1; i >=0 ; i--) {
            if (f[i] == 'O') {
                one.push_back(0);
            }
            else if (f[i] == 'I') {
                one.push_back(1);
            }
        }
        one.push_back(1);

        for (int i = 0; i < one.size(); i++) {
            if(one[i] == 1)
            ans += pow(2, i);
        }
        cout << ans << '\n';

    }

    return 0;
}
