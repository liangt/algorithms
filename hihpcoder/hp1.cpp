/*
#include <cstdio>
#include <cstring>

const int N = 20002;
char ct[N];
int d[3];

bool isOK(int cr, int cy, int cb){
    int dx;
    dx = cr >= cy ? cr - cy : cy - cr;
    int t1=-1, t2=-1;
    for(int i=0; i<3; i++)
        if(dx == d[i]){
                t1 =  i;
                break;
        }
    if(t1 == -1)
        return false;
    dx = cr >= cb ? cr - cb : cb - cr;
    for(int i=0; i<3; i++)
        if(i!=t1 && dx==d[i]){
                t2 = i;
                break;
        }
    if(t2 == -1)
        return false;
    dx = cb >= cy ? cb - cy : cy - cb;
    t1 =  3 - t1 - t2;
    return dx == d[t1];
}

int main(){
    int cr=0, cy=0, cb=0, res=0, tp = 0;
    scanf("%d%d%d", &d[0], &d[1], &d[2]);
    scanf("%s", ct);
    for(int i=0; i<strlen(ct); i++){
            if(ct[i] == 'R')
                cr++;
            else if(ct[i] == 'Y')
                cy++;
            else
                cb++;
            tp++;
            if(isOK(cr, cy, cb)){
                if(tp > res)
                    res = tp;
                cr = cy = cb = tp = 0;
            }
    }
    if(res < tp)
        res = tp;
    printf("%d\n", res);
    return 0;
}
*/
