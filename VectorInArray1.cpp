#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> nums;
	nums.push_back(10);
	nums.push_back(20);
	nums.push_back(30);
	cout << "Vector: ";
	for (int x : nums) {
		cout << x << " ";
	}
	cout << endl;
	nums.resize(5, 100);
	cout << "After resize: ";
	for (int x : nums) {
		cout << x << " ";
	}
	cout << endl;
//Resize to 5 elements, with 2 new ones equal to 100
	return 0;

}