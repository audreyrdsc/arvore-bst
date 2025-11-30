# 👩‍🏫 Curso

* Universidade Federal do Amapá
* Ciência da Computação
* Programação II
* Professor Júlio Cezar Costa Furtado

# 👨‍💻👨‍💻 Autores
* [Audrey Regison dos Santos Cardoso](mailto:audreyrdsc@gmail.com)
* [João Alexandre Silva do Amaral](mailto:joaoamaral836@gmail.com)
* [Lucas Santos Pimentel](mailto:lucaspimentel808@gmail.com)
* [Vinícius Santos Aquino Guedes](mailto:aquino.guedes03@gmail.com)

---

# 🧩 Projeto – Estruturas de Dados 

## Árvore Binária de Busca (BST) em C

Projeto: Implementação de uma Árvore de Busca Binária (Binary Search Tree – BST) utilizando linguagem C e alocação dinâmica, atendendo aos requisitos da disciplina. O programa inclui as seguintes funcionalidades:

-Inserção de valores inteiros na árvore.
-Busca de valores.
-Remoção de nós com os três casos clássicos:
1-Nó folha
2-Nó com um filho
3-Nó com dois filhos (usando sucessor in-order)
-Percursos: pré-ordem, em ordem e pós-ordem.
-Menu interativo controlado por switch-case.
-Liberação total da memória ao encerrar o programa.

## Observações
Valores duplicados são ignorados durante a inserção e isso está documentado no código.
-Todas as operações principais da BST estão implementadas como funções separadas.
-Os percursos da árvore são exibidos no terminal.
-A árvore é completamente liberada da memória no final da execução.

# 📁 Organização do Repositório

A estrutura deste repositório foi organizada para manter clareza, controle de versão e rastreabilidade entre os códigos implementados.  

Cada exercício/código solicitado pelo professor está em uma **branch própria**, enquanto a **branch `main` contém o código final consolidado**.

---

# 🌿 Branches do Projeto

┌───────────────────────────────────────────────────────────────┐
│                        BRANCHES DO PROJETO                    │
├───────────────────────┬───────────────────────────────────────┤
│ Inserção              │ Implementa a lógica de inserção na    │
│                       │ BST, incluindo o tratamento para      │
│                       │ valores duplicados.                   │
├───────────────────────┼───────────────────────────────────────┤
│ Busca                 │ Função responsável por localizar um   │
│                       │ valor na árvore utilizando busca      │
│                       │ recursiva.                            │
├───────────────────────┼───────────────────────────────────────┤
│ Remocao               │ Implementa os três casos clássicos de │
│                       │ remoção: nó folha, nó com um filho e  │
│                       │ nó com dois filhos (usando sucessor   │
│                       │ in-order).                            │
├───────────────────────┼───────────────────────────────────────┤
│ Percursos             │ Contém os percursos pré-ordem, em     │
│                       │ ordem e pós-ordem, cada um como uma   │
│                       │ função separada.                      │
├───────────────────────┼───────────────────────────────────────┤
│ Menu-interativo       │ Implementa o menu principal e o       │
│                       │ submenu de percursos usando           │
│                       │ estruturas switch-case.               │
├───────────────────────┼───────────────────────────────────────┤
│ Main                  │ Branch consolidada contendo o código  │
│                       │ final e completamente funcional da    │
│                       │ Árvore de Busca Binária (BST).        │
└───────────────────────┴───────────────────────────────────────┘

---

# 🧠 Tecnologias Utilizadas
- Linguagem **C**
- Git e GitHub para controle de versão
- Estruturas de dados com árvores binárias de busca (BST)

## Compilação
Windows/Linux/macOS

---

# 🚀 Como Executar

1. Clone o repositório:
   ```sh
   git clone https://github.com/audreyrdsc/arvore-bst.git