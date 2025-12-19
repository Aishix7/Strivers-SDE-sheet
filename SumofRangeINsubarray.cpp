#include <bits/stdc++.h>
using namespace std;
int minimums(vector<int>& arr){
    int n = arr.size();
    stack<int>st;
    
    vector<int>NSR(n,n);
    vector<int>NSL(n,-1);
    vector<int>NLR(n,n);
    vector<int>NLL(n,-1);
    // smallest
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }
        if(!st.empty()){
            NSR[i] = st.top();
        }
        st.push(i);
    }
    
    while(!st.empty()){
        st.pop();
    }

    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()] > arr[i]){
            st.pop();
        }
        if(!st.empty()){
            NSL[i] = st.top();
        }
        st.push(i);
    }
    
    while(!st.empty()){
        st.pop();
    }
    // largest
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }
        if(!st.empty()){
            NLR[i] = st.top();
        }
        st.push(i);
    }
    
    while(!st.empty()){
        st.pop();
    }

    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            st.pop();
        }
        if(!st.empty()){
            NLL[i] = st.top();
        }
        st.push(i);
    }
    
    int sumSmall = 0;
    int sumLarge = 0;
    for(int i=0;i<n;i++){
        sumSmall += (arr[i]*((i-NSL[i])*(NSR[i] - i)));
        sumLarge += (arr[i]*((i-NLL[i])*(NLR[i] - i)));
    }
    return sumLarge - sumSmall;
    
    
}
int main()
{
    vector<int> arr = {4,-2,-3,4,1};
    int sum = minimums(arr);
    cout << sum <<"\n";

    return 0;
}