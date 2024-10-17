#include <stdio.h>

// Function prototypes
float calculateBill(int unitsConsumed);
float add(float a, float b);
float multiply(float a, float b);
float calculateSurcharge(float totalBill);

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float totalBill, surcharge, finalBill;
    
    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    
    // Calculate total bill
    totalBill = calculateBill(unitsConsumed);
    
    // Apply surcharge if bill exceeds Kshs 400
    if (totalBill > 400) {
        surcharge = calculateSurcharge(totalBill);
        finalBill = add(totalBill, surcharge); // totalBill + surcharge
    } else {
        finalBill = totalBill;
    }
    
    // Ensure minimum bill is 100 Kshs
    if (finalBill < 100) {
        finalBill = 100;
    }
    
    // Display the bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Amount to Pay: Kshs %.2f\n", finalBill);
    
    return 0;
}

// Function to calculate the bill based on units consumed
float calculateBill(int unitsConsumed) {
    float chargePerUnit, totalBill;
    
    if (unitsConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }
    
    totalBill = multiply(unitsConsumed, chargePerUnit); // unitsConsumed * chargePerUnit
    return totalBill;
}

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;
}

// Function to calculate 15% surcharge if applicable
float calculateSurcharge(float totalBill) {
    return multiply(totalBill, 0.15); // 15% surcharge
}
