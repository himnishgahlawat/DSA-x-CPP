#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* next;
};
void insertatbeg(Node* head,int data1) {
   Node* newNode =new Node();
   newNode->data=data1;
   newNode->next=head;
   head= newNode;
}
void insertatend(Node* head,int data2) {
   Node* newNode=new Node();
   newNode->data=data2;
   newNode->next=NULL;
   Node* temp = new Node();
   while(temp!=NULL) {
      temp = temp->next;
   }
   temp->next=newNode;

}
void insertatpos(Node* head,int data3,int pos) {
   Node* newNode = new Node();
   newNode->data=data3;


}
void deleteatbegin(Node* head,int data4) {
   Node* temp = head;
   head= head->next;
   delete temp;
}
void deleteatend(Node* head,int data5) {
   Node* current = head;
   while(current->next->next!=NULL) {
      current=current->next;
   }
   delete current;
   current->next=NULL;
}
void deleteatpos(Node* head,int data6) {
   
}


