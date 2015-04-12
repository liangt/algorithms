/*
#include <iostream>
using namespace std;

int a[20][20];
int sm, s, w, h;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
 void dfs(int x, int y)
 {
     if(s > 10)
        return;
     for(int i=0; i<4; i++)
     {
         int nx , ny;
         nx = x + dx[i];
         ny = y + dy[i];
        if(nx<0|| nx>=h || ny<0 || ny>=w || a[nx][ny]==1)
            continue;
        while(nx>=0 && nx<h && ny>=0 && ny<w && a[nx][ny]==0)
        {
            nx += dx[i];
            ny += dy[i];
        }
         if(nx<0|| nx>=h || ny<0 || ny>=w)
            continue;
        if(a[nx][ny] == 3)
        {
                if(sm > s)
                    sm = s;
                return;
        }
        else
        {
                a[nx][ny] = 0;
                s++;
                dfs(nx-dx[i], ny-dy[i]);
                s--;
                a[nx][ny] = 1;
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
                if(a[i][j] == 2)
                {
                    x = i;
                    y = j;
                    a[i][j] = 0;
                }
            }
        sm = 20;
        s = 1;
        dfs(x, y);
        if(sm == 20)
            cout<<"-1"<<endl;
        else
            cout<<sm<<endl;
    }
    return 0;
}
*/
