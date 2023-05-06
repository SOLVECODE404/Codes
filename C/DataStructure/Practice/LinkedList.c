#include<stdio.h>


struct node {
    int value;
    struct node *next;
}

typedef struct node list_node;

int main(){
    list_node n1, n2, n3;
    list_node *head;

    n1.value = 11;
    n2.value = 22;
    n3.value = 33;


    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

}

