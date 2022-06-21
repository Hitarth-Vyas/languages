#include<iostream>
#include<math.h>
using namespace std;

void primes(int a, int b){
    for(int i = a; i<=b; i++){
    int f = 0;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                f = 1;
                break;
            }
        }
        if(f == 0){
            cout<<i<<", ";
        }
    }
}

// bool isprime(int num){
//     for(int i = 2; i<=sqrt(num); i++){
//         if(num%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

int main(){
    int a, b;
    cin>>a>>b;

    primes(a, b);

    // for(int i = a; i<=b; i++){
    //     if(isprime(i)){
    //         cout<<i<<endl;
    //     }
    // }

    return 0;
}