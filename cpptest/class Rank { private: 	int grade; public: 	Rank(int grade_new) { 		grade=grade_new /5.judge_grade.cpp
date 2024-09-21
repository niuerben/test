#include<bits/stdc++.h>
using namespace std;
class Rank {
private:
	int grade;
public:
	Rank(int grade_new) {
		grade=grade_new /= 10;
		switch (grade) {
		case 10:case 9:printf("You got A.");break;
		case 8:printf("You got B.");break;
		case 7:printf("You got C.");break;
		case 6:printf("You got D.");break;
		default:printf("You got F.");
		}
	}
};
int main()
{
	int grade;
	scanf("%d", &grade);
	Rank Judge(grade);
	return 0;
}
