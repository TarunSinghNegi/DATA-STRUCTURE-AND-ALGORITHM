#include <stdio.h>
#include <stdlib.h>
struct bstnode
{
    struct bstnode *left;
    int data;
    struct bstnode *right;
};

struct bstnode *insert(struct bstnode *root, int data)
{
    struct bstnode *par;
    struct bstnode *t =(struct bstnode*)malloc(sizeof(struct bstnode));
    t->left = NULL;
    t->data = data;
    t->right = NULL;

    if (root == NULL)
        root = t;

    else
    {
        par = root;
        while (par != NULL)
        {
            if (par->data > data)
            {
                if (par->left == NULL)
                {
                    par->left = t;
                }
                par = par->left;
            }

            else if (par->data < data)
            {
                if (par->right == NULL)
                {
                    par->right = t;
                }
                par = par->right;
            }
        }
                return root;
    }
  
    printf(" tuhyg %d\n",root->data);
    //printf(" tuhyg %d\n",root->left->data);
}

// struct bstnode* find(struct bstnode *root,int data)
// {
//     if(root==NULL)
//     {
//         printf("BHAI KUCH NI H YHA\n");
//         return 0;
//     }
//     if(data>root->data)
//     {
//         find(root->right,data);
//     }
//     else if(data<root->data)
//     {
//         find(root->left,data);
//     }
     
//     return (root);
// }

void inorder(struct bstnode* root)
{
    if(root!=NULL){
    
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}

// void preorder(struct bstnode* root)
// {

// }

int main()
{
    struct bstnode *root=NULL;

    insert(root,56);
    insert(root,34);
    insert(root,78);
    insert(root,23);
    //inorder(root);
    // find(root,13);
 }