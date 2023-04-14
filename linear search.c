#include<stdio.h>
void main()
{int n,arr[5],i,index=0,search;
printf("enter the values in the array:\n");
for(i=0;i<5;i++)
{scanf("%d",&arr[i]);
}
printf("enter the values you want to search:\n");
scanf("%d",&n);

for(i=0;i<5;i++)
    search=arr[i];
       index=i;


if(arr[i]==n)
{printf("the value found at index:%d\n");
}
else
{printf("value not found\n");
}
}
