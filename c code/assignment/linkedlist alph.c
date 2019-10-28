#include <stdio.h>
#include <stdlib.h>

    /** P15/130332/2018 **/

/** Time complexities at the bottom**/
/** Algorithm
    1. store given characters in an array
    2. arrange the array above in alphabetical order, by comparing one letter
       to all others. If the letter is greater than the letter after it, swap the two letters
        This will put all the letters in alphabetical order
    3. Create a defined structure data type (with data and *next) and call it node
    4. create a new node by allocating memory to it, and then assign data to it and link its
        data field to the next node
    5. Repeat 4 until all the elements have been stored

    => That's algorithm for first part (i)
 */
typedef struct node{
    char data;
    struct node *next;
} node;
void display(node * head);


typedef struct dnode{
    char data;
    struct dnode *next;
    struct dnode *prev;
} dnode;
void displaydoublelist(dnode * head);

int main(){
    char elements[] = {'m', 't', 'k', 'd', 'f' };
    for(int i=0; i<5; i++){
        printf(" %c ",elements[i]);
    }
    printf("\n");

    char alphabetical[5];
    char swap;

    /* Alphabetical order */
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(elements[i] < elements[j]){
                swap = elements[i];
                elements[i] = elements[j];
                elements[j] = swap;
            }
        }
    }

    printf("Alphabetical Order: \n");
    for(int i=0; i<5; i++){
        printf(" %c ",elements[i]);
    }
    printf("\n");

    /* Create List */
    node *HEAD = NULL;

     node * q = NULL;    // will be the new node to be created
    node * p = NULL;    // will be the trailing pointer
    for(int i=0;i<5;i++){
       q = (node*)malloc(sizeof(node)); //allocate memory to new node
        q->next = NULL;

       q->data = elements[i];

        if(HEAD == NULL){
            HEAD  = q;
        }else{
            p = HEAD;
            while( p->next != NULL){
                p = p->next;
            }
            p->next = q; //link p to the right link of q
        }
    }

    printf(" Linked List: ");
    display(HEAD);
    printf("\n\n");
 /** End of first program (i)  **/

///******************************************************************************************

/**
    Algorithm for second part
    1. Create an empty stack
    2. Push elements of the single linked list (H1) into the stack
        The last element of H1 will be at the top of the stack
    3. Create a defined structure data type (with data, *next (for right link) and *prev (for left link). Call it node
    4. create a new node by allocating memory to it, and then initialize it by popping elements in the stack (above)
       to its data field. Link *next to the next node and *prev to the preceding node (except at the head, where *prev is null)
        - This step (4) involves traversing the list during pushing
    5. Repeat 4 until the stack in 2 is empty. Then the double linked list has been created
    6. Print the double linked list

**/
//Pushing to the stack
    char stack[5];
    int n = 5;
    int top = 0;

    p = HEAD;
       int i = 0;
    while(p != NULL){
        stack[i] = p->data;
        p= p->next;
        i++;
    }

 //creating a double linked list
  dnode *DHEAD = NULL;
  dnode * s = NULL;    // will be the new node to be created
    dnode * r = NULL;    // will be the trailing pointer

    for(int i=4;i>-1;i--){
       s = (dnode*)malloc(sizeof(dnode));
        s->next = NULL;

       s->data = stack[i];

        if(DHEAD == NULL){
            DHEAD  = s;
            s->prev = NULL;
        }else{
            r = DHEAD;
            while( r->next != NULL){
                r = r->next;
            }
            r->next = s; //link r to the right link of s
            s->prev = r; //link s to the left link of p
        }
    }

    printf("Double Linked List: ");
    displaydoublelist(DHEAD);
    printf("\n\n");



}

void display(node * head){
    node * p = head;
    while(p != NULL){
        printf("%c->",p->data);
        p= p->next;
    }
}

void displaydoublelist(dnode * head){
    dnode * r = head;
    while(r != NULL){
        printf("%c <-> ",r->data);
        r= r->next;
    }
}


/**  TIME COMPLEXITIES

    The time complexity of (i) is => O(n^2)(n).
        This is obtained by taking the worst case time complexity of
        it's selection sort algorithm 0(n^2), and multiplying it with the time complexity of creating
        the linear list, whose running time depends on the size of the list (n)

    The time complexity of (ii) is => 0(n)(c)(n).
        This is obtained by taking the time complexity of the traversal algorithm that reads in the elements of H1 O(n)
        It is then multiplied by the time complexity of pushing and popping out of the stack, which is a constant O(c)
        Finally, it is multiplied by the running time of creating the stack, O(n)


**/

