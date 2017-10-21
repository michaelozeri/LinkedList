/*
 * main.c
 *
 *  Created on: 21 срхїз 2017
 *      Author: michael
 */

#include "MyList.h"

int main(int argc,char** argv){
	MyList* list = InitList();
	int retval;
	retval = InsertValue(list,5);
	if(retval<0){
		printf("Error in file: %s, in line: %d, in function: %s. exiting...\n",__FILE__,__LINE__,__FUNCTION__);
		return -1;
	}
	retval = InsertValue(list,6);
	if(retval<0){
		printf("Error in file: %s, in line: %d, in function: %s. exiting...\n",__FILE__,__LINE__,__FUNCTION__);
		return -1;
	}
	PrintList(list);
	PopLast(list);
	PrintList(list);
	PopLast(list);
	PrintList(list);
	InsertValue(list,7);
	InsertValue(list,90);
	PrintList(list);
	DestroyList(list);
	//PrintList(list); will error
	return 1;
}
