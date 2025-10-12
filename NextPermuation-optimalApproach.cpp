#include <bits/stdc++.h>
using namespace std;
void fun(int n, vector<int> &arr){
    int smallest = -1;
    int start = -1;
    
    for(int i=n-2;i>=0;i--){
        if(arr[i] < arr[i+1]){
            smallest = arr[i];
            start = i+1;
            break;
        }
    }
    
    if (start == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }
    
    for(int i=n-1;i>=start;i--){
        if(arr[i] > smallest){
            swap(arr[i],arr[start - 1]);
            break;
        }
    }
    
    reverse(arr.begin()+start,arr.end());
    
}
int main()
{
    vector<int>arr;
    
    string line;
    while(getline(cin,line)){
        
        if(line.empty()) break;
        
        stringstream ss(line);
        int num;
        
        while(ss >> num){
            arr.push_back(num);
        }
    }
    
    int n = arr.size();
    
    fun(n,arr);
    
    for(int i=0;i<arr.size();i++){
        cout <<arr[i] <<" ";
    }
    cout << endl;

    return 0;
}