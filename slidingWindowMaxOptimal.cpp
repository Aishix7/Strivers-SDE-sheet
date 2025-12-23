#include <bits/stdc++.h>
using namespace std;
vector<int> fun(int n,vector<int>&arr, int k){
    deque<int>dq;
    vector<int>result;
    for(int i=0;i<n;i++){
        if(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()] <= arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if( i >= k-1) result.push_back(arr[dq.front()]);
    }

    return result;
    
}
int main()
{
    vector<int>arr = {1,3,-1,-3,5,3,7,1,6};
    int n = arr.size();
    int k = 3;
    vector<int>res = fun(n,arr,k);
    for(int num : res){
        cout << num <<" ";
    }
    cout <<"\n";
    return 0;
}