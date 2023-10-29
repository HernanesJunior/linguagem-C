#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void insert(struct Node** root, int data) {
    if (*root == NULL) {
        *root = newNode(data);
    } else {
        if (data < (*root)->data) {
            insert(&(*root)->left, data);
        } else if (data > (*root)->data) {
            insert(&(*root)->right, data);
        }
    }
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    int values[] = {30, 20, 40, 10, 25, 35, 50};

    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        insert(&root, values[i]);
    }

    printf("Inorder traversal of the tree: ");
    inorder(root);
    printf("\n");

    return 0;
}
