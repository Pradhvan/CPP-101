#include <iostream>
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
    int data;
    cin>>data;
    node *head = NULL;
    while(data != -1){
        //so the data is not de allocated explictly 
        node *newnode =new node(data);
        if(head == NULL){
            head = newnode;
        }
        else {
            node *temp = head;
            while(temp != NULL){
                temp = temp->next;
            }
            temp -> next = newnode;
        }
        
        cin>>data;
    }
}


void print (node *head){

    //so the head pointer is not lost
    node *temp = head;

    while(temp != NULL){
        cout<< temp->data<<endl;
        temp = temp ->next;
    }
}

int main(){

node *head = takeinput();
print(head);

/*
    //This is for manually entring the values 
    //statically 
    node n1(1);
    node *head = &n1;

    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);

    print(head);
*/

}