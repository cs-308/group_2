#include "functions.h"
#include<iostream>

int gcd(int a, int c) {
    while(a!=c) {
        if(a>c) a-=c;
        else c-=a;
    }
    return a;
}

int hcf(int n1, int n2){
    if(n2!=0)
        return hcf(n2, n1%n2);
    else return n1;
}