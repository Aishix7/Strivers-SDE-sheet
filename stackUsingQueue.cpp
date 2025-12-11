#include <bits/stdc++.h>
using namespace std;
class QUS{
    public:
        queue<int>que;
        void push(int val){
            int s = que.size();
            que.push(val);
            for(int i=0;i<s;i++){
                que.push(que.front());
                que.pop();
            }
        }
        void popp(){
            que.pop();
        }
        int top(){
            return que.front();
        }
        int sizee(){
            return que.size(); 
        }
        void print(){
            queue<int>temp = que;
            while(!temp.empty()){
                cout << temp.front() <<" ";
                temp.pop();
            }
            cout << endl;
        }
};
int main()
{
    QUS q;
    q.push(20);
    q.push(21);
    q.push(89);
    cout << q.top() <<"\n";
    q.push(77);
    q.popp();
    cout << q.top() <<"\n";
    q.print();
    
    return 0;
}