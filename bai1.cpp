#include <stdio.h>

int main() {
    // Add your code in here:
    int n;
    int count = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    // Write your output here:
    printf("The number of occurrences of even number is %d\n", count);
	
    return 0;
}
