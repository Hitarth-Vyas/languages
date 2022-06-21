#include<iostream>
using namespace std;

int main(){
    int pm = 3000;
    for(int date = 1; date<=30; date++){
        
        if(date%2 == 0){
            continue;
        }

        if(pm == 0){
            break;
        }

        cout<<"Go out today!"<<endl;
        pm -= 300;
    }
}