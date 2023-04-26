#include<iostream>
using namespace std;
int add(int,int);
float add(float,int);

int add(int a,int b)
{
	return a+b;
}
float add (double x, int y)
{
	return x+y;
}
int main(){
	int r1=add(6,7);
	float r2=add(1.2,3);
	cout<<"r1 is "<<r1<<endl;
	cout<<"r2 is "<<r2;
	return 0;
}
