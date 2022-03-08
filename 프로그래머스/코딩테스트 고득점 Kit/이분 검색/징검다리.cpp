#include string
#include vector
#include algorithm
using namespace std;

int solution(int distance, vectorint rocks, int n) {
    int answer = 0;
    int lt, rt, mid, prev, cnt;

    sort(rocks.begin(), rocks.end());
    lt = 0;
    rt = distance;
    while (lt = rt) {
        prev = cnt = 0;
        mid = (lt + rt)  2;

        for (int i = 0; irocks.size(); i++) {
            if (rocks[i] - prev = mid) prev = rocks[i];
            else cnt++;
        }

        if (cnt  n) rt = mid - 1;
        else {
            answer = max(answer, mid);
            lt = mid + 1;
        }
    }

    return answer;
}