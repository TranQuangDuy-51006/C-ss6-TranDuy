#include <stdio.h>
#include<math.h> 

int main() {
   float a, b, c, x, delta;

    printf("nhap a: ");
    scanf("%f", &a);
    printf("nhap b: ");
    scanf("%f", &b);
    printf("nhap c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("pt co vo so nghiem.\n");
            } else {
                printf("pt vo nghiem\n");
            }
        } else {
            printf("pt co 1 nghiem du nhat: x = %.2f\n", -c / b);
        }
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("pt vo nghiem\n");
        } else if (delta == 0) {
            x = -b / (2 * a);
            printf("pt co nghiem kep: x = %.2f\n", x);
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("pt co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}
