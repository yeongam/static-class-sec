#include<iostream>
using namespace std;

class Math {
public:
	static int abs(int a) { return a > 0 ? a : -a; }
	static int max(int a, int b) { return (a > b) ? a : b; }
	static int min(int a, int b) { return (a > b) ? b : a; }
};
int main() {
	cout << Math::abs(-1) << endl;
	cout << Math::max(10, 20) << endl;
	cout << Math::min(-5, 5) << endl;
}