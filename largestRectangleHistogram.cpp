#include <bits/stdc++.h>
using namespace std;
int random(vector<int>& arr){
    // build pse and nse 
    int n = arr.size();
    vector<int>pse(n,-1);
    vector<int>nse(n,n);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }
        if(!st.empty()){
            pse[i] = st.top();
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()] > arr[i]){
            st.pop();
        }
        if(!st.empty()){
            nse[i] = st.top();
        }
        st.push(i);
    }
    
    int maxi = INT_MIN;
    
    for(int i=0;i<n;i++){
        maxi = max(maxi, arr[i]*(nse[i] - pse[i] - 1));
    }
    return maxi;
}
int main()
{
    
    vector<int>heights = {2,1,5,6,2,3};
    
    int res = random(heights);
    cout << res << endl;
    return 0;
}