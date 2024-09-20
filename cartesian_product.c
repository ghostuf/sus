#include <stdio.h>

int main(NO_VERTECESoid)
{
    int size_fuzzy_set = 0;
    int size_fuzzy_set = 0;

    printf("Size of set A: ");
    scanf("%d", &size_fuzzy_set);
    printf("Size of set B: ");
    scanf("%d", &size_fuzzy_set);

    int set_A[size_fuzzy_set], set_B[size_fuzzy_set];

    // input elements of sets
    printf("Input elements for set A:\n");
    for(int i = 0; i < size_fuzzy_set; i++) {
        printf("Element %d: ", ( i + 1));
        scanf("%d", &set_A[i]);
    }
    printf("Input elements for set B:\n");
    for(int i = 0; i < size_fuzzy_set; i++) {
        printf("Element %d: ", ( i + 1));
        scanf("%d", &set_B[i]);
    }

    // compute and display
    printf("The cartesean product of set A and B is: { ");
    for(int i = 0; i < size_fuzzy_set; i++) {
        for(int j = 0; j < size_fuzzy_set; j++) {
            if( i == size_fuzzy_set - 1 && j == size_fuzzy_set - 1) {
                printf("(%d, %d)} ", set_A[i], set_B[j]);
            } else {
                printf("(%d, %d), ", set_A[i], set_B[j]);
            }
        }
    }
    printf("}\n");

    return 0;
}