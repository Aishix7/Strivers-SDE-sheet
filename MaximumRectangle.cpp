#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int>& arr, int n){
    int nse = 0;
    int pse = 0;
    stack<int> st;
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        while(!st.empty() && arr[st.top()] > arr[i]){
            int element = st.top();
            st.pop();
            nse = i;
            pse = st.empty() ? -1 : st.top();
            maxi = max(maxi, arr[element] * (nse - pse - 1));
        }
        st.push(i);
    }

    while(!st.empty()){
        int element = st.top();
        st.pop();
        nse = n;
        pse = st.empty() ? -1 : st.top();
        maxi = max(maxi, arr[element] * (nse - pse - 1));
    }
    return maxi;
}

int fun(int n, int m, vector<vector<char>>& matrix){
    vector<vector<int>> prefixSum(n, vector<int>(m, 0));
    int maxi = INT_MIN;

    for(int j = 0; j < m; j++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += (matrix[i][j] - '0');
            if(matrix[i][j] == '0') sum = 0;
            prefixSum[i][j] = sum;
        }
    }

    for(int i = 0; i < n; i++){
        maxi = max(maxi, findMax(prefixSum[i], m));
    }
    return maxi;
}

int main(){
    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    int n = matrix.size();
    int m = matrix[0].size();

    int subres = fun(n, m, matrix);
    cout << subres << "\n";

    return 0;
}
