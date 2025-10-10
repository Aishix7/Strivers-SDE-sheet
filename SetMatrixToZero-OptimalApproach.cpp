#include<bits/stdc++.h>
using namespace std;
void SetMatToZeros(int n,int m,vector<vector<int>> &matrix){
    int col0 = 1;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){

                matrix[i][0] = 0;

                if(j != 0) matrix[0][j] = 0;
                else col0 = 0;
                
            }
        }
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j] != 0){
                if(matrix[0][j] == 0 || matrix[i][0] == 0) matrix[i][j] = 0;
            }
        }
    }

    if(matrix[0][0] == 0){
        for(int i=1;i<n;i++){
            matrix[0][i] = 0;
        }
    }
    if(col0 == 0){
        for(int i=0;i<m;i++){
            matrix[i][0] = 0;
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
    
    SetMatToZeros(n,m,matrix)

    for(auto &row : matrix){
        for(auto val : row){
            cout << val <<" ";
        }
        cout << endl;
    }
}