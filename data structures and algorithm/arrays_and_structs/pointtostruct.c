#include <stdio.h>
struct point{
	int fees;
	char name[20];
	char rollno[10];
	char course[10];
};
int main()
{
	struct point p;
	struct point *ptr;
	ptr=&p;
	printf("enter the name of the student: ");
	gets(ptr->name);
	printf("enter the roll number: ");
	gets(ptr->rollno);
	printf("enter the course name : ");
	gets(ptr->course);
	printf("enter the fees paid by the students:");
	scanf("%d",&ptr->fees);
	printf("the name of the student is %s and the roll number is %s and belongs to the course %s and the fees paid is Rs: %d ",(ptr->name),(ptr->rollno),(ptr->course),(ptr->fees));
}