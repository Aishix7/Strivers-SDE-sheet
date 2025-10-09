#include<bits/stdc++.h>
using namespace std;
void check(int n,int m,vector<vector<int>> &matrix, vector<int> &Nrow, vector<int> &Ncol){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                Nrow[i] = 1;
                Ncol[j%m] = 1;   
            }
        }
    }
}
void change(int n,int m,vector<vector<int>> &matrix, vector<int> &Nrow, vector<int> &Ncol){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(Nrow[i] == 1){
                matrix[i][j] = 0;
            }
            if(Ncol[i] == 1){
                matrix[i][j] = 0;
            }
        } 
    }
}
int main(){
    string line;
    vector<vector<int>>matrix;

    while(getline(cin,line)){
        if(line.empty())break;

        stringstream ss(line);

         int num;

         vector<int>row;
         
         while(ss >> num){
            row.push_back(num);
         }

         matrix.push_back(row);
    }
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector<int>Nrow(n,0);
    vector<int>Ncol(m,0);

    check(n,m,matrix,Nrow,Ncol);
    change(n,m,matrix,Nrow,Ncol);

    for(auto &row : matrix){
        for(auto val : row){
            cout << val <<" ";
        }
        cout << endl;
    }
}