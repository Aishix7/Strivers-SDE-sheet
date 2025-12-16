#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(const vector<int>&arr){
    stack<int>st;
    int n = arr.size();
    vector<int>temp(n,-1);
    int i = n-1;
    while(i >= 0){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        
        if(!st.empty()){
            temp[i] = st.top();
            
        }
        st.push(arr[i]);
        i--;
    }
    return temp;
}
int main()
{
    vector<int>arr = {4,12,5,3,1,2,5,3,1,2,4,6};
    int res = nextGreaterElement(arr);
    cout << res <<"\n";
    return 0;
}