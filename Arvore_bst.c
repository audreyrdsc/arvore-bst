#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
} Node;

Node *create_node(int value)
{
    Node *n = malloc(sizeof(Node));
    n->key = value;
    n->left = n->right = NULL;
    return n;
}

Node *insert_node(Node *root, int value)
{
    if (root == NULL)
        return create_node(value);

    if (value < root->key)
        root->left = insert_node(root->left, value);
    else if (value > root->key)
        root->right = insert_node(root->right, value);
    else
        printf("Valor %d já existe. Inserção ignorada.\n", value);

    return root;
}