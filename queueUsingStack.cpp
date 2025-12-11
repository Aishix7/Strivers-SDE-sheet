#include <bits/stdc++.h>
using namespace std;
class SUQ{
    public:
        stack<int>s1;
        stack<int>s2;
        void push(int val){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(val);
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            // O(2n), remember in queue using linked list we used two pointers start and end, so here we are using two stacks s1 and s2.
        }
        void popp(){
            s1.pop();
        }
        int topp(){
            return s1.top();
        }
        int sizee(){
            return s1.size(); 
        }
        void print(){
            stack<int>temp = s1;
            while(!temp.empty()){
                cout << temp.top() <<" ";
                temp.pop();
            }
            cout << endl;
        }
};
int main()
{
    SUQ s;
    s.push(20);
    s.push(21); 
    s.push(89);
    cout << s.topp() <<"\n";
    s.push(77);
    s.popp();
    cout << s.topp() <<"\n";
    s.print();
    
    return 0;
}