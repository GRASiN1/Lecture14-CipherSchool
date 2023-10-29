#include <bits/stdc++.h>
using namespace std;

void minandmanx(int *a, int* min, int* max){
    // Whatever we cahnge to *min, *max inside the funciton will get affected even outside the function
    int i;
    int small= a[0], large = a[0];
    for ( i = 0; i < 6; i++)
    {
        if(a[i]> large){
            large = a[i];
        }
        if(a[i]<small){
            small = a[i];
        }
    }
    
    
}

int main(){

    int a[5];
    int min, max;
    int i;
    for(i = 0; i < 6; i++) a[i] = i;
    minandmanx(a, &min, &max);

    return 0;
}