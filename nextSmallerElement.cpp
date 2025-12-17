#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmallerElement(vector<int>&arr){
    int n = arr.size();
    vector<int>temp(n,-1);
    stack<int>st;
    for(int i = n-1;i>=0;i--){
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();
        }
        if(!st.empty()){
            temp[i] = st.top();
        }
        st.push(arr[i]);
    }
    return temp;
}
int main()
{
    vector<int>arr = {4,8,5,2,25};
    vector<int>res = nextSmallerElement(arr);
    for(int n : res){
        cout << n <<" ";
    }
    cout << endl;

    return 0;
}