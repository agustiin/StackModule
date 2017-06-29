#include "StackOfDoublesModule.h"
#include <stdio.h> //eliminar si no se va a usar printf
#include <stdlib.h>

typedef struct nodoStruct
{
    StackItem data;
    //int longitud;
    struct nodoStruct *next;
} nodo;

nodo *top=NULL;

//sacar if y establecer precondicion pila no nula?
StackItem pop(void){
	nodo *temp=top;
	StackItem item;
	if(top!=NULL)
	    {
	        item = top->data;
	        top = top->next;
	        free(temp);
	    	printf("\t%f\n",item);
	    }
		else
	    {
	    printf("\nStack Empty\n");
		}
	
	return 0;
}


void push(StackItem oneItem){
	nodo *temp;
	temp =(nodo *)malloc(sizeof(nodo));
	temp->data = oneItem;
	if (top == NULL)
    {
         top=temp;
         top->next=NULL;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}



int isEmpty(void){
	return (top==NULL);
}

//definirla con un MAX? y ver si la cantadad de elementos es igual al maximo preestablecido?
int isFull(void){
	return 0;
}


/*
int main(void) {
	
	int a;	
 	pop();
	push(3);
	push(2);
	push(1);
	pop();
	pop();
	pop();
	pop();

//	a=pop();
//	printf("%s\n",a );

	return 0;
}
*/