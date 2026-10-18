
#include <stdio.h>

int main() {
    int choice, quantity;
    char meal[30];
    float price, subtotal, discount, total;

    printf("===== RESTAURANT MENU =====\n");
    printf("1. Burger       - P80.00\n");
    printf("2. Chicken Meal - P120.00\n");
    printf("3. Spaghetti    - P95.00\n");

    printf("\nEnter your meal choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            price = 80;
            printf(meal, "Burger");
            break;

        case 2:
            price = 120;
            printf(meal, "Chicken Meal");
            break;

        case 3:
            price = 95;
            printf(meal, "Spaghetti");
            break;

        default:
            printf("Invalid meal choice!\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 0) {
        printf("Invalid quantity!\n");
        return 0;
    }

    subtotal = price * quantity;

    if (subtotal >= 500) {
        discount = subtotal * 0.05;
    } else {
        discount = 0;
    }

    total = subtotal - discount;

    printf("\n===== ORDER RECEIPT =====\n");
    printf("Selected Meal: %s\n", meal);
    printf("Quantity: %d\n", quantity);
    printf("Subtotal: P%.2f\n", subtotal);
    printf("Discount: P%.2f\n", discount);
    printf("Total: P%.2f\n", total);

    return 0;
}
