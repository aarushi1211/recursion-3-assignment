#include <iostream>
#include <climits>
using namespace std;
int findMin(int arr[], int n) {
if (n == 1) {
return arr[0];
}
int restMin = findMin(arr + 1, n - 1);
return (arr[0] < restMin) ? arr[0] : restMin;
}
int main() {
int n;
cout << "Enter the number of elements in the array: ";
cin >> n;
int arr[n];
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
int minElement = findMin(arr, n);
cout << "The minimum element in the array is: " << minElement << endl;

return 0;
}