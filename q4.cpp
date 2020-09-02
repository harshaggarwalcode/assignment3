#include<iostream>
#include<math.h>
using namespace std;
float volume(float );
int main()
{
    int r,v;
    cout<<"enter radius\n";
    cin>>r;
    cout<<"vol;ume of sphere="<<volume(r);

}
inline float volume(float r)
{

    return 4/3*3.14159*pow(r,3);
}
