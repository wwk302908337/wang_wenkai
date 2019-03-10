#include<iostream>
using namespace std;
const int R=3, C=4;
class Matrix{
double a[R][C];
public:
Matrix operator+(Matrix& d)
{
Matrix temp;
for(int i = 0 ; i<R; i++)
for(int j = 0 ; j<C ; j++)
temp.a[i][j]=a[i][j]+d.a[i][j];
return temp;
}
void Input()
{
cout<<"ÇëÊäÈë" <<R <<"*" <<C <<"¾ØÕó:";
for(int i = 0 ; i<R ; i++)
for(int j = 0; j<C ; j++){
cout <<"a[" <<i <<"][" <<j <<"]=";
cin>> a[i][j];
}
}
void display(){
for(int i = 0 ; i<R; i++){
for(int j = 0 ; j<C ; j++)
cout <<a[i][j] <<" ";
cout <<endl;
}
}
};
