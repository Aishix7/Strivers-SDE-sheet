#include <bits/stdc++.h>
using namespace std;
vector<int> code(vector<int>& arr){
    int n = arr.size();
    
    int arrSum = 0;
    int realSum = (n*(n+1))/2;
    
    for(int i=0;i<n;i++){
        arrSum += arr[i];
    }
    int sumDiff = arrSum - realSum; // (x-y)
    
    int realSquareSum = (n*(n+1)*(2*n + 1))/6;
    int squareSum = 0;
    
    for(int i=0;i<n;i++){
        squareSum += ((arr[i])*(arr[i]));
    }
    
    int squreDiff = squareSum - realSquareSum; // (x-y)(x+y)
    
    int eq1 = sumDiff;
    int eq2 = (squreDiff / eq1);
    
    int x = (eq1 + eq2)/2;
    int y = x - sumDiff;
    
    return {x,y};
}
int main()
{
    string line;
    vector<int>arr;
    getline(cin,line);
    
    stringstream ss(line);
    
    int x;
    while(ss >> x){
        arr.push_back(x);
    }
    vector<int> res = code(arr);
    
    cout << "repeating : " << res[0] <<" missing : " << res[1] << "\n";
    
    return 0;
}