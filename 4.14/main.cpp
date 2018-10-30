#include <iostream>

using namespace std;

int main()
{


    double a=0;
    double b=0;
    double c=0;
    double d=0;
    double e=0;

    cout<<"Enter account number(or -1 to quit):";
    cin>>a;


while(a!=-1)
{

    cout<<"Enter beginning balance:";
    cin>>b;
    cout<<"Enter total charges:";
    cin>>c;
    cout<<"Enter total credits:";
    cin>>d;
    cout<<"Enter credit limit:";
    cin>>e;


    double f;
    f=b+c-d;
    cout<<"New balance is"<<f<<endl;

    if(f>e)
{
        cout<<"Account:"<<a<<endl;
        cout<<"Credit limit:"<<e<<endl;
        cout<<"Balance:"<<f<<endl;
        cout<<"Credit Limit Exceeded.\n"<<endl;
}

    cout<<"Enter account number(or -1 to quit):";
    cin>>a;

}
    return 0;


}
