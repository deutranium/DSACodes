#include <stdio.h>
#include <stdlib.h>

typedef struct ll {
	int data;
	struct ll *next;
} ll;

ll *head;
ll *tail;


// push to the tail
void push(int num){
	
	ll *new = (ll*) malloc(sizeof(ll));
	new->data = num;

	if(tail){
		tail->next = new;
		tail = new;
		printf("Element pushed: %d\n", num);
	}
	else{
		tail = new;
		head = new;
		printf("Element pushed: %d\n", tail->data);
	}
}

// pops from head
void pop(){
	int stuff = head->data;
	ll *temp = head;
	head = head->next;
	free(temp);
	printf("The element popped: %d\n", stuff);
}

int isEmpty(){
	if(head && tail){
		printf("Queue is not empty!!\n");
		return 1;
	}
	printf("Queue is empty!!\n");
	return 0;
}



int main(){
	isEmpty();
	push(6);
	push(100);
	pop();
	isEmpty();

}
