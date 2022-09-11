#include "functions.h"
#include<iostream>

int gcd(int a, int c) {
    while(a!=c) {
        if(a>c) a-=c;
        else c-=a;
    }
    return a;
}

int hcf(int x, int y){
    if(y!=0)
        return hcf(y, x%y);
    else return x;
}