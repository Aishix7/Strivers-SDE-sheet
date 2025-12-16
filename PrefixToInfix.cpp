
#include <bits/stdc++.h>
using namespace std;
class stackk{
    public:
    string PrefixToInfix(string s){
        int n = s.length();
        int i=n-1;
        stack<string>st;
        while(i >= 0){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <='9')){
                st.push(string(1,s[i]));
            }
            else{
                string expr1 = st.top();
                st.pop();
                string expr2 = st.top();
                st.pop();
                string newExp = '(' + expr1 + s[i] + expr2 + ')';
                st.push(newExp);
            }
            i--;
        }
        return st.top();
    }
};
int main()
{
    stackk st;
    string s = "*/f-de+ab";
    cout << st.PrefixToInfix(s) <<"\n";

    return 0;
}