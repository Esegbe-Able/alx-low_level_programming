#include "hash_tables.h"

/**
 * key_index - The key_index function gets the index at
 * which a key/valuepair should be stored in arrary of
 * a hash table.
 * @key: key to get the index
 * @size: size of the array of the hash table.
 *
 * Return: The index of the key
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
