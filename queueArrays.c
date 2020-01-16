#include <stdio.h>

int arr[1000];
int head = 0;

int push(int num){
	arr[head] = num;
	head++;
	printf("Element inserted: %d\n", num);
	return num;
}

void pop(){
	int temp = arr[0];
	for(int i = 0; i <= head; i++){
		arr[i] = arr[i+1];
	}
	arr[head--] = -1;

	printf("Element popped: %d\n", temp);
}

int isEmpty(){
	if(head){
		printf("Queue is not empty!\n");
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
