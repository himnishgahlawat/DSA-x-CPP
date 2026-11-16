#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertBeginning(Node*& head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void display(Node* head){
    Node* current = head;
    while(current!= NULL){
        cout<<current->data<<" ";
        current = current->next;
    }
}

int main(){
   Node* head = NULL;
   int num;
   cin>>num;
   for(int i = 0;i<num;i++){
        int temp;
        cin>>temp;
        insertBeginning(head,temp);
   }
   display(head);

    return 0;
}