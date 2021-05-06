#include <iostream>
using namespace std;

// To handle individual nodes
class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            next = NULL;
        }
};
// The class will return a node which looks something like this: |d|NULL|

// To handle the linked list
class Linked_List{
    private:
        Node* header;
        Node* tail;
        int size_of_LL;
    public:
        //constructing the Linked List
        Linked_List(){
            header = NULL;
            tail = NULL;
            size_of_LL = 0;
        }
        //Get the current size of the Linked list
        int get_size(){
            return size_of_LL;
        }
        // Adding a new node in the end
        void add_end(int data){
            // 1. Create the new node
            Node* new_node = new Node(data);
            // 2. Case 1 : If list is Empty
            if(header == NULL){
                header = new_node;
                tail = new_node;
            }
            // 3. Case 2 : If List is Not Empty
            else{
                tail -> next = new_node;
                tail = new_node;
            }
            // 4. Increase the size of the list
            size_of_LL+=1;
        }
        // Adding a new node in the start
        void add_start(int data){
            // 1. Create the new node
            Node* new_node = new Node(data);
            // 2. Case 1 : List is Empty
            if(header == NULL){
                header = new_node;
                tail = new_node;
            }
            // 3. Case 2 : List is Not Empty
            else{
                new_node -> next = header;
                header = new_node;
            }
            // 4. Increment the size of the List
            size_of_LL+=1;
        }
        // Printing our linked list
        void display_LL(){
            // 1. Create a temp pointer - pointing to first node
            Node* temp = header;
            // 2. Creating loop to print until we reach NULL
            while(temp != NULL){
                // 3. Print Data
                cout<<temp->data<<" ";
                // 4. Advance the pointer to the next node
                temp = temp -> next;
            }
            cout<<endl;
        }
        // Adding Node at a certain position
        void add_kth(int data,int k){
            if(k<1){
                return;
            }
            else if(k==1){
                add_start(data);
            }
            else if(k==size_of_LL+1){
                add_end(data);
            }
            else{
                Node* new_node = new Node(data);
                Node* temp = header;
                int i=1;
                while(i+1!=k){
                    temp = temp -> next;
                    i+=1;
                }
                new_node -> next = temp -> next;
                temp -> next = new_node;
                size_of_LL+=1;
            }
        }
};

int main(){
    Linked_List LL;
    LL.add_start(3);
    LL.add_end(23);
    LL.add_start(10);
    LL.add_end(34);
    LL.add_start(56);
    cout<<"The size of my Linked list is : "<<LL.get_size();
    cout<<endl;
    cout<<"My Linked List is: ";
    LL.display_LL();

    cout<<"Insert at kth"; int k; cin>>k;
    LL.add_kth(300,k);
    cout<<"The size of my Linked list is : "<<LL.get_size();
    cout<<endl;
    cout<<"My Linked List is: ";
    LL.display_LL();

    return 0;
}
