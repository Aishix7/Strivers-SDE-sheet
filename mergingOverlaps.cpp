#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>&arr){
    vector<vector<int>>ans;
    int n = arr.size();
    
    for(int i=0;i<n;i++){
        int start = arr[i][0];
        int end = arr[i][1];
        
        if(!ans.empty() && ans.back()[1] >= end){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j][0] <= end){
                end = max(end,arr[j][1]);
            }
            else{
                break;
            }
        }
        
        ans.push_back({start,end});
    }
    return ans;
}
int main()
{
    
    vector<vector<int>>arr;
    string line;
    
    while(getline(cin,line)){
        
        if(line=="")break;
        
        stringstream ss(line);
        int x;
        vector<int>temp;
        while(ss >> x)temp.push_back(x);
        
        if (temp.size() == 2)         
        arr.push_back(temp);
    }
    
    sort(arr.begin(),arr.end());
    
    vector<vector<int>>res = merge(arr);
    
    for(const auto &row : res){
        for(const auto &val : row){
            cout << val <<" ";
        }
        cout << endl;
    }

    return 0;
}