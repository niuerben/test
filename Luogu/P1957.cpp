#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n,a,b,c;
    char last,s[20],ans[20];
    scanf("%d\n",&n);
    while(n--){
        fgets(s,sizeof(s),stdin);//读入一行
        if(s[0]=='a'||s[0]=='b'||s[0]=='c')
            last=s[0],s[0]=' ';//获取计算符号，并换成空格
        sscanf(s,"%d %d",&a,&b);//从这个字符串里读入两个数字
        switch(last){
            case'a':c=a+b;sprintf(ans,"%d+%d=%d",a,b,c);break;//+
            case'b':c=a-b;sprintf(ans,"%d-%d=%d",a,b,c);break;//-
            case'c':c=a*b;sprintf(ans,"%d*%d=%d",a,b,c);break;//×
        }
        printf("%s\n%d\n",ans,strlen(ans));//输出
    }
    return 0;
}