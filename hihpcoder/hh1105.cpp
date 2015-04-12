/*
#include <cstdio>
using namespace std;

const int N = 100002;
int heap[N], num;

void push(int w){
    heap[num] = w;
    int chd = num++, pa, tmp;
    while(chd){
        pa = (chd - 1) >> 1;
        if(heap[pa] < heap[chd]){
            tmp = heap[pa] ;
            heap[pa]  = heap[chd];
            heap[chd] = tmp;
        }
        chd = pa;
    }
}

int pop(){
    if(num == 0)
        return 0;
    int res = heap[0];
    heap[0] = heap[--num];
    int chd, pa = 0, tmp;
    while(pa < num){
        chd = (pa << 1) + 1;
        if(chd+1 < num && heap[chd] < heap[chd+1])
            chd++;
        if(heap[pa] < heap[chd]){
            tmp = heap[pa];
            heap[pa] = heap[chd];
            heap[chd] = tmp;
            pa = chd;
        }
        else
            break;
    }
    return res;
}

int main(){
    int n, w;
    char ch[2];
    scanf("%d", &n);
    while(n--){
        scanf("%s", ch);
        if(ch[0] == 'T')
                printf("%d\n", pop());
        else{
               scanf("%d", &w);
                push(w);
        }
    }
    return 0;
}
*/

/*
#include <cstdio>
#include <queue>
using namespace std;

int main(){
    int n, w;
    char ch[2];
    priority_queue<int> pq;
    scanf("%d", &n);
    while(n--){
        scanf("%s", ch);
        if(ch[0] == 'T'){
            if(!pq.empty()){
                printf("%d\n", pq.top());
                pq.pop();
            }
            else
                printf("%d\n", 0);
        }
        else{
               scanf("%d", &w);
                pq.push(w);
        }
    }
    return 0;
}
*/
