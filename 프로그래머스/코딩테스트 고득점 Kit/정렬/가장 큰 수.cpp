#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const string a, const string b){
    if(a + b > b + a)
        return true;
    else
        return false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
    
    for(int i=0; i<numbers.size(); i++){
        temp.push_back(to_string(numbers[i]));
    }
    sort(temp.begin(), temp.end(), cmp);
    for(auto str : temp){
        answer += str;
    }
    if(answer[0] == '0'){
        answer = "0";   
    }
        
    return answer;
}