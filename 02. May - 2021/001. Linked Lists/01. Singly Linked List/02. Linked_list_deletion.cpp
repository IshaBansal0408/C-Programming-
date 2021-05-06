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

        // DELETE FROM START
        void delete_start(){
            // 1. Empty linked List
            if(header == NULL){
                return;
            }
            // 2. Non-Empty Linked List
            else{
                Node* temp = header;
                header = header -> next;
                // free up the dynamic memory allocated
                delete temp;
                //decrement the size
                size_of_LL-=1;
            }
        }

        // DELETE FROM END
        void delete_end(){
            // 1. Empty Linked List
            if(header == NULL){
                return;
            }

            // 2. Only one Node
            else if (header -> next = NULL){
                delete_start();
            }
            // 3. More than one Node
            else{
                Node* temp = header;
                while(temp -> next -> next != NULL){
                    temp = temp -> next;
                }

                delete temp->next;
                temp -> next = NULL;
                //decrement the size
                size_of_LL-=1;
            }
        }

        // DELETE FROM kth POSITION
        void delete_kth(int k){
            // Invalid position
            if(k<1 || k>size_of_LL){
                return;
            }
            // First node
            else if(k==1){
                delete_start();
            }
            // Last Node
            else if(k==size_of_LL){
                delete_end();
            }
            // kth Node
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

    cout<<"Delete first node!"<<endl; LL.delete_start();
    cout<<"The size of the linked list is: "<<LL.get_size()<<endl;
    cout<<"My new Linked List is: ";
    LL.display_LL();

    cout<<"Delete kth node!"<<endl;
    int k;cin>>k;
    LL.delete_kth(k);
    cout<<"The size of the linked list is: "<<LL.get_size()<<endl;
    cout<<"My new Linked List is: ";
    LL.display_LL();

    cout<<"Delete end node!"<<endl; LL.delete_end();
    cout<<"The size of the linked list is: "<<LL.get_size()<<endl;
    cout<<"My new Linked List is: ";
    LL.display_LL();
    return 0;
}

