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
};

int main(){
    return 0;
}