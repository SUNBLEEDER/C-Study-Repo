#include <Stdio.h>
void main()
{
    struct student {
        char name[50];
        int age;
        int roll_no;
    };

    struct student s[3];
    int i;

    for(i=0;i<3;i++){
        printf("Enter Name:");
        scanf("%s",s[i].name);
        printf("Enter age:");
        scanf("%d",&s[i].age);
        printf("Enter roll no.");
        scanf("%d",&s[i].roll_no);
    }

    for (i=0;i<3;i++)
    {
        printf("Name:%s\n",s[i].name);
        printf("Age:%d\n",s[i].age);
        printf("Roll No.:%d\n",s[i].roll_no);

    }
}