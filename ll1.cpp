#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }

};
Node* arr2ll(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover=head;
    for(int i = 1;i<arr.size();i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover= temp; 
    }
    return head;
}
int lengthofll(Node* head) {
    Node* temp = head;
    int count=0;
    while(temp !=NULL) { //while(temp)
        
        temp = temp->next;
        count++;
    }
    return count;
}
int search(Node* head,int val) {
    Node* temp = head;

    while(temp !=NULL) { //while(temp)
        if(temp->data==val) return 1;
        temp = temp->next;
        
    }
    return 0;
}
void print(Node* head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* removeshead(Node* head) {
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main() {
    vector<int> arr = {2,5,8,7};

    // Node* y = new Node(arr[0],nullptr);
    // cout<<y<<endl; // address -> 0x270b6a97f70
    // cout<<y->data; // 2
    // cout<<head->data;
    // Node* temp = head;
    // while(temp !=NULL) { //while(temp)
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    // cout<<"\n";
    // cout<<lengthofll(head)<<endl;
    
    // cout<<search(head,15);
    
    Node* head = arr2ll(arr);  
    head  = removeshead(head);
    print(head); 
    
}
