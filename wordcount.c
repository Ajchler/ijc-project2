// wordcount.c
// Řešení IJC-DU2, druhy ukol
// Autor: Vojtěch Eichler (xiechl01)
// Fakulta informačních technologií VUT Brno
// Datum: 9. 4. 2021

#include <stdio.h>
#include <stdlib.h>
#include "htab.h"
#include "io.c"

// max word size, 127 regular characters + end of string character
#define MAX_SIZE 128

// I chose 10781 as my array size, which is the next bigger prime number than
// 10778, which I found to be the highest unique word count from few selected 
// books (source: http://www.tylervigen.com/literature-statistics ), I am using
// prime number because hashing works better if mod is prime
#define ARRAY_SIZE 10781

void print_pair(htab_pair_t *data) {
	printf("%s\t%d",data->key, data->value);
}

int main(void) {
	FILE *f = stdin;
	char word[MAX_SIZE];
	htab_pair_t *data;
	htab_t *hash_table = htab_init(ARRAY_SIZE);
	if (!hash_table) {
		fprintf(stderr, "ERROR: Hash table allocation failed");
		return 1;
	}
	
	while (read_word(word, MAX_SIZE, f) != EOF) {
		
	}

	htab_free(hash_table);	
	return 0;
}
