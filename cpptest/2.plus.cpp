#include<bits/stdc++.h>
using namespace std;
class plusFunction {
public:
	void scan() {
		cin >> a >> b;
	}
	void plus_Function() {
		c = a + b;
		
	}
	void print() {
		cout << a << '+' << b << '=' << c << endl;
	}

private:
	int a, b, c;
};

int main() {
	plusFunction test;
	test.scan();
	test.plus_Function();
	test.print();
	return 0;
}
