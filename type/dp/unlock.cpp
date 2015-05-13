/*
#include <iostream>
using namespace std;

// 求解手机的九宫格图案解锁总共能绘出多少种图案
// 回溯: 时间复杂度O(n!)
bool visit[3][3];
int unlock(int m, int r, int c){
    if(m == 0)
        return 1;
    int num = 0, x, y;
    for(int i=-2; i<=2; i++)
        for(int j=-2; j<=2; j++){
	    if(i==0 && j==0)
        continue;
            x = r + i;
            y = c + j;
            if(x>=0 && x<3 && y>=0 && y<3 && !visit[x][y]){
                if(i&1 || j&1){
                    visit[x][y] = true;
                    num += unlock(m-1, x, y);
                    visit[x][y] = false;
                }
                else if(visit[r+i/2][c+j/2]){
                        visit[x][y] = true;
                        num += unlock(m-1, x, y);
                        visit[x][y] = false;
                    }
            }
        }
    return num;
}

void init(){
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            visit[i][j] = false;
}

int count_one(unsigned x){
    int c=0;
    while(x){
        c++;
        x=x&(x-1);
    }
    return c;
}

// dp: 时间复杂度O(2^n*n^2)
int numbers[1<<9][3][3];
void unlock2(){
    for(int i=0; i<9; i++)
		numbers[1<<i][i/3][i%3] = 1;

    int tmp, r, c, x, y, dx, dy;
    for(int n=3; n<(1<<9); n++)
        for(int i=0; i<9; i++){
            tmp = 1 << i;
            if(n & tmp){
                r = i / 3;
                c = i % 3;
                tmp = n - tmp;
                for(int j=0; j<9; j++){
                    if(tmp & (1<<j)){
                        x = j / 3;
                        y = j % 3;
                        dx = r - x;
                        dy = c - y;
                        if(dx&1 || dy&1)
                            numbers[n][r][c] += numbers[tmp][x][y];
                        else{
                            dx = (r + x) >> 1;
                            dy = (c + y) >> 1;
                            if(n & (1<<(dx*3+dy)))
                                numbers[n][r][c] += numbers[tmp][x][y];
                    }
                }
            }
        }
    }
}

int main(){
    int num = 0, tmp;
    for(int n=4; n<10; n++){
        tmp = 0;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++){
                init();
                visit[i][j] = true;
                tmp += unlock(n-1, i, j);
            }
        num += tmp;
        cout<<n<<" "<<tmp<<endl;  // 输出n个格子的所有可能数
    }
    cout<<num<<endl;   // 输出所有可能的总数

    unlock2();
    int a[9] = {0};
    for(int n=1; n<(1<<9); n++){
        tmp = count_one(n) - 1;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                a[tmp] += numbers[n][i][j];
    }
    num = 0;
    for(int i=3; i<9; i++){
        cout<<i+1<<" "<<a[i]<<endl;
        num += a[i];
    }
    cout<<num<<endl;
    return 0;
}
*/
