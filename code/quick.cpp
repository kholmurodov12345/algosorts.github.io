#include <iostream>
using namespace  std;
int a[100001];
void qsort(int L, int R) {
      int m = (L+R) / 2;
      int X = a[m];
      int i = L;
      int j = R;
      while (i <= j) {
		  while (a[i] < X) i++;
		  while (a[j] > X) j--;
		   if (i <= j) {
				 int t = a[i]; 
				 a[i] = a[j]; 
				 a[j] = t;
				 i++; j--;
		   }
       }
        if (L < j) qsort(L, j);
        if (i < R) qsort(i, R);
}
int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
         cin>>a[i];
    qsort(0, n-1);
    for (int i = 0; i < n; i++)
         cout<<a[i]<<" ";
}
