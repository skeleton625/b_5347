#include <iostream>
using namespace std;

int t, a, b, m, n;
unsigned long long t1;
int main() {
	cin >> t;
	while (t--) {
		cin >> a >> b;
		m = a > b ? a : b;
		n = a < b ? a : b;
		t1 = m;
		while (t1%n != 0) t1 += m;
		cout << t1 << endl;
	}
	return 0;
}