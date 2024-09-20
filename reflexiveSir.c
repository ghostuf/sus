#include <stdio.h>

int main() {
    int i, n, m;
    int R[20][2];
    int A[20];
    printf("Enter the no. of elements of Set: ");
    scanf("%d", &n);
    printf("\nEnter elements of set A = ");
    for (i = 0; i < n; i++) 
        scanf("%d", &A[i]);
    printf("Enter no of ordered pairs you want to enter: ");
    scanf("%d", &m);
    printf("\nEnter the ordered pair of sets in the format a b follwed by enter:\n ");
    for (i = 0; i < m; i++) 
        scanf("%d %d", &R[i][0],&R[i][1]);
    int r = 0;
           for (i = 0; i < m; i++) {
            if (R[i][0] == R[i][1]) 
                r++;}
        if (r == n) 
        	printf("\nThe relation is reflexiNO_VERTECESe\n");
        else if (r == 0)
        printf("\nThe relation R is irreflexiNO_VERTECESe\n");
        else
        printf("\nThe relation R is neither reflexiNO_VERTECESe nor irreflexiNO_VERTECESe\n");      

        printf("This code is run by Arun Mainali.\n");
return 0;
}
