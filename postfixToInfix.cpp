#include <bits/stdc++.h>
using namespace std;
class postToIn{
    public:
        string postfixToInfix(string s){
            int n = s.length();
            int i = 0;
            string ans = "";
            stack<string>st;
            while(i<n){
                if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                    st.push(string(1,s[i]));
                }
                else{
                    string expr2 = st.top();
                    st.pop();
                    string expr1 = st.top();
                    st.pop();
                    string newexp = '(' + expr1 + s[i] + expr2 + ')';
                    st.push(newexp);
                }
                i++;
            }
            return st.top();
        }
        
};
int main()
{
    postToIn obj;
    string s = "ab-de+f*/";
    cout << obj.postfixToInfix(s) << "\n"; 

    return 0;
}