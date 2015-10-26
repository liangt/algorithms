/*
#include <iostream>
#include <queue>
using namespace std;


struct job{
    int request;
    int duration;
    job(int r, int d):request(r), duration(d){}
    bool operator<(const job& other ) const{
        if(duration > other.duration)
            return true;
        else if(duration == other.duration &&request > other.request)
            return true;
        else
            return false;
    }
};

float waitingTimeSJF(int *requestTimes, int *durations, int n)
{
    // WRITE YOUR CODE HERE
    priority_queue<job> que;
    job tmp(requestTimes[0], durations[0]);
    que.push(tmp);
    int s = 0, ans = 0, i = 1;
    while(!que.empty()){
        tmp = que.top();
        que.pop();
        if(s < tmp.request)
            s = tmp.request;
        ans += s - tmp.request;
        s += tmp.duration;
        while(i < n && requestTimes[i] <= s){
            que.push(job(requestTimes[i], durations[i]));
            i++;
        }
    }
    return float(ans) / n;
}

int main(){
    int requestTimes[] = {0, 2, 4, 5};
    int durations[] = {7, 4, 1, 4};
    int n = 4;
    cout<<waitingTimeSJF(requestTimes, durations, n)<<endl;
    return 0;
}
*/
