#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> map;
    for(string name : participant){
        map[name]++;
    }
    for(string name : completion){
        map[name]--;
    }
    for(auto pair : map){
        if(pair.second > 0){
            answer += pair.first;
            break;
        }
    }
    return answer;
}