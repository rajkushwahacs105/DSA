#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1) {
        data = data1;
        next = next1;
    }
    public:
    Node(int data1) {
        data = data1;
        next = nullptr; 
    }
};

Node* convertArr2LL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size() ; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


// Remove  k  element in linklist . 


Node* removeK(Node* head , int k) {
    if(head == NULL) return NULL;
    if(k == 1) {
        Node* temp = head;
        head = head-> next;
        free(temp);
        return head;
    }

    int cnt = 0 ;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL) {
        cnt++;
        if(cnt == k){
            prev -> next = prev->next ->next;
            free(temp);
            break;
        }
    }
}




int main(){
    vector<int> arr = {12 ,5, 8, 7};
    Node* head = convertArr2LL(arr);
    Node* temp = head;
     head = removeK(head ,3);

    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    
   
    return 0;
}