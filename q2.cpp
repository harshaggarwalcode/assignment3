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
complex multi(complex c)
{
	complex temp;
	temp.a=a*c.a;
	temp.b=b*c.b;
	return temp;
}
};
int main()
{
	complex c1,c2,c3;
	c1.setData(6,3);
	c2.setData(7,3);
	c3=c1.multi(c2);
	c3.showData();
}
