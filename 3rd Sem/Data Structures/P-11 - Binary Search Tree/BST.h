#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}NODE;

void preordr(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        preordr(root->left);
        preordr(root->right);
    }
}

void inordr(NODE *root)
{
    if(root != NULL)
    {
        inordr(root->left);
        printf("%d ",root->data);
        inordr(root->right);
    }
}

void postordr(NODE *root)
{
    if(root != NULL)
    {
        postordr(root->left);
        postordr(root->right);
        printf("%d ",root->data);
    }
}

NODE* insertBST(NODE *root, int val)
{
    if(root == NULL)
    {
        NODE* n = (NODE *)malloc(sizeof(NODE));
        n->data = val;
        n->left = NULL;
        n->right = NULL;
        printf("\nNew Node inserted\n");
        return n;
    }
    else if(root->data > val)
    {
        root->left = insertBST(root->left,val);
    }
    else if(root->data < val)
    {
        root->right = insertBST(root->right,val);
    }
    return root;
}

int getPreDec(NODE* root)
{
    NODE* tr = root->left;
    while(tr->right != NULL)
    {
        tr = tr->right;
    }
    return tr->data;
}

int getSucc(NODE* root)
{
    NODE* tr = root->right;
    while(tr->left != NULL)
    {
        tr = tr->left;
    }
    return tr->data;
}

NODE* deleteBST(NODE *root, int val)
{
   NODE* temp; 
   int preDec, Succ; 
   if(root == NULL)
       printf("\nValue not found..!\n");

   else if (root->data > val)
       root->left = deleteBST(root->left, val);

   else if (root->data < val)
       root->right = deleteBST(root->right, val);

   else if(root->left == NULL && root->right == NULL)       // Case-1 - No Child
        {
            free(root);
            printf("\nValue Deleted.!\n");
            return NULL;
        }
   else if (root->right == NULL)                            // Case-2 - Any One Child (Right or Left)
        {
            temp = root->left;
            free(root);
            printf("\nValue Deleted.!\n");
            return temp;
        }
   else if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            printf("\nValue Deleted.!\n");
            return temp;
        }
   else if (root->left != NULL && root->right != NULL)     // Case-3 - Both Child
        {
            preDec = getPreDec(root);
            root->data = preDec;
            root->left = deleteBST(root->left, preDec);
            return root;

        /*  Succ = getSucc(root);
            root->data = Succ;
            root->right = deleteBST(root->right, Succ);
            return root;    */
        }
    return root;
}