#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long lt, rt, mid;
    sort(times.begin(), times.end());
    //이분 검색 할 기준 -> 시간
    lt = 1;
    rt = (long long) times[times.size()-1] * n;
    while(lt <= rt){
        long long cnt = 0;
        mid = (rt + lt) / 2;
        for(int i=0; i<times.size(); i++){
            cnt += mid / times[i];
        }
        if(cnt >= n){
            if(mid <= rt) {
                answer = mid;
            }
            rt = mid - 1;
        } else {
            lt = mid + 1;    
        }
    }
    return answer;
}