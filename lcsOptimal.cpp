#include <bits/stdc++.h>
using namespace std;
int findCount(int num, unordered_set<int>& temp){
    int c = 0;
    while(temp.find(num) != temp.end()){
        c++;
        num++;
    }
    return c;
}
int lcs(vector<int>&arr){
    int longest = 1;
    int count = 1;
    int n = arr.size();
    unordered_set<int>temp;
    for(int i=0;i<n;i++){
        temp.insert(arr[i]);
    }
    for(int num : temp){
        
        if(temp.find(num - 1) == temp.end()){
            count = findCount(num,temp);
        }
        longest = max(longest,count);
    }
    
    return longest;
}
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
    
    int res = lcs(arr);
    cout << res <<"\n";

    return 0;
}