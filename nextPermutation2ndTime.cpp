#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& arr){
    // first identify the downfall and then swap with the greater element than the downfall.
    // 2154300
    int first = 0;
    int start = 0;
    for(int i=arr.size()-1;i>=1;i--){
        
        if(arr[i] > arr[i-1]){
            first = i-1;
            start = i;
            break;
        }
    }
    int second = 0;
    for(int i=arr.size()-1;i>=start;i--){
        if(arr[i] > arr[first]){
            second = i;
            break;
        }
    }
    
    swap(arr[first],arr[second]);
    
    sort(arr.begin()+start,arr.end());
    
    

}
int main()
{
    string line;
    getline(cin,line);
    stringstream ss(line);
    
    vector<int>arr;
    
    int x;
    while(ss >> x){
        arr.push_back(x);
    }
    
    nextPermutation(arr);
    
    for(int x : arr){
        cout << x <<" ";
    }
    cout << endl;
   
    return 0;
}


