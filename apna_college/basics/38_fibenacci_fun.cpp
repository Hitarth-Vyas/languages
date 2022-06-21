#include<iostream>
using namespace std;

// void fibenacci(int num){
//     int a=0, b=1;
//     if(num == 1){
//         cout<<a<<endl;
//     }
//     else if(num == 2){
//         cout<<a<<endl;
//         cout<<b<<endl;
//     }
//     else{
//         cout<<a<<endl;
//         cout<<b<<endl;
//         int c;
//         for(int i=3; i<=num; i++){
//             c = b;
//             b += a;
//             cout<<b<<endl;
//             a = c;
//         }
//     }
// }

void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i=1; i<=n; i++){
        cout<<t1<<endl;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main(){
    int n;
    cin>>n;

    // fibenacci(n);
    fib(n);

    return 0;
}