#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums = {1,2,3};
    
    vector<vector<int>>positions;
  
    int n = nums.size();
    int subsets = 1 << n;
    
    for(int num = 0 ;num < subsets;num++){
        vector<int>temp;
        for(int i=0;i<n;i++){
            temp.push_back(num & (1 << i));
        }
        positions.push_back(temp);
    }
    
    vector<vector<int>>res;
    
    for (auto &row : positions) {
        int count = 0;
        vector<int>temp;
        for (auto &val : row) {
            if(val) temp.push_back(nums[count]);
            count++;
        }
        
       res.push_back(temp);
    }
    sort(res.begin(),res.end());
    for (auto &row : res) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}