#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node *next;
    node (int data){
        this -> data = data;
        next = NULL;
    } 
};


node* takeinput(){
    
}
void print(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head -> next;
    }
}

int main(){
    //dynamically

    //storing data 
    node *n1  = new node(1);
    node * head = n1;
    node *n2 = new node(2);
    node *n3 = new node(3);
    node *n4 = new node(4);
    node *n5 = new node(5);

    //storing address in nodes
    n1-> next = n2;
    n2->next = n3;
    n3->next = n4;
    n4 ->next = n5;

    print(head);

}