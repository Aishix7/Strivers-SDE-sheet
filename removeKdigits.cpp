#include <bits/stdc++.h>
using namespace std;
string check(int k, string num) {
    int i=0;
    int n = num.length();
    stack<char>st;
    int end = 0;
    while(i<n){
        end = i;
        while(!st.empty() && k > 0 && (st.top() - '0') > (num[i] - '0')){
            st.pop();
            k--;
        }
        st.push(num[i]);
        i++;      
    }
    while(k > 0 && !st.empty()){
        st.pop();
        k--;
    }
    if (st.empty()) return "0";

    string res = "";
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());

    // remove leading zeros
    int idx = 0;
    while (idx < res.size() && res[idx] == '0') idx++;
    res = res.substr(idx);

    if (res.size() == 0) return "0";
    return res;
}
int main()
{
	string num = "10200";
	int k = 1;
   
    string result = check(k,num);
    cout << result <<endl;

	return 0;
}