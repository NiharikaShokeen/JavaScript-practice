/* convert array into LinkedList*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node*  prev;

    Node(int value1, Node* next1, Node* prev1){
        value = value1;
        next = next1;
        prev = prev1;
    }
    Node (int value1){
        value = value1;
        next = nullptr;
        prev = nullptr;
    }
};
Node* convertArrto2DLL(vector<int> &arr){
        Node* head = new Node(arr[0], nullptr, nullptr);
        Node* prev = head;
        for(int i=1; i< arr.size(); i++){
            Node* temp = new Node(arr[i], nullptr, prev);
            prev -> next = temp;
            prev = temp;

        }
        return head;
}

Node* deleteHead(Node* head){
    if(head == NULL) return NULL;
    if(head-> next == NULL) {
        delete head;
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;

    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL ) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* temp = head;
    //go to the last node
    while(temp->next != NULL){
        temp = temp-> next;
    }
    Node* prevNode = temp->prev;
    prevNode->next = NULL;
    temp->prev = NULL;
    delete temp;
    
    return head;
}

Node* dltKthElement(Node* head, int k){
    if(head == NULL) return NULL;
    
    Node* temp = head;
    int cnt =0;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }

    //if k> length of DLL
    if(temp == NULL) return head;
    Node* back = temp->prev;
    Node* nextptr = temp->next;
    
    //only one node
    if(back == NULL && nextptr == NULL){
        delete temp;
        return NULL;
    }
    else if(back == NULL){
        return deleteHead(head);
    }
    else if(nextptr == NULL){
        return deleteTail(head);
    }

    //middle node
    back->next = temp->next;
    nextptr->prev = temp->prev;

    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
 
    return head;
}

Node* insertNodeAtHead(Node* head, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        return temp;
    }
    temp->next = head;
    head->prev = temp;
    return temp;
}

Node* insertBeforeTail(Node* head, int data){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        return insertNodeAtHead(head, data);
    }
    Node* tail = head;
    while(tail-> next != NULL){
        tail = tail->next;
    }
    Node* back = tail->prev;

    Node* newNode = new Node(data, tail, back);

    newNode->prev = back;
    newNode->next = tail->prev;

    return head;
}

Node* insertBeforeTheKthElement(Node* head,int data, int k){
    if(head == NULL) return NULL;
    int cnt=0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    if(temp == NULL) return head;
    
    if(temp->prev == NULL){
        return insertNodeAtHead(head,data);
    }
    
    Node* back = temp->prev;
    Node* newNode = new Node(data);

    newNode->prev = back;
    newNode->next = temp;
    back->next = newNode;
    temp->prev = newNode;
    return head;
}

void insertBeforeNode(Node* node, int data){
    Node* back = node->prev;
    Node* newNode = new Node(data, node, back);
    back->next = newNode;
    node->prev = newNode;
}

Node* reverseLL1(Node* head){        //time complexity = O(n) , space = O(n)
    stack<int> st;
    Node* temp = head;
    while(temp != NULL){
        st.push(temp->value);
        temp = temp->next;
    }
    while(temp != NULL){
        temp->value = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;

}
Node* reverseLL2(Node* head){        //time complexity = O(n),  space = O(1)
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* current = head;
    Node* back = NULL;

    while(current != NULL){
        back = current->prev;
        current->prev = current->next;
        current->next = back;

        current = current->prev;
    }
    return back->prev;
}

void print(Node* head){
    while(head != NULL){
        cout << head-> value <<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    vector<int> arr= {3,7,1,9,66};
    Node* head = convertArrto2DLL(arr);
    cout<< "Original list: ";
    print(head);

    head = deleteHead(head);

    cout<<"after deleting head: ";
    print(head);

    insertBeforeNode(head->next , 100);
    print(head);

    insertBeforeTheKthElement(head,67,3);
    print(head);

    Node* newHead = reverseLL2(head);
    print(newHead);

    return 0;
}
