#include <iostream>
using namespace std;
 
int main() {
 //��������
 int n;
 cin >> n;
 int arr[n];
 for (int i = 0; i < n; i++) {
  cin >> arr[i];
 }
 
 //�����ݽ��м��� ��������
 int bigger_num; //��arr[i]������ĸ���
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
  if (smaller_num == bigger_num) { //���arr[i]���м�����������󷵻�
   cout << arr[i] << endl;
   return 0;
  }
 }
 cout << -1 << endl; //ִ�е����ʾû���м���
 
 return 0;
}
