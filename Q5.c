#include <stdio.h>


struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};

int main() {
    int N;  
    struct Laptop laptops[100];  

    printf("Enter laptops : ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("\n Enter details for Laptop : %d\n", i + 1);
        
        printf("Company Name: ");
        scanf("%s", laptops[i].company_name);
        
        printf("Processor: ");
        scanf("%s", laptops[i].processor);
        
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    printf("\nLaptop Details:\n");
    for (int i = 0; i < N; i++) {
        printf("\nLaptop :%d\n", i + 1);
        printf("Company Name: %s\n", laptops[i].company_name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
    }

    return 0;
}
