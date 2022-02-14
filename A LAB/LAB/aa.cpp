#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll num1, f_num, l_num;
		cin>>num1;
		l_num=num1%10;
		while(num1>=10)
		{
			num1=num1/10;
		}
		f_num = num1;
		cout<<f_num+l_num<<"\n";
		
	}
	return 0;
}