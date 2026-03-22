#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node Node;

Node *create_linked_list(int data);
void insert_node_linked_list(Node *head, int data);
void print_linked_list(const Node *head);
void delete_linked_list(Node *head);

#endif // !LINKEDLIST_H
