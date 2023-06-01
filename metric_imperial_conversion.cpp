#include <iostream>

using namespace std;

const double cm_per_inch = 2.54
const double inches_per_feet = 12;

int
main()
{
    int totalInches;
    int feet;
    int inches;
    double cm;
    
    cout<<"Enter your height -- "<<endl;
    cout<<"Please enter your feet in the imperial system -- "; cin>>feet>>inches; cout<< endl;
    cout<<"The numbers entered were "<< feet << " feet and "<< inches << " inches!"<< endl; 
    
        totalInches = inches_per_feet * feet + inches;
    cout<<"The total number of inches = "<< totalInches << endl;
    
        cm = cm_per_inch * totalInches;
    cout<<"Your height in the metric system is "<< cm << endl;    
    
    
    return 0;
}
