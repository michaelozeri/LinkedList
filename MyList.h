/*
 * MyList.h
 *
 *  Created on: 21 срхїз 2017
 *      Author: michael
 */

#ifndef MYLIST_H_
#define MYLIST_H_

#include "MyNode.h"

typedef struct my_list_t MyList;

MyList* InitList();

bool IsEmpty(MyList* list);

int InsertValue(MyList* list,int val);

int PopLast(MyList* list);

int DestroyList(MyList* list);

void PrintList(MyList* list);

MyNode* GetValue(MyList* list,int val);

#endif /* MYLIST_H_ */
