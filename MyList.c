/*
 * MyList.c
 *
 *  Created on: 21 срхїз 2017
 *      Author: michael
 */

#include "MyList.h"


typedef struct my_list_t{
	int length;
	MyNode* head;
	MyNode* last;
}MyList;

MyList* InitList(){
	MyList* list = (MyList*)malloc(sizeof(MyList));
	list->head = InitNode(0);
	list->head->previous = NULL;
	list->last = list->head;
	list->length = 0;
	return list;
}

bool IsEmpty(MyList* list){
	if(list->length == 0){
		return true;
	}
	return false;
}

int InsertValue(MyList* list,int val){
	MyNode* newnode = InitNode(val);
	if(IsEmpty(list)){
		list->head->next = newnode;
		newnode->previous = list->head;
		list->last = newnode;
		newnode->next = NULL;
	}
	else{
		list->last->next = newnode;
		newnode->previous = list->last;
		list->last = newnode;
	}
	list->length++;
	return 0;
}

int PopLast(MyList* list){
	MyNode* temp = list->last->previous;
	printf("Popped: %d\n\n",list->last->value);
	DestroyNode(list->last);
	list->last = temp;
	list->length--;
	return 0;
}

int DestroyList(MyList* list){
	printf("Destroying list, starting to pop all nodes\n");
	while(list->length!= 0){
		PopLast(list);
	}
	free(list);
	return 0;
}

void PrintList(MyList* list){
	if(list->length == 0){
		printf("List empty!\n\n");
	}
	else{
		MyNode* temp = list->head->next;
		printf("Printing list: ");
		while(temp != list->last){
			printf("%d ",temp->value);
			temp = temp->next;
		}
		printf("%d\n",temp->value);
		printf("List length: %d\n",list->length);
		printf("\n");
	}
}

MyNode* GetValue(MyList* list,int val){
	if(IsEmpty(list)){
		printf("List is empty - no values exist\n\n");
		return NULL;
	}
	MyNode* temp = list->head->next;
	while(temp != list->last){
		if(temp->value == val){
			return temp;
		}
		temp = temp->next;
	}
	if(temp->value == val){
		return temp;
	}
	return NULL;
}



