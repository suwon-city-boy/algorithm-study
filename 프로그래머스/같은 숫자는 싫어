#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    answer.push_back(arr[0]);
    int current = answer.front();
    for(int i = 1; i < arr.size(); i++){
        if(current != arr[i]){
            answer.push_back(arr[i]);
            current = arr[i];
        }
    }
        
    return answer;
}