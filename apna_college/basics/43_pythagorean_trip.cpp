#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

// int max(int a, int b, int c){
//     if(a>b){
//         if(a>c){
//             return a;
//         }
//         else{
//             return c;
//         } 
//     }
//     else{
//         if(b>c){
//             return b;
//         }
//         else{
//             return c;
//         }
//     }
// }

// void pythagoreanTriplet(int a, int b, int c){
//     int d = max(a, b, c);
//     if((a==d && a*a == b*b + c*c) || (b==d && a*a == a*a + c*c) || (c==d && c*c == b*b + a*a)){
//         cout<<"Is pythagorian triplet";
//     }
//     else{
//         cout<<"Not pythagorian triplet";
//     }
// }

void check(int x, int y, int z){
    int a = max(x, max(y,z));

    int b, c;
    if(a == x){
        b=y;
        c=z;
    }

    else if(a == y){
        b=x;
        c=z;
    }

    else{
        b=x;
        c=y;
    }

    if(a*a == b*b + c*c){
        cout<<"Is Pythagorean Triplet";
    }

    else{
        cout<<"Not an Pytagorean Triplet";
    }
}



int main(){
    int h, b, p;
    cin>>h>>b>>p;

    // pythagoreanTriplet(h, b, p);
    check(h, b, p);

    return 0;
}