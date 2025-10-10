#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>matrix;

void secondApproach(int n){

    for(int j=1;j<=n;j++){
        long long res = 1;
        vector<int>row;
        row.push_back(1);
        for(int i=1;i<j;i++){
            res = res*(j-i);
            res = res/i;
            row.push_back(res);
        }
        matrix.push_back(row);
    }
}
int main()
{
    int n;
    cin >> n;
    
    secondApproach(n);
    
    for(auto &row : matrix){
        for(auto val : row){
            cout << val <<" ";
        }
        cout << endl;
    }
    
    return 0;
}