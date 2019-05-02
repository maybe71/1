#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	string name;
	int a, b, c;
	double t = 0;
	cin >> name >> a >> b >> c;
	t = a + b + c;
	cout << name<<" ";
	cout << fixed<<setprecision(2) << t / 3 << endl;
//	system("pause");
//	return 0;
}
