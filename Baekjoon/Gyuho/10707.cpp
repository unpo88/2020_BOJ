#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int X, Y;
	int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;
	X = A * P;
	Y = B + (P > C ? (P - C)*D : 0);

	cout << min(X, Y);

	return 0;
}