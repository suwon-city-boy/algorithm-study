#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int score[] = {0, 0, 0};
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {2, 1, 2, 3, 2, 4, 2, 5};
    int a3[] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for(int i=0; i<answers.size(); i++) {
        if(answers[i] == a1[i%5]) score[0]++;    
        if(answers[i] == a2[i%8]) score[1]++;
        if(answers[i] == a3[i%10]) score[2]++;
    }
    int res = max(max(score[0], score[1]), score[2]);
    for(int i=0; i<3; i++) {
        if(score[i] == res){
            answer.push_back(i+1);
        }
    }
    return answer;
}