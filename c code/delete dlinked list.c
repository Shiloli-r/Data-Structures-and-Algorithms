#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
}node;
void displaydoublelist(node * head);

int main(){
    node *HEAD = NULL;
     int n = 8;
    int numbers[8] = {8, 5, 7, 3, 4, 1, 2, 9};


    node * q = NULL;    // will be the new node to be created
    node * p = NULL;    // will be the trailing pointer
    for(int i=0;i<n;i++){
       q = (node*)malloc(sizeof(node));
        q->next = NULL;

       q->data = numbers[i];

        if(HEAD == NULL){
            HEAD  = q;
            q->prev = NULL;
        }else{
            p = HEAD;
            while( p->next != NULL){
                p = p->next;
            }
            p->next = q; //link p to the right link of q
            q->prev = p; //link q to the left link of p
        }
    }

    printf("Double Linked List: ");
    displaydoublelist(HEAD);
    printf("\n\n");

    /* DELETION */
    int x;
    printf("Enter the element to delete: ");
    scanf("%d", &x);
    p = HEAD;
    while(p != NULL){
            if(p->data == x){
                (p->prev)->next = p->next; //reassigning the right link
                (p->next)->prev = p->prev; //reassigning the left link
            }
            p = p->next;  //keep moving to the next p
            }
    printf("\n New Double Linked list: ");
    displaydoublelist(HEAD);
    printf("\n");

}

void displaydoublelist(node * head){
    node * p = head;
    while(p != NULL){
        printf("%d <-> ",p->data);
        p= p->next;
    }
}
