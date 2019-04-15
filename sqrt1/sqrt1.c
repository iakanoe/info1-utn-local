#include <stdio.h>
#include <math.h>

int main(){
    double data;
    scanf("%lf", &data);

    char imaginary = 0;
    if(data < 0) {
        data = -data;
        imaginary = 'i';
    }

    double result = sqrt(data);
    printf("sqrt(%lf) = %lf%c", data, result, imaginary);
    return 0;
}
