#include <iostream>

using namespace std;

const int hd = 50;
const int q = 25;
const int d = 10;
const int n = 5;

int
main ()
{
    //c is change
    // hd is half dollar
    // q is quater
    // d is dimes
    // n is nickle
    int c;
    
    cout<<"enter your change in cents -- ";
        cin>> c;
    cout<< endl;
    
    cout<<" the ammount entered is "<< c << endl;
        c = c % q;
    cout<<"the number of quaters returned is "<< c / q << endl;
        c = c % d;
    cout<<"the ammount of dimes returned is "<< c / d << endl;;
        c = c % n;
    cout<<"the ammount of nickels returned is "<< c / n << endl;    
    
    
    return 0;
}
