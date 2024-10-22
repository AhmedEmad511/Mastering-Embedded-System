#include "Linked_list.h".h"
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <conio.h>
#define DPRINTF(...) {fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}





struct SSNode* gpFirstNode =NULL;

void AddStudent()
{
	struct SSNode* pNewNode;
	struct SSNode* pLastNode = gpFirstNode;
	uint8 Temp_ID[40];

	//check if there is nodes in the linked list

	if(gpFirstNode==NULL)   //if the linked list is empty....
	{
		pNewNode = (struct SSNode *) malloc(sizeof(struct SSNode));
		gpFirstNode = pNewNode;
	}
	else
	{
		while(pLastNode->NextNode != NULL)//loop till you reach last node
		{
			pLastNode = pLastNode->NextNode;
		}
		pNewNode = (struct SSNode *) malloc(sizeof(struct SSNode));
		pLastNode->NextNode = pNewNode;
	}

	//get data from the user
	DPRINTF("\n Enter ID : ");
	gets(Temp_ID);
	pNewNode->ID = atoi(Temp_ID);

	DPRINTF("\n Enter Name : ");
	gets(pNewNode->Name);

	DPRINTF("\n Enter Height :");
	gets(Temp_ID);
	pNewNode->height = atof(Temp_ID);

	// assign next address to NULL
	pNewNode->NextNode = NULL ;
}

void DeleteStudent()
{
	uint8 TempID[40];
	uint32 Selected_ID;

	struct SSNode* pSelectedNode = gpFirstNode;
	struct SSNode* pPreviousNode = NULL;

	// get the ID from the user..
	DPRINTF("\n Enter selected ID :");
	gets(TempID);
	Selected_ID = atoi(TempID);

	//check if the list is Empty

	if(gpFirstNode == NULL )
	{
		DPRINTF("\n List is Empty ");
		return 0;
	}

	while(pSelectedNode)
	{
		if(pSelectedNode->ID == Selected_ID)
		{
			if(pSelectedNode==gpFirstNode)
			{
				gpFirstNode = pSelectedNode->NextNode ;
			}
			else
			{
				pPreviousNode->NextNode = pSelectedNode->NextNode;
			}
			free(pSelectedNode);
			return 1;
		}

		pPreviousNode = pSelectedNode;
		pSelectedNode = pSelectedNode->NextNode;
	}
	DPRINTF("\n Undefined ID ...");

	return 0;
}

void Print_students()
{
	uint32 count = 1;
	struct SSNode* pTempNode = gpFirstNode ;
	//check if the list is empty
	if(gpFirstNode==NULL)
	{
		DPRINTF("\n List is Empty ");
	}
	else
	{
		while(pTempNode)
		{
			DPRINTF("\n Node Number %d ", count);
			DPRINTF("\n ID : %d", pTempNode->ID);
			DPRINTF("\n Name : %s", pTempNode->Name);
			DPRINTF("\n Height : %f", pTempNode->height);

			pTempNode= pTempNode->NextNode;
			count++;
		}
	}

}

void DeleteAll()
{
	struct SSNode* pCurrentNode = gpFirstNode;
	struct SSNode* pTempNode= NULL;

	//check if the list is empty
	if(gpFirstNode == NULL)
	{
		DPRINTF("\n The List is Empty");
	}
	else
	{
		while(pCurrentNode)
		{
			pTempNode = pCurrentNode;
			pCurrentNode = pCurrentNode->NextNode;
			free(pTempNode);
		}
	}
	gpFirstNode = NULL;
}

void GetNodeData()
{
	uint8 TempNodeNum[40];
	uint32 NodeNum;
	uint32 counter = 1;

	struct SSNode* pTempNode = gpFirstNode;

	//take node number from the user

	DPRINTF("\n Enter Selected node number to print its data...Start from 1 : ");
	gets(TempNodeNum);
	NodeNum = atoi(TempNodeNum);

	//check list is empty

	if(gpFirstNode == NULL)
	{
		DPRINTF("\n List is Empty ");
	}
	else
	{
		while(pTempNode)
		{
			if(NodeNum == counter)
			{
				DPRINTF("\n Node Number %d ", counter);
				DPRINTF("\n ID : %d", pTempNode->ID);
				DPRINTF("\n Name : %s", pTempNode->Name);
				DPRINTF("\n Height : %f", pTempNode->height);

				return 1;
			}
			else
			{
				pTempNode = pTempNode->NextNode;
				counter++;
			}
		}
		//the number exceeds the nodes number

		DPRINTF("\n The number is larger than the nodes in the list ");
	}
}

