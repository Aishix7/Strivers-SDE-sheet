#include <bits/stdc++.h>
using namespace std;
string s = "a*b+c"; // postfix = "ab*c+" // prefix = "+*abc"

class convert{
    public:
        string rev(string s){
            int n = s.length();
            string temp = "";
            for(int i=n-1;i>=0;i--){
                if(s[i] == '('){
                    temp += ')';
                }
                else if(s[i] == ')'){
                    temp += '(';
                }
                else temp += s[i];
            }
            return temp;
        }
        int priority(char c){
            if( c== '+' || c == '-'){
                return 1;
            }
            else if(c == '*' || c == '/'){
                return 2;
            }
            else if(c == '^'){
                return 3;
            }
            return 0;
        }
        string InfixToPostfix(string s){
            stack<char>st;
            string ans = "";
            int i=0;
            int n = s.length();
            while(i < n){
                if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >='0' && s[i] <='9')){
                    ans += s[i];
                }
                else  if(s[i] == ')' ){                                   
                    while(!st.empty() && st.top() != '('){
                        ans += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else {
                    while(!st.empty() && priority(s[i]) < priority(st.top())){
                        ans += st.top();
                        st.pop();        
                    }
                    st.push(s[i]);
                }
                i++;
            }
            
            while(!st.empty()){
                ans += st.top();
                st.pop();
            }
            
            
            return ans;
            
        }
};
int main()
{
    convert c;
    
    string s = "a-b-c";
    s = c.rev(s);
    string res = c.InfixToPostfix(s);
    res = c.rev(res);
    cout << res << "\n";
    return 0;
}
