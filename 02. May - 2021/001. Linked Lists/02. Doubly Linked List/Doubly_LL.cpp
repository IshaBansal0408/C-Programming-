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
            new_node->next->prv = temp;
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
        }
        size_of_DLL+=1;
    }

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
    cout<<"Inserting in the end..."<<endl;
    DLL.insert_end(4);
    DLL.insert_end(5);
    DLL.insert_end(6);
    cout<<"The size of list is: "<<DLL.get_size()<<endl;
    cout<<"Printing the list..."<<endl;
    DLL.print_DLL();
}
