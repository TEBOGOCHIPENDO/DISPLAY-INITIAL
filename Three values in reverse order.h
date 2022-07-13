#include <iostream>
using namespace std;

int main() {
	const int n = 3;

	int arr[n];


	cout << " Enter Three digits number " << endl;

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];

	}
	cout << "reverse array" << endl;
	for (int i = 3 - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}

	return 0;

}


