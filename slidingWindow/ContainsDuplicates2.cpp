#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    
    string line;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while(ss >> x){
       
        
        arr.push_back(x);
    }
    
    int k;
    cin >> k;
    
    int i=0,j=0;
    int n = arr.size();
    unordered_set<int>temp;
    while(j < n){
        
        if(abs(i-j) > k){
            temp.erase(arr[i]);
            i++;
            
        }
        if(temp.find(arr[j]) != temp.end()){
                return true;
        }
        temp.insert(arr[j]);
        j++;
    }
    if(arr[i] == arr[j-1]){
        cout << "True" <<"\n";
    }
    else{
        cout << "False" <<"\n";
    }
    return 0;
}