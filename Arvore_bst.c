#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
} Node;

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
