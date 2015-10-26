/*
#include <iostream>
#include <vector>
using namespace std;

bool visit[3][3];
vector<vector<int>> ans;
vector<int> tmp;

void unlock(int r, int c, int m){
    if(m == 0){
        ans.push_back(tmp);
        return;
    }
    int tr, tc;
    for(int i = -2; i <= 2; i++)
        for(int j = -2; j <= 2; j++){
            if(i == 0 && j == 0)
                continue;
            tr = r + i;
            tc = c + j;
            if(tr >= 0 && tr < 3 && tc >= 0 && tc < 3 && !visit[tr][tc]){
                if((i & 1) || (j & 1)){
                    tmp.push_back(tr * 3 + tc);
                    visit[tr][tc] = true;
                    unlock(tr, tc, m-1);
                    visit[tr][tc] = false;
                    tmp.pop_back();
                }
                else if(visit[r+i/2][c+j/2]){
                    tmp.push_back(tr * 3 + tc);
                    visit[tr][tc] = true;
                    unlock(tr, tc, m-1);
                    visit[tr][tc] = false;
                    tmp.pop_back();
                }
            }
        }
}

void init(){
    for(int i = 0; i < 3; i++)
        for(int  j = 0; j < 3; j++)
            visit[i][j] = false;
    tmp.clear();
}

int ct[1<<9][3][3];
void unlock2(){
    for(int i = 0; i < 9; i++)
        ct[1<<i][i/3][i%3] = 1;
    int rc, cc, r, c, dr, dc, tmp;
    for(int k = 0; k < (1<<9); k++){
        for(int i = 0; i < 9; i++){
            if((1<<i) & k){
                rc = i / 3;
                cc = i % 3;
                for(int j = 0; j < 9; j++){
                    if((1<<j) & k){
                        r = j / 3;
                        c = j % 3;
                        dr = rc - r;
                        dc = cc -c;
                        tmp = k - (1 << j);
                        if((dr & 1) || (dx & 1))
                            ct[k][rc][rr] += ct[tmp][r][c];
                        else{
                            dr = (rc + r) >> 1;
                            dc = (cc + c) >> 1;
                            if((1<<(dr*3+dc)) & k)
                                ct[k][rc][rr] += ct[tmp][r][c];
                        }
                    }
                }
            }
        }
    }
}

int main(){
    for(int n = 0; n < 9; n++){
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++){
                init();
                visit[i][j] = true;
                tmp.push_back(i*3+j);
                unlock(i, j, n);
                tmp.pop_back();
            }
    }
    cout<<ans.size()<<endl;
    return 0;
}
*/
