#include <stdio.h>

int main()
{
  int size_set1;
  int size_set2;
  int size_union = 0;

  // input set sizes
  printf("Size of set 1: ");
  scanf("%d", &size_set1);

  printf("Size of set 2: ");
  scanf("%d", &size_set2);

  int set1[size_set1];
  int set2[size_set2];
  int union_set[size_set1 + size_set2];

  // input set elements
  printf("Set 1:\n");
  for (int i = 0; i < size_set1; i++) {
    printf("Element %d: ", (i + 1));
    scanf("%d", &set1[i]);
  }
  printf("Set 2:\n");
  for (int i = 0; i < size_set2; i++) {
    printf("Element %d: ", (i + 1));
    scanf("%d", &set2[i]);
  }

  // assigning union set
  for (int i = 0; i < size_set1; i++) {
    union_set[size_union++] = set1[i];
  }

  // checking the members of sets
    for (int i = 0; i < size_set2; i++) {
        int check = 0;
        for (int j = 0; j < size_set1; j++) {
            if (set2[i] == set1[j]) {
                check = 1;
                break;
            }
        }
        if (check == 0) {
            union_set[size_union++] = set2[i];
        }
    }

  // displaying the union set
  printf("A U B = { ");
  for (int i = 0; i < size_union; i++) {
      printf("%d", union_set[i]);
      if (i < size_union - 1) {
          printf(", ");
      }
  }
  printf(" }\n");
  printf("This code is run by Arun Mainali.\n");

  return 0;
}
