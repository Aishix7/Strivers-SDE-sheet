
#include <bits/stdc++.h>
using namespace std;

void Sort012(vector<int>&arr){
    int count0 = 0,count1 = 0,count2 = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == 0){
            count0++;
        }
        if(arr[i] == 1){
            count1++;
        }
        if(arr[i]) count2++;
    }
    for(int i=0;i<count0;i++){
        arr[i] = 0;
    }
    for(int i=count0;i<(count1+count0);i++){
        arr[i] = 1;
    }
    for(int i=(count0+count1);i<(count0+count1+count2);i++){
        arr[i] = 2;
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