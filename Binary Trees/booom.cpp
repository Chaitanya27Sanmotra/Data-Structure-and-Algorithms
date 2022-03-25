#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int size) {
	cout << " size of array is " << n << endl;
	for (int = 0; i < n; i++) {
		cout << arr[i] << "";
		cout << endl;
	}
}
bool linearsearch(int arr[], int n, int key) {
	// base case
	if (n == 0) {
		return false;
	}

	if (arr[0] == key) {
		return true;
	}
	else
		bool ans = linearsearch(arr + 1, n - 1, key);
	return ans;
}














int main() {

}