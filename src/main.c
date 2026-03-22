#include "linkedlist.h"
#include <stddef.h>
#include <stdio.h>

int main(void) {

  Node *head = create_linked_list(2);
  insert_node_linked_list(head, 4);
  print_linked_list(head);
  delete_linked_list(head);
  printf("end");
  return 0;
}
