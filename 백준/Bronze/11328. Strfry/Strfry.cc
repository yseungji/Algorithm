#include <iostream>
using namespace std;

int main() {
	int N;
	string s1,s2;
	cin >> N;
	while(N--) {
		cin >> s1 >> s2;
		int alphabet[26] = {0,};
		for(int i=0;i<s1.size();i++){
			alphabet[s1[i]-'a']++; //갯수를 센다.
		}

		for(int i=0;i<s2.size();i++){
			alphabet[s2[i]-'a']--;
		}

		for(int i=0;i<26;i++){
			if(alphabet[i] != 0) {
				cout << "Impossible\n";
				goto next;
			}
		}
		cout << "Possible\n";
		next:
;
	}
	return 0;
}