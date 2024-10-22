#ifndef Linked_LIST_H_
#define Linked_LIST_H_

#include "Platform_types.h"
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <conio.h>


struct SSNode
{
	struct SSNode* NextNode;
	uint8 Name[40];
	uint32 ID;
	float32 height;

};

void AddStudent();
void DeleteStudent();
void Print_students();
void DeleteAll();
void GetNodeData();
void GetListLength();
void GetNodeDataFromEnd();
void GetMiddleNode();
void ReverseList();

#endif /* LL_H_ */
