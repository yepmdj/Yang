#include <stdio.h> 
//67���� 
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
 //ѭ�����������ж� 
 if(flag){
  printf("-1");
 }
 return 0;
}
