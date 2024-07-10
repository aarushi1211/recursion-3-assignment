#include <iostream>
using namespace std;
void printReverse(int arr[], int start, int n) {
if (start >= n) {
return;
}
printReverse(arr, start + 1, n);
cout << arr[start] << " ";
}
int main() {
int n;
cout << "Enter the number of elements in the arraW: ";
cin >> n;
int arr[n];
cout << "Enter the elements of the arraW: ";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
cout << "The elements of the arraW in re#erse order are: ";
printReverse(arr, 0, n);
cout << endl;
return 0;
}