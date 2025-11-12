#include <bits/stdc++.h>
using namespace std;
int maxProd(vector<int>& arr){
    int prefix = 1,suffix = 1,ans = 1;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;
        
        prefix *= arr[i];
        suffix *= arr[n-i-1];
        ans = max(ans,max(prefix,suffix));
    }
   
    return ans;
}
int main()
{
    string line;
    getline(cin,line);
    
    vector<int>arr;
    int x;
    
    stringstream ss(line);
    
    while(ss >> x){
        arr.push_back(x);
    }
    
    int res = maxProd(arr);
    
    cout << res << endl;
    return 0;
}