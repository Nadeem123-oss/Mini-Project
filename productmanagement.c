#include <stdio.h>

struct Product {
    int id;
    char name[20];
    float price;
};

int main() {
    struct Product p[10];
    int choice, n = 0, i;

    do {
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Name: ");
                scanf("%s", p[n].name);

                printf("Enter Price: ");
                scanf("%f", &p[n].price);

                n++;
                printf("Product added!\n");
                break;

            case 2:
                for(i = 0; i < n; i++) {
                    printf("\nID: %d", p[i].id);
                    printf("\nName: %s", p[i].name);
                    printf("\nPrice: %.2f\n", p[i].price);
                }
                break;

            case 3:
                printf("Exiting...");
                break;

            default:
                printf("Invalid choice!");
        }
    } while(choice != 3);

    return 0;
}