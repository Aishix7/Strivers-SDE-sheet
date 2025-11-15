#include <bits/stdc++.h>
using namespace std;
pair<int,int> freq(vector<int>&arr){
    int n = arr.size();
    vector<int>hashmap(n+1);
    for(int i=0;i<(n+1);i++){
       hashmap[arr[i]]++;
    }
    int repeating = 0,missing = 0;
    for(int i=0;i<(n+1);i++){
        if(hashmap[i] > 1){
            repeating = i;
        }
        else if(hashmap[i] == 0 && i != 0){
            missing = i;
        }
    }
    return {repeating,missing};
    
}
int main()
{
    string line;
    getline(cin,line);
    
    vector<int>arr;
    
    stringstream ss(line);
    
    int x;
    
    while(ss >> x){
        arr.push_back(x);
    }
    
    pair<int,int>res = freq(arr);
    
    cout << res.first << " " << res.second << "\n";

    return 0;
}