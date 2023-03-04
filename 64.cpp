#include<stdio.h>
int main()
{
 int n,a[30];
 scanf("%d",&n);
 for(int i=0;i<n;i++){
  a[i]=n*n-n+1+i*2;
  printf("%d ",a[i]); 
 }
 return 0; 
}
