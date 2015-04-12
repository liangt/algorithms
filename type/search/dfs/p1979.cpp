/*
#include <iostream>
using namespace std;

char a[21][21];
int s, w, h;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
 void dfs(int x, int y)
 {
     a[x][y] = '#';
     for(int i=0; i<4; i++)
     {
         int nx = x + dx[i], ny = y + dy[i];
         if(nx>=0 && nx<h && ny>=0 && ny<w && a[nx][ny]=='.')
         {
             s++;
             dfs(nx, ny);
         }
     }
 }

int main()
{
    while(1)
    {
        cin>>w>>h;
        if(! w && !h)
            break;
        int x, y;
        for(int i=0; i<h; i++)
            for(int j=0; j<w; j++)
            {
                cin>>a[i][j];
                if(a[i][j] == '@')
                {
                    x = i;
                    y = j;
                }
            }
        s = 1;
        dfs(x, y);
        cout<<s<<endl;
    }
    return 0;
}
*/
