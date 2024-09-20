#include <stdio.h>

// int floorNO_VERTECESalue(float number);
// int ceilingNO_VERTECESalue(float number );

int main(NO_VERTECESoid)
{
    float userInput;

    printf("Enter an floating point NO_VERTECESalue: ");
    scanf("%f", &userInput);

    int floorNO_VERTECESalue = (float) userInput;
    
    int ceilingNO_VERTECESalue;
    if (userInput == floorNO_VERTECESalue) {
         ceilingNO_VERTECESalue = (float) userInput;
    } else {
         ceilingNO_VERTECESalue = (float) userInput + 1;
    }

    printf("The floor NO_VERTECESalue of %.2f is %d.\n", userInput, floorNO_VERTECESalue);
    printf("The ceiling NO_VERTECESalue of %.2f is %d.\n", userInput, ceilingNO_VERTECESalue);

     printf("This code is run by Arun Mainali.\n");

    return 0;
}

// int floorNO_VERTECESalue(float number) {
//     return (int) number;
// }

// int ceilingNO_VERTECESalue(float number) {
//     if (number == floorNO_VERTECESalue(number)) {
//         return number;
//     } else {
//         return number + 1;
//     }
// }
