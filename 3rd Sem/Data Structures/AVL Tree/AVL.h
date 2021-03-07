#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
}NODE;

void preordr(NODE *root)
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

int height(NODE *N)             // function to get the height of the tree
{
    if (N == NULL)
        return 0;
    return N->height;
}

int max(int a, int b)           // function to get maximum of two integers
{
    return (a > b) ? a : b;
}

NODE *Right_Rotation(NODE *y)
{
    NODE *x = y->left;
    NODE *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

NODE *Left_Rotation(NODE *x)
{
    NODE *y = x->right;
    NODE *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}

int getBalance(NODE *N)     // Get Balance factor of node N
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

NODE* insertBST(NODE *root, int val)
{
    int balance;
    if(root == NULL)
    {
        NODE *n = (NODE *)malloc(sizeof(NODE));
        n->data = val;
        n->left = NULL;
        n->right = NULL;
        n->height = 1;
        printf("\nNew Node inserted\n");
        return n;
    }
    else if(root->data > val)
        root->left = insertBST(root->left,val);

    else if(root->data < val)
        root->right = insertBST(root->right,val);

    else                                            // Equal values are not allowed in BST
        return root;

    root->height = 1 + max(height(root->left),height(root->right));      // Update height of node

    balance = getBalance(root);

    // LL Case
    if (balance > 1 && val < root->left->data)
        return Right_Rotation(root);

    // RR Case
    if (balance < -1 && val > root->right->data)
        return Left_Rotation(root);

    // LR Case
    if (balance > 1 && val > root->left->data)
    {
        root->left =  Left_Rotation(root->left);
        return Right_Rotation(root);
    }

    // RL Case
    if (balance < -1 && val < root->right->data)
    {
        root->right = Right_Rotation(root->right);
        return Left_Rotation(root);
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

NODE* deleteBST(NODE *root, int val)
{
    int preDec;
    NODE *temp;

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
    else                                                     // Case-3 - Both Child
    {
        preDec = getPreDec(root);
        root->data = preDec;
        root->left = deleteBST(root->left, preDec);
        return root;
    }

    if (root == NULL)
        return root;

    root->height = 1 + max(height(root->left),height(root->right));

    int balance = getBalance(root);

    // LL Case
    if (balance > 1 && getBalance(root->left) >= 0)
        return Right_Rotation(root);
        
    // RR Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return Left_Rotation(root);

    // LR Case
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left =  Left_Rotation(root->left);
        return Right_Rotation(root);
    }

    // RL Case
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = Right_Rotation(root->right);
        return Left_Rotation(root);
    }
    return root;
}