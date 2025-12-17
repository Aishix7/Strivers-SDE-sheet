#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = arr.size();
    int leftMax = 0;
    int rightMax = n-1;
    int l = 1;
    int r = n-2;
    int capacity = 0;
    while(l<r){
        if(arr[l] <= arr[r]){
            if(arr[l] > arr[leftMax]) leftMax = l;
            else capacity += (arr[leftMax] - arr[l]);
            
            l = l+1;
        }
        else{
            if(arr[r] > arr[rightMax]) rightMax = r;
            else capacity += (arr[rightMax] - arr[r]);
            
            r= r-1;
        }

    }
    
    cout << capacity <<"\n";
    return 0;
}