#include <string>
#include <vector>
using namespace std;
int answer = 50, chk[51];

void dfs(string s, string target,  vector<string> words, int L){
    if(L > answer) return;
    if(s == target){
        answer = min(answer, L);
        return;
    }
    else {
        for(int i=0; i<words.size(); i++){
            int cnt = 0;
            for(int j=0; j<words[i].length(); j++){
                if(s[j] != words[i][j]) cnt++;
            }
            if(cnt == 1 && chk[i] == 0){
                chk[i] = 1;
                dfs(words[i], target, words, L+1);
                chk[i] = 0;
            }
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    dfs(begin, target, words, 0);
    return (answer == 50? 0 : answer);
}