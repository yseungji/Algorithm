#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int T;

    cin >> T;

    char a[4];
    for (int i = 0; i < 4; i++) {
        a[i] = -1;
    }

    for (int i = 0; i < T; i++) {
        cin >> a[i];
    }

    int count = 0;
    int zero = 0;
    for (int i = 0; i < T; i++) {
        if (a[i] == 'A' || a[i] == 'C' || a[i] == 'E' || a[i] == 'I') {
            count++;
        }
        else if (a[i] == '0') {
            zero++;
        }
    }

    if (count == 1 || count == 2 || count == 3) cout << "bye";
    else { cout << "hi"; }


    return 0;
}
