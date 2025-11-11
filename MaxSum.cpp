#include <bits/stdc++.h>
using namespace std;
vector<int> maxSum(vector<int>& arr){
    int maxi = INT_MIN;
    int sum = 0;
    int start = 0,end = 0;

    for(int i = 0; i < arr.size(); i++){

        if(sum < 0){
            sum = 0;
            start = i;
        }

        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
            end = i;
        }
    }
    return vector<int>(arr.begin() + start, arr.begin() + end + 1);
}
int main()
{
    string line;
    getline(cin,line);
    stringstream ss(line);
    
    vector<int>arr;
    
    int x;
    while(ss >> x){
        arr.push_back(x);
    }
    
    vector<int> res = maxSum(arr);
    
    for(int y : res){
        cout << y <<" ";
    }
    cout << endl;
    return 0;
}


