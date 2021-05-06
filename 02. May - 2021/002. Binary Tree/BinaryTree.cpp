#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left = NULL;
        right = NULL;
    }
};

class Binary_Search_Tree{
private:
    Node* root;
public:
    Binary_Search_Tree(){
        root = NULL;
    }

    void insert_data_recursive_method(int data,Node* &root){
        if(root==NULL){
            root = new Node(data);
        }
        else if(data > root-> data){
            // MOVE RIGHT
            if(root -> right != NULL ){
                insert_data_recursive_method(data,root->right);
            }
            else{
                root -> right = new Node(data);
            }

        }
        else if(data < root -> data){
            // MOVE LEFT
            if(root -> left != NULL ){
                insert_data_recursive_method(data,root->left);
            }
            else{
                root -> left = new Node(data);
            }
        }
    }
    void insert_data(int data){
        insert_data_recursive_method(data,root);

    }
    void print_data_pre_recursive(Node* &root){
        if(root == NULL){
            cout<<root -> data;
        }
        print_data_pre_recursive(root->left);
        print_data_pre_recursive(root->right);
    }
    void print_data_pre(){
        if(root == NULL){
            return;
        }
        else{
            print_data_pre_recursive(root);
        }
    }
};

int main(){
    Binary_Search_Tree BST;
    int arr[15] = {25,37,28,16,7,44,23,31,47,17,26,24,11,1,38};
    for(int i=0;i<14;i++){
        BST.insert_data(arr[i]);
    }
    BST.print_data_pre();
}
