#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target = 7;
    vector<int>arr = {2,3,1,2,4,3};
    int n = arr.size();
    int i = 0,j = 0;
    int mini = n;
    int sum = 0;
    while(j < n){
        sum += arr[j];
        while(sum >= target){
            mini = min(mini,(j-i+1));
            sum -= arr[i];
            i++;
        }
        j++;
    }
    
    cout << mini << "\n";
    return 0;
}