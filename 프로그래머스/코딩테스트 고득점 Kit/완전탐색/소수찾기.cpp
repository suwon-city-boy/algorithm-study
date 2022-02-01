#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool isPrime(int x){
    if(x == 0 || x == 1) return false;
    for(int i = 2; i*i <= x; i++){
        if(x%i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    vector<char> ch;
    vector<int> num;
    int answer = 0;
    for(int i=0; numbers[i] != '\0'; i++){
        ch.push_back(numbers[i]);
    }
    sort(ch.begin(), ch.end());
    //모든 경우의 수 구하기
    do {
        string tmp = "";
        for(int i=0; i<ch.size(); i++){
            tmp += ch[i];
            num.push_back(stoi(tmp));
        }
    } while (next_permutation(ch.begin(), ch.end()));
    //중복 제거
    sort(num.begin(), num.end());
    num.erase(unique(num.begin(), num.end()), num.end());
    //소수 판별
    for(int i=0; i<num.size(); i++){
        if(isPrime(num[i])) answer++;
    }
    return answer;
}