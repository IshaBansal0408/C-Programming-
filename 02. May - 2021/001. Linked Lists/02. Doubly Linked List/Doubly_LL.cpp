#include<iostream>
using namespace std;

class Node{
public:
    Node* prv;
    int data;
    Node* next;

    Node(int data){
        prv = NULL;
        this -> data = data;
        next = NULL;
    }
};

class Doubly_Linked_List{
private:
    Node* header;
    Node* tail;
    int size_of_DLL;
public:

    // Constructor
    Doubly_Linked_List(){
        header = NULL;
        tail = NULL;
        size_of_DLL = 0;
    }

    // Insert at the start
    void insert_start(int data){
        Node* new_node = new Node(data);
        if(header == NULL){
            header = new_node;
            tail = new_node;
        }
        else{
            Node* temp = header;
            header = new_node;
            new_node->next = temp;
            new_node -> prv = NULL;
            temp->prv = new_node;
        }
        size_of_DLL+=1;
    }

    // Insert at the end
    void insert_end(int data){
        Node* new_node = new Node(data);
        if(header == NULL){
            header = new_node;
            tail = new_node;
        }
        else{
            Node* temp = header;
            while(temp->next!=NULL){
                    temp = temp -> next;
            }
            temp -> next = new_node;
            new_node -> prv = temp;
            new_node -> next = NULL;
            tail = new_node;
        }
        size_of_DLL+=1;
    }

    // Insert at kth position
    void insert_at_k(int data,int k){
        if(k<1 || k>size_of_DLL+1){
            return;
        }
        else if(k==1){
            insert_start(data);
        }
        else if(k==size_of_DLL+1){
            insert_end(data);
        }
        else{
            int i = 1;
            Node* new_node = new Node(data);
            Node* temp = header;
            while(i+1!=k){
                temp = temp -> next;
                i+=1;
            }
            temp->next->prv = new_node;
            new_node -> next = temp -> next;
            temp -> next = new_node;
            new_node -> prv = temp;
            size_of_DLL+=1;
        }
    }

    // Get size of the list
    int get_size(){
        return size_of_DLL;
    }

    // Print the Linked List
    void print_DLL(){
        Node* temp = header;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }

    // Print in reverse
    void print_DLL_rev(){
        Node* temp = tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp -> prv;
        }
        cout<<endl;
    }
};

int main(){
    Doubly_Linked_List DLL;
    cout<<"Inserting in the start..."<<endl;
    DLL.insert_start(3);
    DLL.insert_start(2);
    DLL.insert_start(1);
    cout<<"The size of list is: "<<DLL.get_size()<<endl;
    cout<<"Printing the list..."<<endl;
    DLL.print_DLL();
    cout<<"Printing the list in reverse..."<<endl;
    DLL.print_DLL_rev();
    cout<<"Inserting in the end..."<<endl;
    DLL.insert_end(4);
    DLL.insert_end(5);
    DLL.insert_end(6);
    cout<<"The size of list is: "<<DLL.get_size()<<endl;
    cout<<"Printing the list..."<<endl;
    DLL.print_DLL();
    cout<<"Printing the list in reverse..."<<endl;
    DLL.print_DLL_rev();

    cout<<"Inserting at nth place...."<<endl;
    int n;

    cin>>n;
    DLL.insert_at_k(200,n);
    cout<<"The size of list is: "<<DLL.get_size()<<endl;
    cout<<"Printing the list..."<<endl;
    DLL.print_DLL();

    cin>>n;
    DLL.insert_at_k(20,n);
    cout<<"The size of list is: "<<DLL.get_size()<<endl;
    cout<<"Printing the list..."<<endl;
    DLL.print_DLL();

    cin>>n;
    DLL.insert_at_k(0,n);
    cout<<"The size of list is: "<<DLL.get_size()<<endl;
    cout<<"Printing the list..."<<endl;
    DLL.print_DLL();
}
