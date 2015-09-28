/*
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
typedef pair<int, int> pp;

int bfs(int sx, int sy, int ex, int ey){
    vector<pp> cur[2];
    cur[0].push_back(pp(sx, sy));
    int c, t, ans = 0;
    while(1){
        c = ans & 1;
        t = 1 - c;
        cur[t].clear();
        for(int i = 0; i < cur[c].size(); i++){
                if(cur[c][i].first == ex && cur[c][i].second == ey)
                    return ans;
                for(int j = 0; j < 8; j++)
                    cur[t].push_back(pp(cur[c][i].first + dx[j], cur[c][i].second + dy[j]));
        }
        ans++;
    }
}

int main(){
    int sx, sy, ex, ey;
    while(cin>>sx>>sy>>ex>>ey)
        cout<<bfs(sx, sy, ex, ey)<<endl;
    return 0;
}
*/
