#include <bits/stdc++.h>
using namespace std;
// brute force approach for set matrix to zeros
void intoZeroR(int n,int m,vector<vector<int>> &mat){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] == -1){
                mat[i][j] = 0;
            }
        }
    }
}
void changeR(int n,int m,vector<vector<int>> &matrix,int row){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i == row && matrix[row][j] != 0){
                matrix[row][j] = -1;
            }
        }
    }
}
void changeC(int n,int m,vector<vector<int>> &matrix, int col){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j%m == col && matrix[i][col] != 0){
                matrix[i][col] = -1;
            }
        }
    }
}
void fun(int n, int m,vector<vector<int>> &matrix){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                int row = i;
                int col = j%m;
                changeR(n,m,matrix,row);
                changeC(n,m,matrix,col);
            }
        }
    }
    
}
int main()
{
    string line;
    vector<vector<int>>matrix;
    
    while(getline(cin,line)){
        if(line.empty()) break;
        stringstream ss(line);
        
        vector<int> row;
        int num;
        
        while(ss >> num){
            row.push_back(num);
        }
        matrix.push_back(row);
    }
    
    int n = matrix.size();
    int m = matrix[0].size();
    
    fun(n,m,matrix);
    intoZeroR(n,m,matrix);
    
    for(auto &row : matrix){
        for(auto val : row){
            cout << val <<" ";
        }
        cout << endl;
    }

    return 0;
}