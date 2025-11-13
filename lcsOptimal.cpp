#include <bits/stdc++.h>
using namespace std;
int fun(vector<int>& arr){
    int current = 0,previous = INT_MIN, longest = 1;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i] - 1 == previous){
            current++;
        }
        else if(arr[i] != previous){
            current = 1;
        }
        previous = arr[i];
        longest = max(longest,current);
    }
    return longest;
}
int main()
{
    vector<int>arr = {100,4,102,1,2,3,101};
    sort(arr.begin(),arr.end());
    
    int res = fun(arr);
    
    cout << res << endl;

    return 0;
}