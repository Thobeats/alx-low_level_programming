#include "hash_tables.h"

/**
 * hash_table_create - this functions creates a hash_table
 *
 * @size: the size of the table
 * Return: a hash_table element
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int count;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
	{
		return (NULL);
	}
	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashTable->array == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
		hashTable->array[count] = NULL;
	return (hashTable);
}
