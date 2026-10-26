#include <stdio.h>

int main() {
    // Add your code in here:
    int n;
    int sum = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
    printf("result is %d\n", sum);
	
    return 0;
}
