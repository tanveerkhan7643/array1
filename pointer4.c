#include <stdio.h>

// structure define
struct Consumer {
    int units;
    float bill_amount;
};

// function to calculate total bill amount
float totalBill(struct Consumer *c, int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += c[i].bill_amount;   // pointer ke through access
    }
    return total;
}

// function to sort consumers by bill_amount (ascending)
void sortConsumers(struct Consumer *c, int n) {
    struct Consumer temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (c[i].bill_amount > c[j].bill_amount) {
                // swap
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of consumers: ");
    scanf("%d", &n);

    struct Consumer consumers[n];  // array of structures

    // input
    for (int i = 0; i < n; i++) {
        printf("\nEnter units for consumer %d: ", i + 1);
        scanf("%d", &consumers[i].units);

        // simple bill calculation (example: Rs 5 per unit)
        consumers[i].bill_amount = consumers[i].units * 5.0;
    }

    // total bill
    float total = totalBill(consumers, n);
    printf("\nTotal Bill Amount of all consumers = %.2f\n", total);

    // sort consumers
    sortConsumers(consumers, n);

    // display sorted data
    printf("\nConsumers in Ascending Order of Bill Amount:\n");
    for (int i = 0; i < n; i++) {
        printf("Consumer %d: Units = %d, Bill = %.2f\n", 
                i + 1, consumers[i].units, consumers[i].bill_amount);
    }

     // 🔹 NEW FEATURE: Consumers with bill > 2000
    printf("\nConsumers with Bill Amount > 2000:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (consumers[i].bill_amount > 2000) {
            printf("Consumer %d: Units = %d, Bill = %.2f\n", 
                    i + 1, consumers[i].units, consumers[i].bill_amount);
            found = 1;
        }
    }
    if (!found) {
        printf("No consumer has bill greater than 2000.\n");
    }

    return 0;
}
    
