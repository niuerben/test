#include <bits/stdc++.h>
using namespace std;
class Swap {
private:
	int a, b;
public:
	Swap(int ain, int bin) {
		b = ain,a = bin;
	}
	int value_a(){
		return a;
	}
	int value_b(){
		return b;
	}
};
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	Swap mySwapObject(a, b);
	printf("a=%d,b=%d", mySwapObject.value_a(), mySwapObject.value_b());
  return 0;
}
