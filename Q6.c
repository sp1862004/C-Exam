#include <stdio.h>

#define FRUITS  100  
#define LENGTH 100  

int main() {
    int N;  
    char fruits[FRUITS][LENGTH];  
    char colors[FRUITS][LENGTH];  

    printf("Enter the number of fruits (max %d): ", FRUITS);
    scanf("%d", &N);

    if (N < 1 || N > FRUITS) {
        printf("Invalid number of fruits. Please enter a number between 1 and %d.\n", FRUITS);
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("Enter fruit %d name: ", i + 1);
        scanf("%s", fruits[i]);  
        
        printf("Enter color of %s: ", fruits[i]);
        scanf("%s", colors[i]);  
    }

    
    FILE *file = fopen("data.txt", "w");  
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  
    }

    fprintf(file, "Fruits and their colors:\n");
    for (int i = 0; i < N; i++) {
        fprintf(file, "Fruit: %s, Color: %s\n", fruits[i], colors[i]);
    }

    fclose(file);

    printf("Data written to data.txt successfully!\n");  

    return 0;
}
