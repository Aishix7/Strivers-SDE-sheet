#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>&arr){
    stack<int>st;
       int originalSize = arr.size();
    arr.insert(arr.end(),arr.begin(),arr.end());
    int n = arr.size();
    vector<int>temp(originalSize,-1);
    int i = n-1;
    while(i >= 0){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        
        if(i < originalSize && !st.empty()){
            temp[i] = st.top();
            
        }
        st.push(arr[i]);
        i--;
    }
    return temp;
}
int main()
{
    vector<int>arr = {1,2,1};
    vector<int> res = nextGreaterElement(arr);
   for(int n : res){
       cout << n <<" ";
   }
   cout << endl;
    return 0;
}