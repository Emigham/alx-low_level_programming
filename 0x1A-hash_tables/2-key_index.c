#include "hash_tables.h"

/**
 * key_index - The function that gives index of a key
 *
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: index at which the key pair
 * should be stored in the array of hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
