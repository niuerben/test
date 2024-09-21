#include <bits/stdc++.h>

using namespace std;
int main()
{
	char a[11][11];
	char b[11][11];
	int n;
	cin>>n;
	int found;
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
		a[i][strcspn(a[i],"\n")]=0;	
	}
	
	for(int i=0;i<n;i++){
		scanf("%s",b[i]);
		b[i][strcspn(b[i],"\n")]=0;
	}
	found=1;
	for(int ia=0,jb=n-1;ia<n,jb>=0;ia++,jb--)//顺时针90° 
		for(int ja=0,ib=0;ja<n,ib<n;ja++,ib++)
			if(a[ia][ja]!=b[ib][jb]){
				found=0;
				goto cycle1;
			}
	cycle1:
	if(found){
		cout<<1;
		return 0;
	} 
	
	found=1;
	for(int ia=0,ib=n-1;ia<n,ib>=0;ia++,ib--)//顺时针180° 
		for(int ja=0,jb=n-1;ja<n,jb>=0;ja++,jb--)
			if(a[ia][ja]!=b[ib][jb]){
				found=0;
				goto cycle2;
			}
	cycle2:
	if(found){
		cout<<2;
		return 0;
	} 
	found=1;
	for(int ia=0,jb=0;ia<n,jb<n;ia++,jb++)//顺时针270° 
		for(int ja=0,ib=n-1;ja<n,ib>=0;ja++,ib--)
			if(a[ia][ja]!=b[ib][jb]){
				found=0;
				goto cycle3;
			}
	cycle3:
	if(found){
		cout<<3;
		return 0;
	}
	found=1;
	for(int ia=0,ib=0;ia<n,ib<n;ia++,ib++)//反射 
		for(int ja=0,jb=n-1;ja<n,jb>=0;ja++,jb--)
			if(a[ia][ja]!=b[ib][jb]){
				found=0;
				goto cycle4;
			}
	cycle4:
	if(found){
		cout<<4;
		return 0;
	}
	found=1;
	for(int ia=0,jb=n-1;ia<n,jb>=0;ia++,jb--)//组合顺时针90° 
		for(int ja=0,ib=0;ja<n,ib<n;ja++,ib++)
			if(a[ia][n-1-ja]!=b[ib][jb]){
				found=0;
				goto cycle51;
			}
	cycle51:
	if(found){
		cout<<5;
		return 0;
	} 
	found=1;
	for(int ia=0,ib=n-1;ia<n,ib>=0;ia++,ib--)//组合顺时针180° 
		for(int ja=0,jb=n-1;ja<n,jb>=0;ja++,jb--)
			if(a[ia][n-1-ja]!=b[ib][jb]){
				found=0;
				goto cycle52;
			}
	cycle52:
	if(found){
		cout<<5;
		return 0;
	} 
	found=1;
	for(int ia=0,jb=0;ia<n,jb<n;ia++,jb++)//组合顺时针270° 
		for(int ja=0,ib=n-1;ja<n,ib>=0;ja++,ib--)
			if(a[ia][n-1-ja]!=b[ib][jb]){
				found=0;
				goto cycle53;
			}
	cycle53:
	if(found){
		cout<<5;
		return 0; 
	}
	found=1;
	for(int i=0;i<n;i++)//不变 
		for(int j=0;j<n;j++)
			if(a[i][j]!=b[i][j]){
				found=0;
				goto cycle6; 
			}
	cycle6:
	if(found){
		cout<<6;
		return 0;
	}
	else cout<<7;
	return 0; 
}