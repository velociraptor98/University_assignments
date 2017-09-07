#include <stdio.h>
struct std{
	char name[10];
	char id[10];
	int fees;
};
int main(){
	struct std a[10];
	printf("enter the name id and the fees of the students:\n");
	for(int i=0;i<10;i++)
	{
		gets(a[i].name);
		gets(a[i].id);
		scanf("%d",&a[i].fees);
	}
	for(int i=0;i<10;i++)
	{
		printf("the name of the student is %s and the id is %s and the fees paid by the student is %d \n",a[i].name,a[i].id,a[i].fees);
	}
}