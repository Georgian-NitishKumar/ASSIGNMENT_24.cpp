#include<iostream>
using namespace std;
int add(int ,int ,int);
int add(int a,int b,int c=0)
{
	return a+b+c;
}
int main(){
	cout<<"Addition of 2 numbers are "<<add(5,2)<<endl;
	cout<<"Addition of 3 numbers are "<<add(10,23,3);
	return 0;
}
