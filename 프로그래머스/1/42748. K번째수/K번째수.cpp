#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    vector<int> temparr(101);
    
    for(int i=0;i<commands.size();i++){
        temparr.clear();
        for(int j=commands[i][0]-1;j<=commands[i][1]-1;j++){
            temparr.push_back(array[j]);
            cout << array[j] << ' ';
        }
        sort(temparr.begin(), temparr.end());
        answer.push_back(temparr[commands[i][2]-1]);
    }
    
    return answer;
}