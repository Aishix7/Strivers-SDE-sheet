#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>permutations;
void finding(int arr[],int i,int n,vector<int> &temp, vector<bool> &freq){
    if(i == n){
        permutations.push_back(temp);
        return;
    }
    for(int j=0;j<n;j++){
        if(freq[j] != true){
            freq[j] = true;
            temp.push_back(arr[j]);
            finding(arr,i+1,n,temp,freq);
            temp.pop_back();
            freq[j] = false;
        }
    }
    
}
int main()
{
    int arr[3] = {3,1,2};
    vector<int>temp;
    vector<bool>freq(3,false);
    finding(arr,0,3,temp,freq);
    
    sort(permutations.begin(),permutations.end());
    
    for(auto &row : permutations){
        for(auto val : row){
            cout << val <<" ";
        }
        cout << endl;
    }
    return 0;
}