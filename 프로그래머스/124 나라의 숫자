#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(int n) {
    string answer = "";
    string arr[] = {"4", "1", "2"};
    while(n != 0) {
        answer = arr[n % 3] + answer;
        
        if(!(n % 3))
            n = n / 3 - 1;
        else
            n /= 3;
    }
    
    return answer;
}