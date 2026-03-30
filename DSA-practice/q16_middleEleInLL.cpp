//find the middle of the LL

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int value1, Node* next1){
        value = value1;
        next = next1;
    }
    Node (int value1){
        value = value1;
        next = nullptr;
    }
};
Node* convertArrto2DLL(vector<int> &arr){
        Node* head = new Node(arr[0], nullptr);
        Node* prev = head;
        for(int i=1; i< arr.size(); i++){
            Node* temp = new Node(arr[i], nullptr);
            prev -> next = temp;
            prev = temp;

        }
        return head;
}

//brute force solution
int middleOfTheLL1(Node* head){
    if(head == NULL) return 0;

int cnt = 0;
Node* temp = head;
while(temp != NULL){
    cnt++;
    temp = temp-> next;
}
cnt = (cnt/2 + 1);
temp = head;
while(cnt > 1){
    temp = temp->next;
    cnt--;
}
    return temp->value;
}
 //time complexity = O(n+ n/2), space = O(1)

//tortoise and hare Algorithm
Node* middleOfTheLL2(Node* head){
    if(head == NULL) return 0;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast -> next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
 //time complexity = O(n/2), space = O(1)

void print(Node* head){
    while(head != NULL){
        cout << head-> value <<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
vector<int> arr = {4,7,22,8,1};
Node* head = convertArrto2DLL(arr);
print (head);

int mid1 = middleOfTheLL1(head);
cout<< "the value of middle node is" << mid1;

Node* mid2 = middleOfTheLL2(head);
cout<< "the value of middle node is" << mid2;

return 0;
}