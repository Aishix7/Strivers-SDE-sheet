#include <bits/stdc++.h>
using namespace std;
int st[20];
class stacks{
    int top = -1;
    public:
    void push(int x){
        if(top < 19){
            top = top + 1;
            st[top] = x;
        }
        else{
            cout << "overflow" <<"\n";
        }
    }
    int topp(){
        if(top != -1) return st[top];
        return 0;
    }
    void pop(){
        if(top != -1){
            
            top = top - 1;
        }
    }
    int size(){
        return top + 1;
    }
};
int main()
{
    stacks s;
    s.push(20);
    s.push(70);
    s.push(22);
    s.push(63);
    s.pop();
    s.push(77);
    s.push(20);
    s.push(70);
    s.push(22);
    s.push(63);s.push(20);
    s.push(70);
    s.push(22);
    s.push(63);
    s.push(20);
    s.push(70);
    s.push(22);
    s.push(63);
    s.push(20);
    s.push(70);
    s.push(22);
    s.push(63);
    s.push(20);
    s.push(70);
    s.push(22);
    s.push(63);
    cout << s.topp() << endl;
    cout << s.size() << endl;
    return 0;
}