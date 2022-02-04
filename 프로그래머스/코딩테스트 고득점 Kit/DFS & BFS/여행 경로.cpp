#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> answer;
vector<int> chk(10001, 0);

bool dfs(string now, vector<vector<string>> tickets, int L){
    if(L == tickets.size()){
        return true;
    }
    else{
        for(int i = 0; i<tickets.size(); i++){
            if(chk[i]==0 && now == tickets[i][0]){
                answer.push_back(tickets[i][1]);
                chk[i] = 1;
                bool flag = dfs(tickets[i][1], tickets, L+1);
                if(flag) return true;
                chk[i] = 0;
            }
        }
        answer.pop_back();
        return false;
    }
}

vector<string> solution(vector<vector<string>> tickets) {
    vector<int> chk(tickets.size(), 0);
    sort(tickets.begin(), tickets.end());
    answer.push_back("ICN");
    dfs("ICN", tickets, 0);
    return answer;
}