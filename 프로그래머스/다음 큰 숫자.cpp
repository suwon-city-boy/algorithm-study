#include <iostream>
using namespace std;

int getOneCount(int n) {
    int count = 0;
    while (n != 0) {
        if(n % 2 == 1)
            count++;
        n /= 2;
    }
    return count;
}

int solution(int n) {
    int answer;
    int count = getOneCount(n);
    while(1) {
        n++;
        if(count == getOneCount(n)) {
            break;
        }
    }
    return n;
}