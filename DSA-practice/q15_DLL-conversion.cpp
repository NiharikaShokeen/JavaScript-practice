/* convert array into LinkedList*/

#include<iostream>
#include<vector>
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
    print(head);
    return 0;
}
