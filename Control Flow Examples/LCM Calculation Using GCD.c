#include <stdio.h>
int main() {
    int n, m, i, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n, &m);

    for (i = 1; i <= n && i <= m; ++i) {

        // check if i is a factor of both integers
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }

    lcm = (n * m) / gcd;

    printf("The LCM is %d\n", lcm);
    return 0;
}