void GetListLength()
{
	struct SSNode* pTempNode =gpFirstNode;
	uint32 counter = 0;
	//Check if the list is empty

	if(gpFirstNode == NULL)
	{
		DPRINTF("\n The List is Empty ");
	}
	else
	{
		while(pTempNode)
		{
			pTempNode = pTempNode->NextNode;
			counter++;
		}
		DPRINTF("\n Number of nodes in the list is : %d ", counter);
	}

}

void GetNodeDataFromEnd()
{
	struct SSNode* pTempNode= gpFirstNode;
	struct SSNode* pSelectedNode= gpFirstNode;
	uint8 TempNodeNum[40];
	uint32 NodeNum;
	uint32 counter =0 ;
	//get node number
	DPRINTF("\n Enter Node Number **Starting From 1 ** : ");
	gets(TempNodeNum);
	NodeNum = atoi(TempNodeNum);

	//check if the list is empty
	if(gpFirstNode == NULL)
	{
		DPRINTF("\ The List is Empty ");
	}
	else
	{
		//make a gap between the two pointers and check if the Number given exceeds the nodes number..
		while(pTempNode)
		{
			if(counter == NodeNum)
			{
				//reached the gap needed..
				//now shift until the pTempNode reach last node then we are here...
				while(pTempNode)
				{
					pSelectedNode = pSelectedNode->NextNode;
					pTempNode = pTempNode->NextNode;
				}
				//the ptemp node will break the while but we are off by 1 itiration
				//one more shift...
				//pSelectedNode = pSelectedNode->NextNode;
				//print the data...
				DPRINTF("\n Node Number %d from the end ", counter);
				DPRINTF("\n ID : %d", pSelectedNode->ID);
				DPRINTF("\n Name : %s", pSelectedNode->Name);
				DPRINTF("\n Height : %f", pSelectedNode->height);

				return 1;

			}
			else
			{
				pTempNode = pTempNode->NextNode;
				counter++;
			}
		}
		if(counter == NodeNum)
		{
			DPRINTF("\n Node Number %d from the end ", counter);
			DPRINTF("\n ID : %d", pSelectedNode->ID);
			DPRINTF("\n Name : %s", pSelectedNode->Name);
			DPRINTF("\n Height : %f", pSelectedNode->height);

			return 1;
		}

		else
		{
			//the number exceeds
			DPRINTF("\n The number given exceeds the nodes number ");
			return 0;
		}
	}

}

void GetMiddleNode()
{
	//Create two pointers one of which go by two steps and one with only one step
	// When the two step pointer reaches the end of the list ... the one step will reach the middle

	struct SSNode* pTwoStep = gpFirstNode;
	struct SSNode* pOneStep = gpFirstNode;


	//check if the list is empty
	if(gpFirstNode == NULL)
	{
		DPRINTF("\n The List is Empty");
	}
	else
	{

		while(pTwoStep)
		{
			pTwoStep = pTwoStep->NextNode;
			if(pTwoStep==NULL)
			{
				break;
			}
			pOneStep = pOneStep->NextNode;
			pTwoStep = pTwoStep->NextNode;
		}

		DPRINTF("\n ----Middle Node data---- ");
		DPRINTF("\n ID : %d", pOneStep->ID);
		DPRINTF("\n Name : %s", pOneStep->Name);
		DPRINTF("\n Height : %f", pOneStep->height);
	}

}

void ReverseList()
{
	//check if the list is empty
	if(gpFirstNode == NULL)
	{
		DPRINTF("\n The list is Empty");
	}
	else
	{
		struct SSNode* pTailNode = NULL;
		struct SSNode* pCurrentNode = gpFirstNode;
		struct SSNode* pHeadNode = pCurrentNode->NextNode;

		while(pHeadNode)
		{
			pCurrentNode->NextNode = pTailNode;
			pTailNode = pCurrentNode;
			pCurrentNode = pHeadNode;
			pHeadNode = pHeadNode->NextNode;
		}

		gpFirstNode = pCurrentNode;

		DPRINTF("\n -----The List has been reversed----");
	}
}
