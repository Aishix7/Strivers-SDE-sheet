#include <bits/stdc++.h>
using namespace std;
class stacks{
    public:
        stack<int>st;
        int mini = INT_MAX;
        void pushh(int val){
            if(st.empty()){
                mini = val;
                st.push(val);
            }
            if(val >= mini){
                st.push(val);
            }
            else{
                int newVal = 2*val - mini;
                st.push(newVal);
                mini = val;
            }
        }
        void popp(){
            if(st.empty()) cout <<"stack empty\n";
           
            if(st.top() < mini){
                mini = (2*(mini) - st.top());
                
            }
            st.pop();
            
        }
        int minimum(){
            return mini;
        }
        int topp(){
            if(st.empty()) return -1;
            if(mini > st.top()) return mini;
            
            return st.top();
        }
};
int main()
{
    stacks s;
    cout << s.minimum() <<"\n";
    cout << s.topp() <<"\n";
    s.pushh(20);
    s.pushh(10);
    s.pushh(15);
    s.pushh(65);
    cout << s.minimum() <<"\n";
    s.pushh(5);
    cout << s.minimum() <<"\n";
    s.popp();
    cout << s.topp() <<"\n";
    s.pushh(2);
    cout << s.minimum() <<"\n";
    cout << s.topp() <<"\n";
    
    return 0;
}