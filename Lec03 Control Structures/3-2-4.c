#include <stdio.h>
int main () {
    float x[50], h[50], y[50];
    scanf("%f",&x[1]);
    for(int i=1;i<=5;i++){
        h[i+1] = (0.9f * x[i]) + (0.1f * h[i]) - 51.0f;
        y[i] = (-0.98f * h[i+1]) + 153.0f;
        x[i+1] = y[i];
        printf("%.1f ",y[i]);
    }
    return 0;
}
