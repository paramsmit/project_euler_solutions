#include<iostream>
#define ll long long
using namespace std;
const int ll limit = 4000000;
int main(){
    int ll i = 1, j = 2, k = 3 ,sum = 2;
    
    while(1){
        k = i + j;
        if(k%2==0){
            sum = sum + k;
            if(sum>limit)
                break;
        }   
        i = j;
        j = k;    
    }

    cout<<sum;
}