#include<bits/stdc++.h>
using namespace std;

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

    check(n,m,matrix);
    change(n,m,matrix);

    for(auto &row : matrix){
        for(auto val : row){
            cout << val <<" ";
        }
        cout << endl;
    }
}