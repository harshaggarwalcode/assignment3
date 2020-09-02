#include <iostream>
using namespace std;

int main() {


    int foo[10000]; // array declaration.
    int c;
    cout<<"Enter the 1000 elements";
    for(c=0;c<10000;c++)
        foo[c]=c+2;

     for (int i=0; i<10000; i++)
    {
        bool prime=true;
        for (int j=2; j*j<=foo[i]; j++) //
        {
            if (foo[i] % j == 0)
            {
                prime=false;
                                break;    // stop the loop
            }
        }
        if(prime) cout << foo[i] << " ";
    }
	return 0;
}
