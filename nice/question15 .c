#include <stdio.h>

int main() {
    int n;
    printf("Enter number of denominations: ");
    scanf("%d", &n);

    int denomination, remainingAmount, noteCount = 0, totalNotes = 0;

    printf("Enter %d denominations in descending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &denomination);
        if (i == 0) {
            printf("Enter amount to withdraw: ");
            scanf("%d", &remainingAmount);
        }
        int tempNoteCount = 0;
        while (remainingAmount >= denomination) {
            remainingAmount -= denomination;
            tempNoteCount++;
        }
        if (tempNoteCount > 0) {
            printf("%d x %d\n", tempNoteCount, denomination);
            totalNotes += tempNoteCount;
        }
    }

    if (remainingAmount != 0) {
        printf("Cannot dispense the exact amount with given denominations.\n");
    } else {
        printf("Total notes dispensed: %d\n", totalNotes);
    }

    return 0;
}
