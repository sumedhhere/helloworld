#include<iostream>
using namespace std;
int main()
{
	int *a=new int;
	*a=20;
	cout<<*a<<*(++a);
	return 1;
}
