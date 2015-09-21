/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

    void help(vector<vector<string>>& ans, int *pos, int n, int p){
        if(p == n){
            string tmp(n, '.');
            vector<string> s(n);
            for(int i = 0; i < n; i++){
                s[i] = tmp;
                s[i][pos[i]] = 'Q';
            }
            ans.push_back(s);
            return;
        }

        bool tag;
        int t;
        for(int i = 0; i < n; i++){
            pos[p] = i;
            tag = true;
            for(int j = 0; j < p; j++){
                if(pos[j] == i){
                    tag = false;
                    break;
                }
                t = i - pos[j];
                if(t < 0)
                    t = -t;
                if(t == p - j){
                    tag = false;
                    break;
                }
            }
            if(tag)
                help(ans, pos, n, p + 1);
        }
    }

    vector<vector<string> > solveNQueens(int n) {
        // write your code here
        int *pos = new int[n];
        vector<vector<string>> ans;
        help(ans, pos, n, 0);
        delete [] pos;
        return ans;
    }

vector<vector<string> > solveNQueens2(int n) {
        // write your code here
        vector<vector<string>> ans;
        typedef pair<int, vector<int>> pp;
        queue<pp> que;
        for(int i = 0; i < n; i++)
            que.push(pp(1, vector<int>(1, i)));
        pp tp;
        bool tag;
        vector<int> pos(n);
        int t;
        while(!que.empty()){
            tp = que.front();
            que.pop();
            if(tp.first == n){
                string tmp(n, '.');
                vector<string> s(n);
                for(int i = 0; i < n; i++){
                    s[i] = tmp;
                    s[i][tp.second[i]] = 'Q';
                }
                ans.push_back(s);
                continue;
            }
            for(int i = 0; i < n; i++){
                tag = true;
                for(int j = 0; j < tp.first; j++){
                    if(tp.second[j] == i){
                        tag = false;
                        break;
                    }
                    t = i - tp.second[j];
                    if(t < 0)
                        t = -t;
                    if(t == tp.first - j){
                        tag = false;
                        break;
                    }
                }
                if(tag){
                    for(int j = 0; j < tp.first; j++)
                        pos[j] = tp.second[j];
                    pos[tp.first] = i;
                    que.push(pp(tp.first + 1, pos));
                }
            }
        }
        return ans;
    }

int main(){
    vector<vector<string> > ans = solveNQueens2(4);
    cout<<ans.size()<<endl;
    for(int i = 0; i < ans.size(); i++){
        cout<<"[ "<<endl;
        for(int j = 0; j < ans[i].size(); j++)
            cout<<ans[i][j]<<endl;
        cout<<"]"<<endl;
    }
    return 0;
}
*/
