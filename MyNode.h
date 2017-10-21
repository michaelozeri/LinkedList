/*
 * MyNode.h
 *
 *  Created on: 21 срхїз 2017
 *      Author: michael
 */

#ifndef MYNODE_H_
#define MYNODE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct my_node_t{
	int value;
	struct my_node_t* next;
	struct my_node_t* previous;
} MyNode;

MyNode* InitNode(int value);

void DestroyNode(MyNode* node);


#endif /* MYNODE_H_ */
