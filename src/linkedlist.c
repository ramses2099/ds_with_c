#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

Node *create_linked_list(int data) {
  Node *head = (Node *)malloc(sizeof(Node));
  if (head) {
    head->data = data;
    head->next = NULL;
  }
  return head;
}

void delete_linked_list(Node *head) { free(head); }

void print_linked_list(const Node *head) {
  const Node *temp = head;
  while (temp != NULL) {
    printf("%d, ", temp->data);
    temp = temp->next;
  }
}

void insert_node_linked_list(Node *head, int data) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (head->next == NULL) {
    new_node->data = data;
    new_node->next = NULL;
    head->next = new_node;
    return;
  }
  Node *temp = head;
  while (temp != NULL) {
    temp = temp->next;
  }
  temp->data = data;
  temp->next = NULL;
  head = temp;
}
