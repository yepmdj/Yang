#include <iostream>
using namespace std;
 
int main() {
 //接收数据
 int n;
 cin >> n;
 int arr[n];
 for (int i = 0; i < n; i++) {
  cin >> arr[i];
 }
 
 //对数据进行计数 并输出结果
 int bigger_num; //比arr[i]大的数的个数
 int smaller_num;
 for (int i = 0; i < n; i++) {
  bigger_num = 0;
  smaller_num = 0;
  for (int j = 0; j < n; j++) {
   if (arr[i] > arr[j]) {
    bigger_num += 1;
   } else if (arr[i] < arr[j]) {
    smaller_num += 1;
   }
  }
  if (smaller_num == bigger_num) { //如果arr[i]是中间数，则输出后返回
   cout << arr[i] << endl;
   return 0;
  }
 }
 cout << -1 << endl; //执行到这表示没有中间数
 
 return 0;
}
