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
            if(num & (1 << i)){
                temp.push_back(nums[i]);
            }
        }
        positions.push_back(temp);
    }
    
   
    for (auto &row : positions) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}