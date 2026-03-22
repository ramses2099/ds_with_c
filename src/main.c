#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Nodeo;

// head node linked list
struct Node *head;

int main(void) {
  head = NULL; // empty linked list
  printf("How many numbers?\n");
  int n, i, x;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter the numbers: \n");
    scanf("%d", &x);
    // add number to the linked list
  }

  return 0;
}
