#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1, 2 ,3, 2 ,2 ,2 ,5 ,2};
    
    int major;
    int count = 0;
    for(int i=0;i<arr.size();i++){
        if(count == 0){
            major = arr[i];
            count = 1;
        }
        else if(arr[i] == major){
            count++;
        }
        else if(arr[i] != major){
            count--;
        }
        
    }
    
    for(int i=0;i<arr.size();i++){
        if(arr[i] == major) count++;
    }
    if(count > (arr.size()/2)){
        cout << major;
    }

    return 0;
}
// moore's algorithm.