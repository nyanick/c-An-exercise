#include<iostream>
#include<string>
#include "bank.h"
using namespace std;

int main()
{
    int p;
    int redraw_amt,add_amt;
    account account1(150000);
    start:
    cout<<"select your operation\n"<< endl;
    cout<<"1-to check your initial amount\n2-to add money to your account\n3-to redrawn money from your account\n4-to exit\n"<< endl;
    cin>>p;
    switch(p)
    {
        case 1:
            cout<<"your initial amount is "<<account1.checkamount()<<endl;
            break;
        case 2:
            cout<<"enter the amount you want to add\n"<<endl;
            cin>>add_amt;
            account1.addamount(add_amt);
            break;
        case 3:
            cout<<"enter the amount yo which to redrawn\n"<< endl;
            cin>>redraw_amt;
            account1.redrawnamount(redraw_amt);
            break;
        case 4:
            return 0;
            break;
        default:
            cout<<"please select a valid input\n"<< endl;
            goto start;

    }
    goto start;
}
