#include <stdio.h>
int main(){
 int n,i,j,k,s;
 scanf("%d",&n);
 s = 0;
 for(i = 1;i <= n;i++){
  k = 1;
  
  for(j = 1;j <= i;j++){
   k *= j;
   
  }
  s += k;
 }
 
 printf("%d %d %d",n,k,s);
 return 0;
}
