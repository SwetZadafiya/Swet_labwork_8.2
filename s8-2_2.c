#include<stdio.h>

void main(){
int i,v,m;
int x = 0;

printf("Enter year :    ");
scanf("%d",&v);

printf("Enter year :    ");
scanf("%d",&m);

int a[m+v];

for(i=v;i<=m;i++){
if(i%4==0){
   a[x]=i;
   x++;
}}

for(i=0;i<x;i++){
printf(" The leap year is : %d\n",a[i]);
}

}
