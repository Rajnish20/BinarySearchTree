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
    Newnode -> data = data;
    return Newnode;
}
BSTnode* insertNode(BSTnode* root, int data)
{
    if(root == NULL)
    {
        root = getNewNode(data);
    }
    else if(data <= root -> data)
        {
            root -> left = insertNode(root -> left,data);
        }
        else
        {
            root ->right = insertNode(root -> right, data);


        }
    return root;

}
bool search(BSTnode* root, int data)
{
    if(root == NULL)
    {
        return false;
    }
    else
    {
        if(data == root -> data)
        {
            return true;
        }
        else
        {
            if(data <= root -> data)
            {
                return search(root -> left, data);
            }
            else
            {
                return search(root -> right, data);
            }
        }
    }
}


int main()
{
    int n;
    BSTnode* root = NULL;
    root = insertNode(root, 12);
    root = insertNode(root, 5);
    root = insertNode(root, 20);
    root = insertNode(root, 25);
    root = insertNode(root, 1);
    root = insertNode(root, 10);
    cout<<"Enter the no to be searched";
    cin>>n;
    if(search(root,n) == true)
    {
        cout<<"Number found";
    }
    else
    {
        cout<<"Not found";
    }

    return 0;
}
