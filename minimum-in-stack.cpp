// this is brute force code;

#include <bits/stdc++.h>
using namespace std;
class stacks{
    public:
        stack<pair<int,int>>st;
        int minimum = INT_MAX;
        void pushh(int val){
            if(st.empty()){
                st.push({val,val});
            }
            else{
                st.push({val,min(val,st.top().second)});
            }
        }
        void popp(){
            if((st.empty())){
                cout <<"underflow\n";
                return;
            }
            
            st.pop();
            
        }
        int mini(){
            if(st.empty()){
                cout << "stack is empty\n";
                return -1;
            }
            return st.top().second;
        }
        int topp(){
            if(st.empty()){
                cout <<"stack is empty, so no top!\n";
                return -2;
            }
            return st.top().first;
        }
};
int main()
{
    stacks s;
    cout << s.mini() <<"\n";
    cout << s.topp() <<"\n";
    s.pushh(20);
    s.pushh(10);
    s.pushh(15);
    s.pushh(65);
    cout << s.mini() <<"\n";
    s.pushh(5);
    cout << s.mini() <<"\n";
    s.popp();
    cout << s.topp() <<"\n";
    s.pushh(2);
    cout << s.mini() <<"\n";
    cout << s.topp() <<"\n";
    
    return 0;
}