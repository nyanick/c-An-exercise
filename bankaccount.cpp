#include<iostream>
#include<string>
#include "bank.h"
using namespace std;

account::account(int amt)
{
    initial_amt=amt;
}
void account::addamount(int addamt)
{
   add_amt=addamt;
   initial_amt=initial_amt + addamt;
   cout<<"operation successful\n"<< endl;
}
void account::redrawnamount(int redrawn)
{
    //redrawn=rmat;
    if(redrawn>=0 && redrawn<initial_amt){
        initial_amt = initial_amt - redrawn;
        cout<<"operation successful\n"<< endl;

    }
    else{
        redrawn=0;
        cout<<"ERROR the amount enter is invalid\n"<< endl;
        initial_amt = initial_amt - redrawn;
    }
}

int account::checkamount()
{
    return initial_amt;
}
