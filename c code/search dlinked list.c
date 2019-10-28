#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
}node;

node * createDoublelist(int n); //function to create list
void displaydoublelist(node * head);
int searchdlinkedlist(node * head, int x);
int main(){
     node *HEAD = NULL;  //list initially empty
    int n, x, searchresult;
    printf("Enter the size of the list: ");
    scanf("%d", &n);
    HEAD = createDoublelist(n);
    displaydoublelist(HEAD);

    /* Searching */

    printf("\n\n Enter the element to search: ");
    scanf("%d", &x);
    if((searchresult = searchdlinkedlist(HEAD, x)) > 0 && (searchresult = searchdlinkedlist(HEAD, x)) <= n){
        printf("Element found at position %d\n", searchresult);
    }else{
        printf("Element not found\n");
    }


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
int searchdlinkedlist(node * head, int x){
    int index=0;  //stores the position of the element being searched for
    if(head == NULL){  // checking if the list is empty
        exit(-1);  // exits the program if list is empty
    }else{
        node * p = head;  //initialize p to the head

          while(p != NULL){
            index++;  //increase index at each iteration
            if(p->data == x){
                break;  //break out of the loop if the element is found
            }
            p = p->next;  //keep moving to the next p
            }
    }
return index;  //return index as the position of the
}


