
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>pairs;
void TwoSum(vector<int>&arr, int target){
    // (if target - element[i]) value is present then store the indexes and print them. 
    map<int,int>freq; 
    
    for(int i=0;i<arr.size();i++){
        int required = target - arr[i];
        
        if(freq.count(required)){
        
            int index1 = i;
            int index2 = freq[target - arr[i]];
            pairs.push_back({index1,index2});
            
        }
        freq[arr[i]] = i;
    }
    
    
    
}
int main()
{
    int target;
    cin >> target;
    
    cin.ignore();
    
    string line;
    
    getline(cin,line);
    
    stringstream ss(line);
    vector<int>arr;
    
    int x;
    
    while(ss >> x){
        arr.push_back(x);
    }
    
    cout << "target: " << target <<"\n";
    
    cout <<"Array elements are: " <<"\n";
    for(int i=0;i<arr.size();i++){
        cout <<arr[i]<<" ";
    }
    cout <<endl;
    
    TwoSum(arr,target);
    
    for(int i=0;i<pairs.size();i++){
        cout << pairs[i].first <<" and "<< pairs[i].second<<" ";
    }
    cout << endl;
    return 0;
}