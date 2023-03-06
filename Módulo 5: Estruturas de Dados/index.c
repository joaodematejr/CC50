#include <cs50.h>
#include <stdio.h>

typedef struct name{
    int number; 
    struct node *next;
} node;

node *list; 
node * list = NULL;

node *n = malloc(node);
node *n = malloc(sizeof(node));

if (n != NULL)
{
    (*n).number = 1;
    (*n).next = NULL;
}

if (n != NULL)
{
    n->number = 1;
    n->next = NULL;
}

list = n;

list->next->next = n;

int main(void) {
   printf("Node*. \n");
}


// Path: Módulo 5: Estruturas de Dados/index.c
