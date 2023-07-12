#include<stdio.h>

void main()

{

int x,n;

printf("Enter The size of array :");
scanf("%d",&n);

int a[x];

printf("Enter the Elements \n");

for(x=0;x<n;x++){
printf("A[%d] = ",x);
scanf("%d",&a[x]);

}

printf("Square of array\n");

for(x=0;x<n;x++){

a[x]=a[x]*a[x];

}

for(x=0;x<n;x++){

printf("%d\n",a[x]);

}

}
