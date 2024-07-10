#include <iostream>
using namespace std;
int findIndex(int arr[], int start, int n, int target) {
if (start >= n) {
return -1;
}
if (arr[start] == target) {
return start;
}
return findIndex(arr, start + 1, n, target);
}
int main() {
int n, target;
cout << "Enter the number of elements in the array: ";
cin >> n;
int arr[n];
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
cout << "Enter the element to find: ";
cin >> target;
int index = findIndex(arr,0, n, target);
if (index != -1) {
cout << "Element " << target << " found at index: " << index << endl;
}else {
cout << "Element " << target << " is not present in the array." << endl;
}
return ;
}