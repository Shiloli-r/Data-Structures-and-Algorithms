#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
}node;

node * createDoublelist(int n); //function to create list
void displaydoublelist(node * head);
int main(){
     node *HEAD = NULL;  //list initially empty
    int n;
    printf("Enter the size of the list: ");
    scanf("%d", &n);
    HEAD = createDoublelist(n);
    displaydoublelist(HEAD);

return 0;
}
node * createDoublelist(int n){
    node * q = NULL;    // will be the new node to be created
    node * p = NULL;    // will be the trailing pointer
    node * head = NULL; //head of the list, which will be returned

    for(int i=0; i<n; i++){
        q = (node*)malloc(sizeof(node));
        q->next = NULL;

        printf("Enter element %d: ", i+1);
        scanf("%d",&(q->data));

        if(head == NULL){
            head  = q;
            q->prev = NULL;
        }else{
            p = head;
            while( p->next != NULL){
                p = p->next;
            }
            p->next = q; //link p to the right link of q
            q->prev = p; //link q to the left link of p
        }
    }

return head;
}

void displaydoublelist(node * head){
    node * p = head;
    while(p != NULL){
        printf("%d <-> ",p->data);
        p= p->next;
    }
}


