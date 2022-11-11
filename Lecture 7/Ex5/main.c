#include <stdio.h>
#include <stdlib.h>
struct emp{
    char emp_name[20][20];
    int emp_id;
}emp1={"Ahmed"},emp2={"Mina"},emp3={"Saleh"};
int main()
{
    emp1.emp_id=1201;
    emp2.emp_id=2221;
    emp3.emp_id=1234;
  struct emp *arr[]={&emp1,&emp2,&emp3};
  struct emp (*(*ptr))=&arr;
  printf("Employee name is :%s\n",*(*ptr)->emp_name);
  printf("Employee ID is : %d",(*ptr)->emp_id);
}
