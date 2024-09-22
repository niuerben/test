#include<bits/stdc++.h>
using namespace std;
class Musk {
private:
	int x,n=0;
public:
	Musk(int x) {
		do {
			x /= 10;
			n++;
		} while (x);
	
	}
	int Musk_value() {
		return n;
	}

};
int main()
{
	int x, n = 0;
	scanf("%d", &x);
	Musk ans(x);
	printf("位数为%d", ans.Musk_value());
	return 0;
}
