#include <bits/stdc++.h>
using namespace std;
bool valid(string &s){
        stack<int>st;
    
    
    for(char &ch : s){
        if(st.empty() || ch == '(' || ch == '[' || ch == '{'){
            st.push(ch);
        }
        if(ch == ')'){
            if(st.top() == '('){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(ch == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(ch == ']'){
            if(st.top() == '['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    
    return st.empty();
}
int main()
{
    string s = "([]{{}}()";
    if( valid(s)){
        cout << "true" << endl;
    }
    else {cout << "false" <<endl;}
    return 0;
}