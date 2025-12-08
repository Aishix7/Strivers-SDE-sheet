#include <bits/stdc++.h>
using namespace std;
vector<int> ans(vector<int>&nums){
    int xorr = 0;
    for(int i=0;i<nums.size();i++){
        xorr ^= nums[i];
    }
    
    int shift = 0;
    while((xorr & 1) == 0){ // 110  -> shift = 1, xorr >> shift = 011, 011&1 = 1. (xorr & 1) is to check if rightmost is 0 or 1.
        
        xorr = xorr>>1;
        shift++;
    }
    int mask = 1 << shift; // to find mask(the rightmost set bit) we have one more trick that is (xorr)&(-xorr) here -xorr is nothing but 2's compliment.
    int b1 = 0,b2 = 0;
    for(int i=0;i<nums.size();i++){
        if(mask & nums[i]){
            b1 ^= nums[i];
        }
        else{
            b2 ^= nums[i];
        }
    }
    return {b1,b2};
}
int main()
{
    vector<int>nums = {1,2,1,3,2,5};
    
    // xorr of all nums in array 
    // find the mask - rightmost set bit 
    // mask & each number in array 
    // classify into 2 groups b1,b2
    
    vector<int>res = ans(nums);
    cout <<"single nums are: " << "\n";
    cout <<"num 1 : " << res[0] <<"\n"; 
    cout <<"num 2 : " << res[1] <<"\n";
    
    return 0;
}