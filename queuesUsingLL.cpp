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
        Node* start;
        Node* end;
        int size ;
        LinkedList(){
            start =  nullptr;
            end = nullptr;
            size = 0;
        }
        void push(int val){
            Node* temp = new Node(val);
            if((start == nullptr)){
                start = temp;
                end = temp;
               
            }
            else{
            end->next = temp;
            end = temp;
            }
            size += 1;
        }
        void pop(){
            if(start == nullptr){
                cout <<"stack underflow\n";
                return;
            }
            Node* temp = start;
            start = start->next;
            delete(temp);
            size -= 1;
        }
        int topp(){
            if(start == nullptr){
                cout << "stack empty\n";
                return -1;
            }
            return start->data;
        }
        int sizee(){
            return size;
        }
        void print(){
            Node* temp = start;
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
    
    list.push(20);
    list.push(7);
    list.push(77);
    list.push(10);
    cout <<"top:" << list.topp() << "\n";
    list.push(65);
    list.pop();
    cout <<"top:" << list.topp() << "\n";
    list.push(89);
    list.print();
    
    return 0;
}