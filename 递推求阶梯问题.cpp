#include <iostream>
using namespace std;
//递推算法求解阶梯问题
int f(int n)
{
	if(n==1)
	return 1;
	if(n==2)
	return 2;
	if (n>=3)
	return f(n-1)+f(n-2); 
} 
int main() 
{
	cout<<f(8)<<endl;
	return 0;
}
