#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,1,2,1,2,2,6};
    int c1 = 0,c2 = 0;
    int major1,major2;
    
    
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(c1 == 0 && arr[i] != major2){
            major1 = arr[i];
            c1 = 1;
        }
        else if(c2 == 0 && arr[i] != major1){
            major2 = arr[i];
            c2 = 1;
        }
        else if(major1 == arr[i]) c1++;
        else if(major2 == arr[i]) c2++;
        else c1--, c2--;
    }
    
    vector<int>result;
    
    c1 = 0,c2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == major1)c1++;
        if(arr[i] == major2)c2++;
    }
    int mini = (int)(n/3) + 1;
    if(c1 >= mini)result.push_back(major1);
    if(c2 >= mini)result.push_back(major2);
    
    sort(result.begin(),result.end());
    for(int i=0;i<result.size();i++){
        cout << result[i] <<" ";
    }
    cout <<"\n";
    return 0;
}