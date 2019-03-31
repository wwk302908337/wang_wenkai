#include <iostream>
using namespace std;
class Complex
{
private:
double real;
double imag;
public:
 Complex(){real=0;imag=0;}
 Complex(double r,double i);
    void display();
    Complex operator + (Complex &c1);
    Complex operator - (Complex &c1);
    Complex operator * (Complex &c1);
    Complex operator / (Complex &c1);
};
Complex::Complex(double r,double i)
{real=r;imag=i;}
Complex Complex::operator+(Complex &c1)
{
 Complex c;
 c.real=real+c1.real;
 c.imag=imag+c1.imag;
 return c;
}
Complex Complex::operator-(Complex &c1)
{
 Complex c;
 c.real=real-c1.real;
 c.imag=imag-c1.imag;
 return c;
}

Complex Complex::operator*(Complex &c1)
{

    Complex c;
    c.real=real*c1.real-imag*c1.imag;
    c.imag=real*c1.imag+imag*c1.real;
    return c;
}
Complex Complex::operator/(Complex &c1)
{
 Complex c;
 c.real=(real*c1.real+imag*c1.imag)/(c1.real*c1.real+c1.imag*c1.imag);
 c.imag=(imag*c1.real-real*c1.imag)/(c1.real*c1.real+c1.imag*c1.imag);
 return c;
}
void Complex::display()
{
    cout<<"("<<real;
    if(imag>0)cout<<"+"<<imag<<"i)"<<endl;
    else if(imag<0)cout<<imag<<"i)"<<endl;
 else cout<<")"<<endl;
}
int main()
{//这里是一些使用的例子，供参考，望采纳。
 Complex c1(3,4),c2(5,8),c3,c4,c5,c6;
 c3=c1+c2;
 c4=c1-c2;
 c5=c1*c2;
 c6=c1/c2;
 c1.display();
 c2.display();
 c3.display();
 c4.display();
 c5.display();
 c6.display();
 return 0;
}
