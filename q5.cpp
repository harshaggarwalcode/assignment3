#include<iostream>
void calculateCharge();
using namespace std;
int main()
{
calculateCharge();

}
void calculateCharge()
{

    int car;
    float hour,charges,r;
    cout<<"Enter the car";
    cin>>car;
    if(car==1)
    {
        hour=1.5;
        charges=2.00;
        r=hour*charges;
        cout<<"Amount $="<<r<<endl;

    }
    else if(car==2)
    {
        hour=4.0;
        charges=2.50;
        r=hour*charges;
        cout<<"Amount $="<<r<<endl;

    }

    else if(car=3)
    {
        hour=24;
        charges=10.00;
        r=hour*charges;
        cout<<"Amount $="<<r<<endl;

    }
    cout<<"--------------------------------\n";
    cout<<"Car\t\tHourse\t\tCharges"<<endl;
    cout<<"1\t\t1.5\t\t2.00"<<endl;
    cout<<"2\t\t4.00\t\t2.50"<<endl;
    cout<<"3\t\t24.0\t\t10.00"<<endl;
    cout<<"Total\t\t29.5\t\t14.50"<<endl;
    cout<<"---------------------------------";
}
