#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

//istringstream��ȡ�ǿհ��ַ���
/*int main() {
	string s;
	while (getline(cin, s)) {
		istringstream iss(s);
		string t;
		while (iss >> t) {
			cout << t << ' ';
		}
		cout << endl;
	}
}*/

//cpp��hello world
/*class name {
public:
	void print() {
		printf("Hello,world!");
	}
private:
};

int main() {
	name a;
	a.print();
	return 0;
}*/

//��������
/*class scan {
public:
	void print(int a, int b) {
		cout << a << endl << b << endl;
		}
		
private:
};
int main() {
	int a, b;
	cin >> a >> b;
	scan c;
	c.print(a,b);
	return 0;
}*/

//�̳�
/*class estore {
public:
	void scan() {
		cout << "������۸�" << endl;
		cin >> price;
	}
	void print() {
		cout << "����" << endl;
		cout << Amount - price << endl;
	}
private:
	const int Amount = 100;
	int price;
};
int main() {
	estore test;
	test.scan();
	test.print();
}*/

//�ӷ�
/*class plusFunction {
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
}*/

//���캯��������������
/*class Time {
private:
	int hour, minute, second;
public:
	Time(int h = 0, int m = 0, int s = 0) {
		hour = h;
		minute = m;
		second = s;
	}
	void print() {
		printf("�����ǣ�%dʱ%d��%d��", hour, minute, second);
	}
};
int main() {
	int hour, minute, second;
	scanf("%d %d %d", &hour, &minute, &second);
	Time t(hour,minute,second);
	t.print();
}*/

//����ʱ���
class Time{
private:
	int h1, m1, h2, m2;
public:
	int cal_h(int h0 , int h );
	int cal_m(int m0 , int m );
};
int Time::cal_h(int h0, int h) {
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
	printf("Сʱ��ֵΪ��%d\n", a.cal_h(1, 3));
	printf("���Ӳ�ֵΪ��%d\n", a.cal_m(20, 30));
	return 0;
}