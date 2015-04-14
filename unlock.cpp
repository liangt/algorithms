#include <iostream>
using namespace std;

bool visit[3][3];
// 求解手机的九宫格图案解锁总共能绘出多少种图案
int unlock(int n, int m, int r, int c){
    if(m == n)
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
                    num += unlock(n, m+1, x, y);
                    visit[x][y] = false;
                }
                else{
                    if(visit[r+i/2][c+j/2]){
                        visit[x][y] = true;
			num += unlock(n, m+1, x, y);
			visit[x][y] = false;
                    }
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

int main(){
    int num = 0, tmp;
    for(int n=4; n<10; n++){
        tmp = 0;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++){
                init();
                visit[i][j] = true;
                tmp += unlock(n, 1, i, j);
            }
        num += tmp;
        cout<<n<<" "<<tmp<<endl;  // 输出n个格子的所有可能数
    }
    cout<<num<<endl;   // 输出所有可能的总数
    return 0;
}
