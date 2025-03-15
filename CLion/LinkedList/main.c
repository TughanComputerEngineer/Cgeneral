#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
typedef struct Node LLNode;
typedef LLNode* LLNodePtr;

LLNode CreateNode();
LLNodePtr FindLastNode(LLNodePtr node);
void AddNewNode(LLNodePtr node, int data);
void AddNewNodes(LLNodePtr node, int data[], int n, int length);
void PrintNextStep(LLNodePtr node, int n);
void PrintPreviousStep(LLNodePtr node, int n);
void PrintAllNextStep(LLNodePtr node);
void PrintAllPreviousStep(LLNodePtr node);
void DeleteNode(LLNodePtr node);
void DeleteNthNode(LLNodePtr node, int n);

int main(void) {
    LLNode LL1 = CreateNode();
    LL1.data = 17;
    printf("\n");
    PrintNextStep(&LL1,1);
    printf("\n");
    AddNewNode(&LL1,26);
    printf("\n");
    PrintNextStep(&LL1,5);
    printf("\n");
    int data[5] = {7,15,34,19,47};
    int length = sizeof(data)/sizeof(data[0]);
    AddNewNodes(&LL1,data,8,length);
    printf("\n");
    AddNewNodes(&LL1,data,5,length);
    printf("\n");
    PrintAllNextStep(&LL1);
    printf("\n");
    AddNewNode(&LL1,100);
    printf("\n");
    PrintAllPreviousStep(FindLastNode(&LL1));
    printf("\n");
    DeleteNode(LL1.next->next);
    printf("\n");
    PrintPreviousStep(FindLastNode(&LL1),10);
    printf("\n");
    DeleteNthNode(&LL1,4);
    printf("\n");
    PrintAllNextStep(&LL1);
    printf("\n");
    DeleteNthNode(&LL1,12);
    printf("\n");
    PrintPreviousStep(FindLastNode(&LL1),6);
    return 0;
}
LLNode CreateNode() {
    LLNode newNode;
    newNode.data = 0;
    newNode.next = NULL;
    newNode.prev = NULL;
    return newNode;
}
LLNodePtr FindLastNode(LLNodePtr node) {
    while (node->next != NULL) {
        node = node->next;
    }
    return node;
}
void AddNewNode(LLNodePtr node, int data) {
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = (LLNodePtr) malloc(sizeof(LLNode));
    node->next->data = data;
    node->next->next = NULL;
    node->next->prev = node;
    printf("New node added successfully. \n");
}
void AddNewNodes(LLNodePtr node, int data[], int n, int length) { //NOLINT
    if (length == n) {
        while (node->next != NULL) {
            node = node->next;
        }
        for (int i = 0; i < n; i++) {
            node->next = (LLNodePtr) malloc(sizeof(LLNode));
            node->next->data = data[i];
            node->next->next = NULL;
            node->next->prev = node;
            node = node->next;
        }
        printf("New nodes added successfully. \n");
    }
    else {
        printf("Data length and n are different! They must be same.\n");
    }
}
void PrintNextStep(LLNodePtr node, int n) {
    for (int i = 0; i < n; i++) {
        if (node != NULL) {
            printf("Node %d value: %d \n", i, node->data);
            node = node->next;
        }
        else {
            printf("No next node %d in linked list! Linked list ended. \n", i);
        }
    }
}
void PrintPreviousStep(LLNodePtr node, int n) {
    for (int i = 0; i < n; i++) {
        if (node != NULL) {
            printf("Node %d value: %d \n", i, node->data);
            node = node->prev;
        }
        else {
            printf("No previous node %d in linked list! Linked list ended. \n", i);
        }
    }
}
void PrintAllNextStep(LLNodePtr node) {
    int count = 0;
    while (node != NULL) {
        printf("Node %d next value: %d \n", count, node->data);
        node = node->next;
        count++;
    }
}
void PrintAllPreviousStep(LLNodePtr node) {
    int count = 0;
    while (node != NULL) {
        printf("Node %d previous value: %d \n", count, node->data);
        node = node->prev;
        count++;
    }
}
void DeleteNode(LLNodePtr node) {
    if (node != NULL) {
        LLNodePtr prev = node->prev;
        LLNodePtr next = node->next;
        if (prev != NULL) {
            node->prev->next = next;
        }
        if (next != NULL) {
            node->next->prev = prev;
        }
        free(node);
        printf("Node deleted successfully. \n");
    }
    else {
        printf("Node not exists in linked list. Delete failed. \n");
    }
}
void DeleteNthNode(LLNodePtr node, int n) {
    bool IsNodeExists = true;
    for (int i = 0; i < n; i++) {
        if (node != NULL) {
            node = node->next;
        }
        else {
            IsNodeExists = false;
        }
    }
    if (IsNodeExists) {
        DeleteNode(node);
    }
    else {
        printf("Node not exists in linked list. Delete failed. \n");
    }
}