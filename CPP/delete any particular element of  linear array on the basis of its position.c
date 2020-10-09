// Program in C to delete any particular element of  linear array on the basis of its position

#include<stdio.h>

int main()
{
int i,arr[15],size,loc;

printf("Enter the size of the array(Max:15)\n");
scanf("%d",&size);
printf("Enter the elements of the array\n");
for(i=0;i<size;i++)
{
 scanf("%d",&arr[i]);
}
printf("The Array is:\n");
for(i=0;i<size;i++)
{
 printf("%d\t",arr[i]);
}

printf("\nEnter the location for the deletion in array:\n");
scanf("%d",&loc);
for(i=loc;i<=size-1;i++)
{
 arr[i-1]=arr[i];
}
printf("Array after deletion is:\n");
for(i=0;i<size-1;i++)
{
 printf("%d\t",arr[i]);
}
return 0;
}
