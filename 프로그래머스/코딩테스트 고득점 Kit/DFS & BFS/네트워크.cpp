#include <string>
#include <vector>
using namespace std;

bool dfs(int x, vector<vector<int>> &computers){
    if(!computers[x][x]) return false;
    else{
        computers[x][x] = 0;
        for(int i=0; i<computers.size(); i++){
            if(computers[x][i]){
                dfs(i, computers);
            }
        }   
    }
    return true;
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i=0; i<n; i++){
        if(computers[i][i] && dfs(i, computers)){
            answer++;
        }
    }
    return answer;
}