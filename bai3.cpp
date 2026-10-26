#include <stdio.h>

int main() {
    // Add your code in here:
    int n;
    int sum = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
    printf("Sum of digits in %d is %d\n", n, sum);
	
    return 0;
}
