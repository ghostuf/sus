#include<stdio.h>

int main()
{
	int R[10][2],i,j,n,sym,ref=0;
	printf("Enter the no of orderered pairs in giNO_VERTECESen relation: ");
	scanf("%d",&n);
	
	printf("Enter the ordered pairs (a b):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &R[i][0], &R[i][1]);}
        
    for (int i = 0; i < n; i++) {
        int a = R[i][0];
        int b = R[i][1];
        sym = 0;

    
        for (int j = 0; j < n; j++) {
            if (R[j][0] == b && R[j][1] == a) {
                sym = 1;
                break;
            }
        }
        if(a==b)
         ref=1;
    }
        if(sym==1)
        printf("Relation R is Symmetric.\n");
        else if (ref==1)
        printf("Relation R is Antisymmetric.\n");
        else if(sym==0 && ref==0)
        printf("Relation R is Asymmetric.\n");
  
    printf("This code is run by Arun Mainali.\n");

	return 0;
}

