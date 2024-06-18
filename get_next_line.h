/*
** EPITECH PROJECT, 2018
** get_next_line.h
** File description:
**
*/

#ifndef  READ_SIZE
#define  READ_SIZE (1)
#endif  /* !READ_SIZE  */

#ifndef GET_NEXT_LINE_H_
#define GET_NEXT_LINE_H_

	#include <unistd.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <fcntl.h>

	char *my_realloc(char *src, int pos);
	int get_position(int fd, char *buff, char *content, int i);
	char *process_content(char *content, int i);
	char *get_next_line(int fd);

#endif /* !GET_NEXT_LINE_H_ */
