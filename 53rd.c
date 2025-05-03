#include <stdio.h>
union employee1
{
    char name[32];
    float salary;
    int worker_no; 
};
union employee1 p;
struct employee2
{
    char name[32];
    float salary;
    int worker_no; 
};
struct employee2 q;
void main()
{
    printf("Size of union=%d bytes\n", sizeof(p));
    printf("Size of structure=%d bytes\n", sizeof(q));
}