#include <iostream>

using namespace std;

struct BSTnode
{
    int data;
    BSTnode* left;
    BSTnode* right;

};
BSTnode* getNewNode(int data)
{
    BSTnode* Newnode = new BSTnode();
    Newnode -> left = Newnode -> right = NULL;
    NewNode -> data = data;
    return Newnode;
}
BSTnode* insertNode(BSTnode* root, int data)
{
    if(root == NULL)
    {
        root = getNewNode(int data);
    }
    else
    {
        if(data <= root -> data)
        {
            root -> left = insertNode(root -> left,data);
        }
        else
        {
            root ->right = insertNode(root -> right, data);


        }
    }
    return root;

}


int main()
{
    BSTnode* root = NULL;
    root = insertNode(root, 12);
    root = insertNode(root, 5);
    root = insertNode(root, 20);
    return 0;
}
