outfile:add_begin.o add_end.o copy_to_file.o count_nodes.o delete_last.o main.o print.o read_from_file.o reverse_data.o reverse_links.o 
	cc add_begin.c add_end.c copy_to_file.c count_nodes.c delete_last.c main.c print.c read_from_file.c reverse_data.c reverse_links.c -o outfile
add_begin.o:add_begin.c
	cc -c add_begin.c

add_end.o:add_end.c
	cc -c add_end.c

copy_to_file.o:copy_to_file.c
	cc -c copy_to_file.c
 
count_nodes.o: count_nodes.c 
	cc -c count_nodes.c
 
delete_last.o:delete_last.c 
	cc -c delete_last.c

main.o:main.c 
	cc -c main.c

print.o:print.c 
	cc -c print.c

read_from_file.o:read_from_file.c
	cc -c read_from_file.c

reverse_data.o:reverse_data.c
	cc -c reverse_data.c

reverse_links.o:reverse_links.c
	cc -c reverse_links.c

