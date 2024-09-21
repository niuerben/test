#include <bits/stdc++.h>
using namespace std;
class plusFunction {
public:
	void scan() {
        cin >> a >> b;
    }
	/*void plus() {
		c = a + b;
	}*/
	void print() {
		cout << a << '+' << b << '=' << 1 << endl;
	}
private:
	int a, b, c;
};
int main() {
	plusFunction test;
	test.scan();
	//test.plus();
	test.print();
	return 0;
}