#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
} Node;


/* Remoção com 3 casos:
   1. Nó folha
   2. Nó com 1 filho
   3. Nó com 2 filhos (usa sucessor in-order) */
Node *remove_node(Node *root, int value)
{
    if (!root)
        return NULL;

    if (value < root->key)
        root->left = remove_node(root->left, value);

    else if (value > root->key)
        root->right = remove_node(root->right, value);

    else
    {
        if (!root->left && !root->right) 
        {
            free(root);
            return NULL;
        }
        else if (!root->left || !root->right)
        {
            Node *child = (root->left) ? root->left : root->right;
            free(root);
            return child;
        }
        else
        {
            Node *succ = find_min(root->right);
            root->key = succ->key;
            root->right = remove_node(root->right, succ->key);
        }
    }
    return root;
}