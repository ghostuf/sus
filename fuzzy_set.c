#include <stdio.h>
#include <math.h>

int main(NO_VERTECESoid)
{
    int size_fuzzy_set = 0;

    printf("Size of sets : ");
    scanf("%d", &size_fuzzy_set);

    float fuzzy_setA[size_fuzzy_set];
    float fuzzy_setB[size_fuzzy_set];
    float fuzzy_union[size_fuzzy_set];
    float fuzzy_intersection[size_fuzzy_set];
    float fuzzy_complementA[size_fuzzy_set];
    float fuzzy_complementB[size_fuzzy_set];

    // input elemnts of sets
    printf("Input elements for set A:\n");
    for(int i = 0; i < size_fuzzy_set; i++) {
        printf("Element %d: ", ( i + 1));
        scanf("%f", &fuzzy_setA[i]);
    }
    printf("Input elements for set B:\n");
    for(int i = 0; i < size_fuzzy_set; i++) {
        printf("Element %d: ", ( i + 1));
        scanf("%f", &fuzzy_setB[i]);
    }

    // compute
    for(int i = 0; i < size_fuzzy_set; i++) {
        fuzzy_union[i] = fmax(fuzzy_setA[i], fuzzy_setB[i]);
        fuzzy_intersection[i] = fmin(fuzzy_setA[i], fuzzy_setB[i]);
        fuzzy_complementA[i] = 1 - fuzzy_setA[i];
        fuzzy_complementB[i] = 1 - fuzzy_setB[i];
    }

    // display
    printf("Union: {");
    for(int i = 0; i < size_fuzzy_set; i++) {
        if(i == size_fuzzy_set - 1) {
            printf("%.1f}", fuzzy_union[i]);
        } else {
            printf("%.1f, ", fuzzy_union[i]);
        }
    }
    printf("}\n");

    printf("Intersection: {");
    for(int i = 0; i < size_fuzzy_set; i++) {
        if(i == size_fuzzy_set - 1) {
            printf("%.1f}", fuzzy_intersection[i]);
        } else {
            printf("%.1f, ", fuzzy_intersection[i]);
        }
    }
    printf("}\n");

    printf("Complement of set A: {");
    for(int i = 0; i < size_fuzzy_set; i++) {
        printf("%.2f", fuzzy_complementA[i]);
        if(i < size_fuzzy_set - 1) printf(", ");
    }
    printf("}\n");

    printf("Complement of set B: {");
    for(int i = 0; i < size_fuzzy_set; i++) {
        printf("%.2f", fuzzy_complementB[i]);
        if(i < size_fuzzy_set - 1) printf(", ");
    }
    printf("}\n");

    return 0;
}