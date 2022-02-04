#include <string>
#include <vector>
using namespace std;
int answer = 0, m, len;
vector<int> num;

void dfs(int L, int sum){
    if(L == len){
        if(sum == m) {
            answer++;
        }
    } else {
        dfs(L+1, sum+num[L]);
        dfs(L+1, sum-num[L]);
    }
}

int solution(vector<int> numbers, int target) {
    for(int i=0; i<numbers.size(); i++){
        num.push_back(numbers[i]);
    }
    m = target;
    len = num.size();
    dfs(0, 0);
    return answer;
}