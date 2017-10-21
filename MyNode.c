/*
 * MyNode.c
 *
 *  Created on: 21 ����� 2017
 *      Author: michael
 */

#include "MyNode.h"


MyNode* InitNode(int value){
	MyNode* node = (MyNode*)malloc(sizeof(MyNode));
	if(node <0){
		printf("Error in malloc in making node: file: %s, line: %d, function: %s\n",__FILE__,__LINE__,__FUNCTION__);
		return NULL;
	}
	node->value=value;
	return node;
}

void DestroyNode(MyNode* node){
	free(node);
}


