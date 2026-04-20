#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    int data;
    Node* head;
    Node*tail;
    public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);  // syntax for dynamically allocating memory for a new node
        // Node* newNode(val);  // syntax for static allocation
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=NULL;
            head=newNode;
        }
    }
};

int main(){
    return 0;
}