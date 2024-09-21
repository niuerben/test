#include <bits/stdc++.h>
using namespace std;
class Time {
private:
	int h1, m1, h2, m2;
public:
	int cal_h(int h0 , int h );
	int cal_m(int m0 , int m );
};
int Time::cal_h(int h0, int h) {//声明Time类成员函数cal_h(int h0,int h)
	h1 = h0;
	h2 = h;
	return h2 - h1;
}
int Time::cal_m(int m0, int m ) {
	m1 = m0;
	m2 = m;
	return m2 - m1;
}

int main() {
	Time a;
	printf("小时差值为：%d\n", a.cal_h(1, 3));
	printf("分钟差值为：%d\n", a.cal_m(20, 30));
	return 0;
}
