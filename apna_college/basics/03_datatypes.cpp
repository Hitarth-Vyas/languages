#include<iostream>
using namespace std;

int main()
{
    int a;
    a = 12;

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool "<<sizeof(d)<<endl;

    short int si;
    long long int li;
    li = 324823827293;
    unsigned int ui;
    signed int sgi;

    cout<<"size of short int "<<sizeof(si)<<endl;
    cout<<"size of long long int "<<sizeof(li)<<endl;
    cout<<"size of unsigned int "<<sizeof(ui)<<endl;
    cout<<"size of signed int "<<sizeof(sgi)<<endl;

    return 0;
}