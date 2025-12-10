#include <bits/stdc++.h>
using namespace std;

class queues{
    public:
    static const int cap = 20;
    int start = -1, end = -1;
    int curr = 0;
    int q[cap];
    int element;
    
    void push(int x){
    if(curr == cap){
        cout << "overflow\n";
        return;
    }
    if(curr == 0){
        start = 0;
        end = 0;
        q[end] = x;
        curr = 1;
    }
    else{
        end = (end + 1) % cap;
        q[end] = x;  
        curr += 1;    
    }
}

    int topp(){
        if(curr == 0) return 0;
        return q[start];
    }
    int pop(){
        if(curr == 0)return 0;
        element = q[start];
        if(curr == 1) start = end = -1;
        else start = (start + 1)%cap;
        
        curr -= 1;
        return element;
    }
    int size(){
        return curr;
    }
};
int main()
{
    queues qq;
    qq.push(20);
    qq.push(70);
    qq.push(22);
    qq.push(63);
    qq.pop();
    qq.push(77);
    
    cout << qq.topp() << endl;
    cout << qq.size() << endl;
    return 0;
}