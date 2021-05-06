#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            next = NULL;
        }
};
class Linked_List{
    private:
        Node* header;
        Node* tail;
        int size_of_LL;
    public:
        Linked_List(){
            header = NULL;
            tail = NULL;
            size_of_LL = 0;
        }
        int get_size(){
            return size_of_LL;
        }
        void add_end(int data){
            Node* new_node = new Node(data);
            if(header == NULL){
                header = new_node;
                tail = new_node;
            }
            else{
                tail -> next = new_node;
                tail = new_node;
            }
            size_of_LL+=1;
        }
        void add_start(int data){
            Node* new_node = new Node(data);
            if(header == NULL){
                header = new_node;
                tail = new_node;
            }
            else{
                new_node -> next = header;
                header = new_node;
            }
            size_of_LL+=1;
        }
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
        void display_LL(){
            Node* temp = header;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp -> next;
            }
            cout<<endl;
        }
        void delete_start(){
            if(header == NULL){
                return;
            }
            else{
                Node* temp = header;
                header = header -> next;
                delete temp;
                size_of_LL-=1;
            }
        }
        void delete_end(){
            if(header == NULL){
                return;
            }
            else if (header -> next = NULL){
                delete_start();
            }
            else{
                Node* temp = header;
                while(temp -> next -> next != NULL){
                    temp = temp -> next;
                }
                delete temp->next;
                temp -> next = NULL;
                size_of_LL-=1;
            }
        }
        void delete_kth(int k){
            if(k<1 || k>size_of_LL){
                return;
            }
            else if(k==1){
                delete_start();
            }
            else if(k==size_of_LL){
                delete_end();
            }
            else{
                Node* temp = header;
                Node* prev;
                int i = 1;
                while(temp!=NULL){
                    if(i==k){
                        prev -> next = temp -> next;
                        delete temp;
                        size_of_LL-=1;
                        return;
                    }
                    prev = temp;
                    temp = temp -> next;
                    i+=1;
                }
            }
        }

        // DESTRUCTOR
        ~Linked_List(){
            Node* temp;
            while(header != NULL){
                    temp = header -> next;
                    delete header;
                    header = temp;
            }
            size_of_LL=0;
        }
};

int main(){
    Linked_List LL;
    LL.add_start(1);
    LL.add_end(2);
    LL.add_start(3);
    LL.add_start(4);
    LL.add_end(5);
    LL.add_start(6);
    cout<<"The size of the linked list is: "<<LL.get_size()<<endl;
    cout<<"My Linked List is: ";
    LL.display_LL();
    LL.~Linked_List();
    cout<<"The size of the linked list is: "<<LL.get_size()<<endl;
    cout<<"My Linked List is: ";
    LL.display_LL();
}

