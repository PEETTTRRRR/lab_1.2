#include <iostream>
using namespace std;

int main() {
	float n, m, a1, b2, c3;
	cin >> n;
	cin >> m;
	a1 = ++n * ++m; // "++" - увеличение на 1
	cout << "\n1) " << a1;
	cout << "\n------------------";
	b2 = m++ < n;
	cout << "\n2) " << b2;
	cout << "\n------------------";
	c3 = n++ > m;
	cout << "\n3) " << c3;
	cout << "\n------------------";
}