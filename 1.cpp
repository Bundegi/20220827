#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

int main() {
	fast;
	int a;
	int sum = 0;
	vector<int> A;
	vector<int> B;
	for (int i = 0; i < 8; i++) {
		cin >> a;
		A.push_back(a);
	}
	for (int i = 0; i < 5; i++) {
		int max = -1;
		int mem = 0;
		for (int j = 0; j < A.size(); j++) {
			if (max < A[j]) {
				max = A[j];
				mem = j;
			}
		}
		if (max != -1) {
			sum += max;
			A[mem] = -1;
			B.push_back(mem + 1);
		}
	}
	sort(B.begin(), B.end());
	cout << sum << endl;
	for (int i = 0; i < 5; i++) cout << B[i] << " ";
}