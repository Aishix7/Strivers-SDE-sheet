
#include <bits/stdc++.h>
using namespace std;

void Sort012(vector<int>&arr){
    int low = 0,mid = 0;
    int high = arr.size() - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) mid++;
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
   
    string line;
    vector<int>arr;
    
    getline(cin,line);
    
    stringstream ss(line);
    int x;
    while(ss >> x){
        arr.push_back(x);
    }
    
    Sort012(arr);
    cout <<"Sorted Array elements are: " <<"\n";
    for(int i=0;i<arr.size();i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;
    
    
    return 0;
}