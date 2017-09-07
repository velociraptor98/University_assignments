#include <stdio.h>
struct name{
	char fname[10];
	char mname[10];
	char lname[10];
};
struct address{
	char city[10];
	char state[10];
	char area[10];
};
struct employee{
	int age;
	struct name n;
	struct address a;
	char id[10];
	int salary;
	char desig[10];
};
int main()
{
	typedef struct employee emp;
	emp arr[10];
	for(int i=0;i<10;i++){
	printf("enter the age and salary: ");
	scanf("%d %d",&arr[i].age,&arr[i].salary);
	printf("enter the first name then the middle name and then the last name :");
	gets(arr[i].n.fname);
	gets(arr[i].n.mname);
	gets(arr[i].n.lname);
	printf("enter the city then the state and then the area: ");
	gets(arr[i].a.city);
	gets(arr[i].a.state);
	gets(arr[i].a.area);
	printf("eiter the designation: ");
	gets(arr[i].desig);
}
for(int i=0;i<10;i++)
{
	printf("the name is :%s %s %s \n",arr[i].n.fname,arr[i].n.mname,arr[i].n.lname);
	printf("the address is: %s %s %s \n",arr[i].a.city,arr[i].a.state,arr[i].a.area);
	printf("the salary and age is Rs %d and %d years:\n",arr[i].salary,arr[i].age);
	printf("the designation is %s :\n",arr[i].desig);
}
}