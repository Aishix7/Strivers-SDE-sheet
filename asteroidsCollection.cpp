#include <bits/stdc++.h>
using namespace std;
vector<int> aster(vector<int>& arr){
    stack<int>st;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            while(!st.empty() && st.top() > 0 && (st.top()) < abs(arr[i])){
                st.pop();
            }
            if(!st.empty() && st.top()>0  && (st.top()) == abs(arr[i])){
                st.pop();
            }
            else if(st.empty() || st.top() < 0) st.push(arr[i]);
            
           
        }
        else
        st.push(arr[i]);
    }
    
    vector<int>result;
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
int main()
{
    vector<int>arr = {4,7,1,1,2,-3,-7,17,15,-16};
    // 
    vector<int>res = aster(arr);
    
    for(int n : res){
        cout << n <<" ";
    }
    cout <<"\n";
    return 0;
}