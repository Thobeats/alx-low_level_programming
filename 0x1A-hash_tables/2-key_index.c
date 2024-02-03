#include "hash_tables.h"
/**
 * key_index - This function returns the index of the key in the hash table
 * @key: the key of the hash table
 * @size: the size of the hash table
 *
 * Return: the index of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
