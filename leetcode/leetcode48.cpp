/*
#include <iostream>
#include <vector>
using namespace std;

void rotate_help(vector<vector<int> > &matrix, int l, int r){
    if(l>=r)
        return;
    int tmp;
    for(int i=0; i<r-l; i++){
        tmp = matrix[r-i][l];
        matrix[r-i][l] = matrix[r][r-i];
        matrix[r][r-i] = matrix[l+i][r];
        matrix[l+i][r] = matrix[l][l+i];
        matrix[l][l+i] = tmp;
    }
    rotate_help(matrix,l+1, r-1);
}

void rotate(vector<vector<int> > &matrix) {
    rotate_help(matrix, 0, matrix.size()-1);
}

int main(){
    vector<vector<int> > matrix(5);
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            matrix[i].push_back(i*j);

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }

    rotate(matrix);

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
*/
