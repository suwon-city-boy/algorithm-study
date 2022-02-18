#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const string &a, const string &b){
    if(a+b > b+a)
        return true;
    else
        return false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> number;
    
    for(int num : numbers) {
        number.push_back(to_string(num));
    }
    
    sort(number.begin(), number.end(), cmp);
    
    for(auto iter = number.begin(); iter < number.end(); ++iter){
        answer += *iter;
    }
    
    if(number[0] == "0") answer = "0";
    return answer;
}