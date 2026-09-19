#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, Q;
    cin >> N >> Q;

    vector <int> v;

    for (int i = 1; i <= N; i++) {
        v.push_back(i);
    }

    int cur = 0;
    for (int i = 0; i < Q; i++) {
        
        int a, b;
        cin >> a >> b;
        if (a == 1) {

            cur = (cur + v.size() - b) % v.size();
        }
        else if (a == 2) {
            cur = (cur + b) % v.size();
        }
        else if (a == 3) {
            cout << (cur + b-1) % v.size() +1 << '\n';
            
        }
    }

    return 0;
}
