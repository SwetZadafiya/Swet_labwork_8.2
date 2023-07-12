#include<stdio.h>

void main()
{
	int i,k,a1,a2;
	
	printf("Enter array A's size :-");
	scanf("%d",&a1);
	
	int a[i],c[i];
	
	printf("Enter array A's elements :- \n");
	
	for(i=0;i<a1;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		c[i] = a[i];
	}
	k = i;
	
	printf("Enter array B's size :-");
	scanf("%d",&a2);
	
	int b[i];
	   
		printf("Enter array B's elements :- \n");
	
	for(i=0;i<a2;i++){
		printf("a[%d]=",i);
		scanf("%d",&b[i]);
		c[i] = b[i];
		k++;
	}
	
	printf("\nArray C is :- \n");
	for(i=0;i<k;i++){
		printf("%d ",c[i]);
		
	}
}
