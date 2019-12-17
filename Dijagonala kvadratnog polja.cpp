#include<iostream>
using namespace std;
int main(){
	int n,zbroj=0,brojac=1;
	int a[100][100];
	cout<<"Upisite broj veci od 2 i manji od 100 :";
	cin>>n;
	for(int i=0;i<n;i++){
	for(int j=0;i<n;j++){
	a[i][j]=brojac;
	brojac++;
	}
	}
	for(int i=0;i<n;i++){
	zbroj=zbroj+a[i][i];
	}
	cout<<"Zbroj brojeva iznosi :"<<zbroj<<endl;
	system("pause");
	return 0;
}
