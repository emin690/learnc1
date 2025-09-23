#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &x, &y, &z);

    float average = (x + y + z) / 3.0; 
    printf("Average: %.2f\n", average); 

    return 0;
}

