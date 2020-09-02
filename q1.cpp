#include<iostream>
using namespace std;
class complex
{
private:
int a,b;
public:
void setdata(int x,int y)
{
a=x;
b=y;
}
void showdata()
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
friend ostream& operator<<(ostream&, complex);
friend istream& operator>>(istream&, complex&);
};
ostream& operator<<(ostream &dout, complex c)
{
cout<<"\na="<<c.a<<"b="<<c.b;
return dout;
}
istream& operator>>(istream &din,complex &c)
{
cin>>c.a>>c.b;
return din;
}
int main()
{
complex c1;
cout<<"Enter a complex number";
cin>>c1;
cout<<c1;

}
