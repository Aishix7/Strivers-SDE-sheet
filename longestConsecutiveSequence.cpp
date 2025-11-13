#include <bits/stdc++.h>
using namespace std;
bool present(vector<int> &arr, int num){
    if(find(arr.begin(),arr.end(),num) != arr.end()){
        return true;
    }
    return false;
}
int fun(vector<int>& arr){

    int maxi = 1;
    int n = arr.size();
    
    for(int i=0;i<n;i++){
        int element = arr[i];
        int count = 1;
        while(present(arr,(element+1))){
            element = element + 1;
            count++;
        }
        maxi = max(maxi,count);
    }
    return maxi;
}
int main()
{
    vector<int>arr = {100,4,102,1,2,3,101};
    int res = fun(arr);
    
    cout << res << endl;

    return 0;
}