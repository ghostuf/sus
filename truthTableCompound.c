#include <stdio.h>

int main() {
  char P[] = { 'F', 'F', 'T', 'T'};
  char Q[] = { 'F', 'T', 'F', 'T'};

  char p[] = { 0, 0, 1, 1};
  char q[] = { 0, 1, 0, 1};

  int negp, negq, pimpq, pbimq, pconq, pdisq, pxorq;
  printf("p\tq\t~p\t~q\tp^q\tpvq\tp->q\tp<->q\tp xor q");
  for (int i = 0; i < 4; i++) {
    // negation P
    if (p[i] == 0) negp = 'T';
    else negp = 'F';
    // negation Q
    if (q[i] == 0) negq = 'T';
    else negq = 'F';
    // conjuction
    if (p[i] == 1 && q[i] == 1 ) pconq = 'T';
    else pconq = 'F';
    // disjunction
    if (p[i] == 1 || q[i] == 1 ) pdisq = 'T';
    else pdisq = 'F';
    // implication
    if (p[i] == 1 && q[i] == 0) pimpq = 'F';
    else pimpq = 'T';
    // biimplication
    if (p[i] == q[i]) pbimq = 'T';
    else pbimq = 'F';
    // exclusive or
    if (p[i] == q[i]) pxorq = 'F';
    else pxorq = 'T';

    printf("\n%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c", P[i], Q[i], negp, negq, pconq, pdisq, pimpq, pbimq, pxorq);
  }

  printf("\nThis code is run by Arun Mainali.\n");

  return 0;
}

