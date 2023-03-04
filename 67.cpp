#include <stdio.h> 
//67查找 
int main(){
 int n,m;
 scanf("%d %d",&n,&m);
 int arr[n],i=0;
 for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
 }
 int flag=1;
 for(i=0;i<n;i++){
  if(arr[i]==m){
   flag=0;
   printf("%d ",i);
  }
 }
 //循环结束进行判断 
 if(flag){
  printf("-1");
 }
 return 0;
}
