#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float min(float a, float b, float c){
    if ((a<b)&&(a<c)){
        return a;
    }
    if ((b<a)&&(b<c)){
        return b;
    }
    if ((c<a)&&(c<b)){
        return c;
    }
    return a;
}

int main(){
    float x;
    float a;
    float hx = 0.2;
    float ha = 1.0;
    float z;
    for(x = 0.1; x <= 0.3 + 0.001; x = hx + x){
        for(a = 2.0; a <= 4.0 + 0.001; a = ha + a){
            float p1 = sqrt(sin(a / x));
            float p2 = sin(a) / x;
            float p3 = cbrt(a) * asin(x);
            z = min(p1, p2, p3);
            printf("x = %.2f, a = %.1f, z = %.4f\n", x, a, z);
        }
    }
    return 0;
}
