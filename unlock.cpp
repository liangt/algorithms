#include <iostream>
using namespace std;

bool visit[3][3];
int dx[] = {-2, -2, -1, -1, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, -1, 0, 1, 2, -1, 1, -2, -1, 0, 1, 2, -1, 1};

int unlock(int n, int m, int r, int c){
    if(m == n)
        return 1;
    int num = 0, x, y;
    for(int i=-2; i<=2; i++)
        for(int j=-2; j<=2; j++){
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
    for(int i=0; i<16; i++){
        x = r + dx[i];
        y = c + dy[i];
        if(x>=0 && x<3 && y>=0 && y<3 && !visit[x][y]){
            visit[x][y] = true;
            num += unlock(n, m+1, x, y);
            visit[x][y] = false;
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
    for(int n=1; n<10; n++){
            tmp = 0;
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++){
                        init();
                        visit[i][j] = true;
                        tmp += unlock(n, 1, i, j);
                }
            num += tmp;
            cout<<n<<" "<<tmp<<endl;
    }
    cout<<num<<endl;
    return 0;
}
