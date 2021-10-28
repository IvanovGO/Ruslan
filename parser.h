
#include <stddef.h>


struct tnode {                // узел дерева
  char* word;                  // указатель на строку (слово)
  int count;                   // число вхождений
  struct tnode* left;          // левый потомок
  struct tnode* right;         // правый потомок
};

struct tnode * root =NULL;

int parse(struct tnode * p);
