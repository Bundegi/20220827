#include <iostream>
#define endl "\n"
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	fast;
	int N, Tesu, P;
	cin >> N >> Tesu >> P;
	vector<int> numbers;
	int Su;
	for (int i = 0; i < N; i++) {
		cin >> Su;
		numbers.push_back(Su);
	}
	numbers.push_back(Tesu);
	sort(numbers.begin(), numbers.end(), greater<int>());
	int rank = 0;
	int mem = 0;
	for (mem = 0; mem < numbers.size(); mem++) {
		rank = mem + 1;
		while (mem + 1 < numbers.size() && numbers[mem + 1] == numbers[mem]) mem++;

		if (numbers[mem] == Tesu) break;
	}
	if (mem < P) cout << rank;
	else cout << -1;
}
//등수구하기