#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct data
{
	char data[20];
	struct data *next;
}ST;
void add_begin(ST **);
void delete_last(ST **,int);
void print(ST *);
void reverse_links(ST **);
void add_end(ST **);
void copy_to_file(ST *);
int count_nodes(ST *);
void read_from_file(ST **);
void reverse_data(ST *);

