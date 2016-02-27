#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int factorial(int );
int main()
{
    double number,s,n;long long e=0.0;
    int p,i,k;
    start:
    cout<<"select an operation\n\n"<<endl;
    cout<<"-1-calculate the factorial of a number\n\n-2-estimate the mathematical value of the constant \"e\" by entering your precision\n\n-3-to comput e^(x), where by you enter the value of x\n\n-4-to exit\n"<<endl;
    cin>>p;
    switch(p)
    {
    case 1:
        one:
        cout<<"enter a positive number\n"<<endl;
        cin>>number;
        if(number<0){
            cout<<"invalid number!!!ERROR\n"<<endl;
            goto one;
        }
        n=factorial(number);
        cout<<"the factorial of "<<number<< " is = "  <<n<<"\n\n"<<endl;
        break;
    case 2:
        two:
        cout<<"enter the number of precision of your answer (must be greater than 0) \n"<<endl;
        cin>>n;
        if(n<=0){
            cout<<"invalid number!!!ERROR\n\n"<<endl;
            goto two;
        }
        for(i=0;i<=n;i++){
	    s=(double)factorial(i);
            e=e+(static_cast<double>(1/s));
        }
        cout<<"value of e is "<<e<<endl;
        break;
    case 3:
        cout<<"e^(x)= ,please enter the value of x :  "<<endl;
        cin>>n;
        cout<<"enter the number of precision of your answer (must be greater than 0) \n"<<endl;
        cin>>k;
        for(i=0;i<=k;i++){
            e=e+(static_cast<double>(pow(n,k))/static_cast<double>(factorial(i)));
        }
        cout<<"e^("<<n<<")=" <<e<<endl;
        break;
    case 4:
        return 0;
    default:
		cout<<"enter a correct input"<<endl;
		goto start;
		//break;

    }
    cout<<"\n\n\n"<<endl;

    goto start;
}

int factorial(int number)
{
    int n;
    if(number==0 || number==1)
    {
        return 1;
    }
    else{
        n=number * factorial(number-1);
        return n;
    }
}
