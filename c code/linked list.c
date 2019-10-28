# include <stdio.h>
# include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
} node;


node * createList(int n);  //Function to create the linked list
void display(node * head);
int main(){
    node * HEAD = NULL;  // This will store the entire linked list
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    HEAD = createList(n);
    display(HEAD);
    printf("\n");


return 0;
}
node * createList(int n){
     node * q = NULL; //The new node that will be created
     node * p = NULL; //The trailing pointer
     node * head = NULL;

    for(int i=0; i<n; i++){
        q = (node*)malloc(sizeof(node)); //creating a memory allocation for the new node always created
        printf("Enter element %d: ", i+1);
        scanf("%d", &(q->data)); //the data field of the new node is initialized
        q->next = NULL;

        if(head == NULL){ //if n is 1, then q is the head
            head = q;
        }else{
            p = head; // P begins from the head, and starts trailing q
            while(p->next != NULL){
                p = p->next;
            }
            p->next = q ;//p is linked to q
        }
    }
return head;
}
void display(node * head){
    node * p = head;
    while(p != NULL){
        printf("%d->",p->data);
        p= p->next;
    }

}
