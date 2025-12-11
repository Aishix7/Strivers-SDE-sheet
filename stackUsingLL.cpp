#include <bits/stdc++.h>
using namespace std;
class LinkedList{
    private: 
        struct Node{
            int data;
            Node* next;
            Node(int val) : data(val),next(nullptr){}
        };
        Node* head;
    public:
        Node* top;
        int size ;
        LinkedList(){
            head =  nullptr;
            top = nullptr;
            size = 0;
        }
        void push(int val){
            Node* temp = new Node(val);
            temp->next = top;
            top = temp;
            size += 1;
        }
        void pop(){
            if(top == nullptr){
                cout <<"stack underflow\n";
                return;
            }
            Node* temp = top;
            top = top->next;
            delete(temp);
            size -= 1;
        }
        int topp(){
            if(top == nullptr){
                cout << "stack empty\n";
                return -1;
            }
            return top->data;
        }
        int sizee(){
            return size;
        }
        void print(){
            Node* temp = top;
            while(temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};
int main()
{
    LinkedList list;
    list.pop();
    list.push(20);
    list.push(7);
    list.push(77);
    list.push(10);
    cout <<"top:" << list.topp() << "\n";
    list.push(65);
    cout <<"top:" << list.topp() << "\n";
    list.push(89);
    list.print();
    
    return 0;
}