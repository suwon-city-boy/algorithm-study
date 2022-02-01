#include <string>
#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int w, h;
    int total = brown + yellow;
    for(int i=2; i*i <= total; i++){
        if(total % i == 0){
            w = (total / i);
            h = i;
            if(w >= h){
                if((w-1)*2 + (h-1)*2 == brown){
                    answer.push_back(w);
                    answer.push_back(h);
                    break;
                }
            }
        }
    }
    return answer;
}