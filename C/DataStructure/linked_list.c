// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int value;
//     struct node *next;
// };

// typedef struct node list_node;

// void printLinked(list_node *head)
// {
//     list_node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d - ", temp->value);
//         temp = temp->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     list_node n1, n2, n3;
//     list_node *head;

//     n1.value = 23;
//     n2.value = 44;
//     n3.value = 55;

//     head = &n3;
//     n3.next = &n2;
//     n2.next = &n1;
//     n1.next = NULL;

//     printLinked(head);
//     return 0;
// }

// #include <stdio.h>

// struct node
// {
//     int value;
//     struct node *next;
// };

// typedef struct node list_node;

// void printList(list_node *head)
// {
//     list_node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d - ", temp->value);
//         temp = temp->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     list_node e1, e2, e3;
//     list_node *head;

//     e1.value = 12;
//     e2.value = 34;
//     e3.value = 55;

//     head = &e1;
//     e1.next = &e2;
//     e2.next = &e3;
//     e3.next = NULL;

//     printList(head);
// }

#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

typedef struct node list_node;

void printList(list_node *head)
{
    list_node *temp = head;
    while (temp != NULL)
    {
        printf("%d - ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    list_node n1, n2, n3;
    list_node *head;

    n1.value = 11;
    n2.value = 22;
    n3.value = 33;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    printList(head);
}