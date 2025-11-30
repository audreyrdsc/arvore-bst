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

Node *search_node(Node *root, int value)
{
    if (!root)
        return NULL;
    if (value == root->key)
        return root;
    if (value < root->key)
        return search_node(root->left, value);
    return search_node(root->right, value);
}

Node *find_min(Node *root)
{
    while (root->left)
        root = root->left;
    return root;
}

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

void preorder(Node *root)
{
    if (!root)
        return;
    printf("%d ", root->key);
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    printf("%d ", root->key);
    inorder(root->right);
}

void postorder(Node *root)
{
    if (!root)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->key);
}

void free_tree(Node *root)
{
    if (!root)
        return;
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

void flush_stdin(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main(void)
{
    Node *root = NULL;
    int option, value, sub;

    while (1)
    {
        printf("\n1-Inserir\n2-Buscar\n3-Remover\n4-Percorrer\n0-Sair\nEscolha: ");
        if (scanf("%d", &option) != 1)
        {
            flush_stdin();
            continue;
        }

        if (option == 0)
        {
            free_tree(root);
            printf("Memória liberada. Encerrando.\n");
            break;
        }

        switch (option)
        {
        case 1:
            printf("Valor: ");
            scanf("%d", &value);
            root = insert_node(root, value);
            break;

        case 2:
            printf("Valor: ");
            scanf("%d", &value);
            printf(search_node(root, value) ? "Encontrado.\n" : "Não encontrado.\n");
            break;

        case 3:
            printf("Valor: ");
            scanf("%d", &value);
            root = remove_node(root, value);
            break;

        case 4:
            printf("1-Pre\n2-Em\n3-Pos\nEscolha: ");
            scanf("%d", &sub);
            if (sub == 1)
                preorder(root);
            else if (sub == 2)
                inorder(root);
            else if (sub == 3)
                postorder(root);
            printf("\n");
            break;

        default:
            printf("Opção inválida.\n");
        }
    }
    return 0;
}
