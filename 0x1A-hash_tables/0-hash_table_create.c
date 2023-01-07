#include "hash_tables.h"

#include <stdlib.h>
#include <string.h>

typedef struct hash_table_entry {
  char *key;
  void *value;
  struct hash_table_entry *next;
} hash_table_entry_t;

typedef struct hash_table {
  unsigned long int size;
  hash_table_entry_t **table;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
  hash_table_t *hash_table = NULL;

  if (size < 1) {
    return NULL;
  }

  /* Allocate the table itself. */
  if ((hash_table = malloc(sizeof(hash_table_t))) == NULL) {
    return NULL;
  }

  /* Allocate pointers to the head nodes. */
  if ((hash_table->table = malloc(sizeof(hash_table_entry_t *) * size)) == NULL) {
    return NULL;
  }
  for (unsigned long int i = 0; i < size; i++) {
    hash_table->table[i] = NULL;
  }

  hash_table->size = size;

  return hash_table;
}
