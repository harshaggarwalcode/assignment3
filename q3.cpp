#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
	void setData(int x,int y)
	{
		a=x;
		b=y;
	}
	void showData()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;

}
complex compare(complex c)
{
	complex temp;
	temp.a=a;
	temp.b=b;
	if(temp.a==temp.b)
	cout<<"a is equal to B";

    if(temp.a!=temp.b)
        cout<<"a and b are not equal";

	return temp;
}
};
int main()
{
	complex c1,c2,c3;
	c1.setData(6,3);

	c3=c1.compare(c1);
	c3.showData();
}
