#include "Linked_list.h"
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <conio.h>

#define DPRINTF(...) {fflush(stdout);\
		fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);\
		fflush(stdin);}

void main (void)
{
	char temp_text[40];
	while(1)
	{
		DPRINTF("\n ==================================");
		DPRINTF("\n 1: Add student ");
		DPRINTF("\n 2: Delete student ");
		DPRINTF("\n 3: View all students ");
		DPRINTF("\n 4: Delete all student ");
		DPRINTF("\n 5: Print Selected Student's data ");
		DPRINTF("\n 6: Get List Length ");
		DPRINTF("\n 7: Print selected Student's data from the End ");
		DPRINTF("\n 8: Print Middle student's data  ");
		DPRINTF("\n 9: Reverse The List  ");
		DPRINTF("\n Enter Option Number : ");

		gets(temp_text);
		DPRINTF("\n ====================================");
		switch(atoi(temp_text))
		{
		case 1:
			AddStudent();
			break;
		case 2:
			DeleteStudent();
			break;
		case 3:
			Print_students();
			break;
		case 4:
			DeleteAll();
			break;
		case 5:
			GetNodeData();
			break;
		case 6:
			GetListLength();
			break;
		case 7:
			GetNodeDataFromEnd();
			break;
		case 8:
			GetMiddleNode();
			break;
		case 9:
			ReverseList();
			break;
		default:
			DPRINTF("\n Wrong Option ");
			break;
		}

	}

}


