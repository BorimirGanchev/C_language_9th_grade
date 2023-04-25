#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char* firstname;
    struct Node* father;
    struct Node* mother;
    struct Node* marriedto;
} Node;

Node* createNode(char* firstname, Node* father, Node* mother, Node* marriedto) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->firstname = firstname;
    node->father = father;
    node->mother = mother;
    node->marriedto = marriedto;
    return node;
}

int main() {
    Node* root = createNode("grandpa Stoqn", NULL, NULL, createNode("grandma Pepi", NULL, NULL, NULL));

    Node* child1 = createNode("Krasimir", root, NULL, createNode("Anna", NULL, NULL, NULL));
    Node* child2 = createNode("Neli", root, NULL, createNode("Ivan", NULL, NULL, NULL));

    Node* grandchild1 = createNode("Borimir", child1, NULL, NULL);
    Node* grandchild2 = createNode("Plamena", child1, NULL, NULL);
    Node* grandchild3 = createNode("Alexander", child2, NULL, NULL);
    Node* grandchild4 = createNode("Ivo", child2, NULL, NULL);

    printf("%s %s\n", root->firstname, root->marriedto->firstname);
    printf("    %s %s\n", child1->firstname, child1->marriedto->firstname);
    printf("        %s\n", grandchild1->firstname);
    printf("        %s\n", grandchild2->firstname);
    printf("    %s %s\n", child2->firstname, child2->marriedto->firstname);
    printf("        %s\n", grandchild3->firstname);
    printf("        %s\n", grandchild4->firstname);

    free(root);
    free(child1);
    free(child2);
    free(grandchild1);
    free(grandchild2);
    free(grandchild3);
    free(grandchild4);

    return 0;
}
