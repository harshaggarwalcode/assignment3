#include<iostream>
using namespace std;
class invoice
{

    string name;
    int quantity;
    int price;
    int amount;
    public:
    void setName(string n)
    {
        name=n;
    }
    void setQuantity(int q)
    {
        quantity=q;

    }
    void setPrice(int p)
    {
        price=p;
    }
    void setInvoice()
    {
        amount=quantity*price;
    }
    void showGodwns()
    {
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Name\t"<<"Quantity\t"<<"Price\t"<<"Amount Rs."<<endl;
        cout<<name<<"\t"<<quantity<<"\t\t"<<price<<"\t"<<amount<<endl;
        cout<<"----------------------------------------------------"<<endl;
    }
};
int main()
{

    invoice i;
    i.setName("Mouse");
    i.setQuantity(5);
    i.setPrice(525);
    i.setInvoice();
    i.showGodwns();

}
