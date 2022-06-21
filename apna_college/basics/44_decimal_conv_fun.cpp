#include <bits/stdc++.h>
// #include<iostream>
// #include<math.h>
using namespace std;

int binDec(int b)
{
    int a = 0;
    for (int i = 0; b != 0; i++)
    {
        int rem = b % 10;
        a = a + rem * pow(2, i);
        b /= 10;
    }
    return a;
}

int binDec2(int n)
{
    int a = 0;
    int x = 1;

    while (n > 0)
    {
        int y = n % 10;
        a += x * y;
        x *= 2;
        n /= 10;
    }

    return a;
}

int octDec(int o)
{
    int a = 0;
    for (int i = 0; o != 0; i++)
    {
        int rem = o % 10;
        a = a + rem * pow(8, i);
        o /= 10;
    }
    return a;
}

int octDec2(int n)
{
    int a = 0;
    int x = 1;

    while (n > 0)
    {
        int y = n % 10;
        a += x * y;
        x *= 8;
        n /= 10;
    }

    return a;
}

int hexDec(string n)
{
    int a = 0, x = 1;
    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            a += x * (n[i] - '0');
        }

        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            a += x * (n[i] - 'A' + 10);
        }

        else if (n[i] >= 'a' && n[i] <= 'f')
        {
            a += x * (n[i] - 'a' + 10);
        }

        x *= 16;
    }

    return a;
}

long long decBin(int n)
{
    long long a = 0;
    int x = 1;

    while (n != 0)
    {
        int rem = n % 2;
        a += x * rem;
        n /= 2;
        x *= 10;
    }

    return a;
}

long long decBin2(int n)
{
    int x = 1;
    long long a = 0;

    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        a = a * 10 + lastDigit;
    }
    return a;
}

int decOct(int n)
{
    int a = 0, x = 1;

    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;

    while (x != 0)
    {
        int num = n / x;
        n -= num * x;
        x /= 8;
        a = a * 10 + num;
    }

    return a;
}

string decHex(int n)
{
    string a = "";
    int x = 1;

    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;

    while (x != 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 10;

        if (lastDigit <= 9)
        {
            a += to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            a.push_back(c);
        }
    }

    return a;
}

int reverse (int n) {
    int ans = 0;
    while (n>0) {
        int lastDigit = n%10;
        ans = ans*10 + lastDigit;
        n /= 10;
    }
    return ans;
}

int addBin(int a, int b) {
    int ans = 0;
    int prevCarry = 0;

    while (a>0 && b>0) {
        if (a%2 == 0 && b%2 == 0) {
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)) {
            if (prevCarry == 1) {
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else {
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a>0) {
        if (prevCarry == 1) {
            if (a%2 == 1) {
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans*10 +1;
                prevCarry = 0;
            }
        }
        else {
            ans = ans*10 + (a%2);
        }
        a /= 10;
    }

    while (b>0) {
        if (prevCarry == 1) {
            if (b%2 == 1) {
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans*10 +1;
                prevCarry = 0;
            }
        }
        else {
            ans = ans*10 + (b%2);
        }
        b /= 10;
    }

    if (prevCarry == 1) {
        ans = ans*10 + 1;
    }

    ans = reverse(ans);

    return ans;
}

int main()
{
    int a, b;
    // string h;

    // cout<<"Enter an number"<<endl;
    // cin>>b;
    // cin>>h;

    cin >> a >> b;

    // cout<<binDec2(b);
    // cout<<octDec(b);
    // cout<<binDec(b);
    // cout<<hexDec(h);
    // cout<<decBin(b);
    // cout<<decBin2(b);
    // cout<<decOct(b);
    // cout<<decHex(b);
    cout << addBin(a, b) << endl;

    return 0;
}