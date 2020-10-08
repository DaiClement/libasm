/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdai <cdai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:59:45 by cdai              #+#    #+#             */
/*   Updated: 2020/10/08 14:19:39 by cdai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main()
{
	int fd;
	char *no_malloc;
	char src[] = "coucou";
	char *dest = calloc(1, 7);

/* strlen */
	printf("\t|| ft_strlen ||");
printf("\n");

printf("test 1");
printf("\n");
	printf("strlen(\"pouet\"): \t|%ld|", strlen("pouet"));
printf("\n");
	printf("ft_strlen(\"pouet\"): \t|%d|", ft_strlen("pouet"));
printf("\n");

/*
printf("test segfault time-to-time (cause of luck)");
printf("\n");
	printf("strlen(no_malloc): \t|%ld|", strlen(no_malloc));
printf("\n");
	printf("ft_strlen(no_malloc): \t|%d|", ft_strlen(no_malloc));
printf("\n");
*/

printf("test 2");
printf("\n");
	printf("strlen(\"\"): \t\t|%ld|", strlen(""));
printf("\n");
	printf("ft_strlen(\"\"): \t\t|%d|", ft_strlen(""));
printf("\n");
	
/*
printf("test segfault");
printf("\n");
	printf("strlen(NULL): \t\t|%ld|", strlen(NULL));
printf("\n");
	printf("ft_strlen(NULL): \t\t|%d|", ft_strlen(NULL));
printf("\n");
*/
	
printf("\n");

/* strcpy */
printf("\t|| ft_strcpy ||");
printf("\n");

printf("test 1");
printf("\n");
bzero(dest, 7);
*dest = 'p';
	printf("before strcpy src: \t|%s|, dest: \t|%s|", src, dest);
printf("\n");
	printf("strcpy(dest, src): \t|%s|", strcpy(dest, src));
printf("\n");
	printf("after strcpy src: \t|%s|, dest: \t|%s|", src, dest);
printf("\n");
bzero(dest, 7);
*dest = 'p';
	printf("before ft_strcpy src: \t|%s|, dest: \t|%s|", src, dest);
printf("\n");
	printf("ft_strcpy(dest, src): \t|%s|", ft_strcpy(dest, src));
printf("\n");
	printf("after ft_strcpy src: \t|%s|, dest: \t|%s|", src, dest);
printf("\n");

// SEGFAULT
/*
printf("test segfault");
printf("\n");
bzero(dest, 7);
*dest = 'p';
	printf("before strcpy src: \t|NULL|, dest: \t|%s|", dest);
printf("\n");
	printf("strcpy(dest, NULL): \t|%s|", strcpy(dest, NULL));
printf("\n");
	printf("after strcpy src: \t|NULL|, dest: \t|%s|", dest);
printf("\n");
bzero(dest, 7);
*dest = 'p';
	printf("before ft_strcpy src: \t|NULL|, dest: \t|%s|", dest);
printf("\n");
	printf("ft_strcpy(dest, NULL): \t|%s|", ft_strcpy(dest, NULL));
printf("\n");
	printf("after ft_strcpy src: \t|NULL|, dest: \t|%s|", dest);
printf("\n");
*/

/*
printf("test segfault");
printf("\n");
bzero(dest, 7);
*dest = 'p';
	printf("before strcpy src: \t|%s|, dest: \t|NULL|", src);
printf("\n");
	printf("strcpy(NULL, src): \t|%s|", strcpy(NULL, src));
printf("\n");
	printf("after strcpy src: \t|%s|, dest: \t|NULL|", src);
printf("\n");
bzero(dest, 7);
*dest = 'p';
	printf("before ft_strcpy src: \t|%s|, dest: \t|NULL|", src);
printf("\n");
	printf("ft_strcpy(NULL, src): \t|%s|", ft_strcpy(NULL, src));
printf("\n");
	printf("after ft_strcpy src: \t|%S|, dest: \t|NULL|", src);
printf("\n");
*/

printf("test 2");
printf("\n");
bzero(dest, 7);
*dest = 'p';
	printf("before strcpy src: \t|NULL|, dest: \t|NULL|");
printf("\n");
	printf("strcpy(NULL, NULL): \t|%s|", strcpy(NULL, NULL));
printf("\n");
	printf("after strcpy src: \t|NULL|, dest: \t|NULL|", NULL);
printf("\n");
bzero(dest, 7);
*dest = 'p';
	printf("before ft_strcpy src: \t|NULL|, dest: \t|NULL|");
printf("\n");
	printf("ft_strcpy(NULL, NULL): \t|%s|", ft_strcpy(NULL, NULL));
printf("\n");
	printf("after ft_strcpy src: \t|NULL|, dest: \t|NULL|", NULL);
printf("\n");
printf("\n");

/* strcmp */
	printf("|| ft_strcmp ||");
printf("\n");
printf("test 1");
printf("\n");
	printf("before strcmp src: \t|%s|, dest: \t|%s|", src, dest);
printf("\n");
	printf("strcmp(dest, src): \t|%d|", strcmp(dest, src));
printf("\n");
	printf("after strcmp src: \t|%s|, dest: \t|%s|", src, dest);
printf("\n");
	printf("before ft_strcmp src: \t|%s|, dest: \t|%s|", src, dest);
printf("\n");
	printf("ft_strcmp(dest, src): \t|%d|", ft_strcmp(dest, src));
printf("\n");
	printf("after ft_strcmp src: \t|%s|, dest: \t|%s|", src, dest);
printf("\n");

/* 
char pouet2[] = "hello world";
char pouet3[] = "wanna be free";

	printf("strcmp(dest, src): \t|%d|", strcmp(pouet2, pouet3));
printf("\n");
	printf("ft_strcmp(dest, src): \t|%d|", ft_strcmp(pouet2, pouet3));
printf("\n");
	printf("strcmp(\"hello\", \"world\"): \t|%d|", strcmp("hello", "world"));
printf("\n");
	printf("ft_strcmp(\"hello\", \"world\"): \t|%d|", ft_strcmp("hello", "world"));
printf("\n");
*/

printf("test 2");
printf("\n");
	printf("strcmp(\"9gag9\", \"9gag;\"): \t|%d|", strcmp("9gag9", "9gag;"));
printf("\n");
	printf("ft_strcmp(\"9gag9\", \"9gag;\"): \t|%d|", ft_strcmp("9gag9", "9gag;"));
printf("\n");

printf("test 3");
printf("\n");
	printf("strcmp(\"1\", \"9\"): \t|%d|", strcmp("1", "9"));
printf("\n");
	printf("ft_strcmp(\"1\", \"9\"): \t|%d|", ft_strcmp("1", "9"));
printf("\n");

printf("test 4");
printf("\n");
	printf("strcmp(\"2\", \"2\"): \t|%d|", strcmp("2", "2"));
printf("\n");
	printf("ft_strcmp(\"2\", \"2\"): \t|%d|", ft_strcmp("2", "2"));
printf("\n");

printf("test 5");
printf("\n");
	printf("strcmp(\"7\", \"2\"): \t|%d|", strcmp("7", "2"));
printf("\n");
	printf("ft_strcmp(\"7\", \"2\"): \t|%d|", ft_strcmp("7", "2"));
printf("\n");
	
printf("test 6");
printf("\n");
	printf("strcmp(\"12\", \"2\"): \t|%d|", strcmp("12", "2"));
printf("\n");
	printf("ft_strcmp(\"12\", \"2\"): \t|%d|", ft_strcmp("12", "2"));
printf("\n");

printf("test 7");
printf("\n");
	printf("strcmp(\"22\", \"2\"): \t|%d|", strcmp("22", "2"));
printf("\n");
	printf("ft_strcmp(\"22\", \"2\"): \t|%d|", ft_strcmp("22", "2"));
printf("\n");

printf("test 8");
printf("\n");
	printf("strcmp(\"32\", \"2\"): \t|%d|", strcmp("32", "2"));
printf("\n");
	printf("ft_strcmp(\"32\", \"2\"): \t|%d|", ft_strcmp("32", "2"));
printf("\n");

printf("test 9");
printf("\n");
	printf("strcmp(\"2\", \"32\"): \t|%d|", strcmp("2", "32"));
printf("\n");
	printf("ft_strcmp(\"2\", \"32\"): \t|%d|", ft_strcmp("2", "32"));
printf("\n");

printf("test 10");
printf("\n");
	printf("strcmp(\"2\", \"26\"): \t|%d|", strcmp("2", "26"));
printf("\n");
	printf("ft_strcmp(\"2\", \"26\"): \t|%d|", ft_strcmp("2", "26"));
printf("\n");

printf("test 11");
printf("\n");
	printf("strcmp(no_malloc, no_malloc): \t|%d|", strcmp(no_malloc, no_malloc));
printf("\n");
	printf("ft_strcmp(no_malloc, no_malloc):|%d|", ft_strcmp(no_malloc, no_malloc));
printf("\n");

printf("test 12");
printf("\n");
	printf("strcmp(NULL, NULL): \t|%d|", strcmp(NULL, NULL));
printf("\n");
	printf("ft_strcmp(NULL, NULL): \t|%d|", ft_strcmp(NULL, NULL));
printf("\n");

printf("test 13");
printf("\n");
	printf("strcmp(\"';\", \";'\"): \t|%d|", strcmp("';", ";'"));
printf("\n");
	printf("ft_strcmp(\"';\",\";'\"): \t|%d|", ft_strcmp("';", ";'"));
printf("\n");

printf("test 14");
printf("\n");
	printf("strcmp(\"' \", \" '\"): \t|%d|", strcmp("' ", " '"));
printf("\n");
	printf("ft_strcmp(\"' \",\" '\"): \t|%d|", ft_strcmp("' ", " '"));
printf("\n");

printf("test 15");
printf("\n");
	printf("strcmp(\"r;\", \";'\"): \t|%d|", strcmp("r;", ";'"));
printf("\n");
	printf("ft_strcmp(\"r;\",\"r;'\"): \t|%d|", ft_strcmp("r;", ";'"));
printf("\n");

printf("test 16");
printf("\n");
	printf("strcmp(\"roucou\", \"k\"): \t|%d|", strcmp("roucou", "k"));
printf("\n");
	printf("ft_strcmp(\"roucou\",\"k\"):|%d|", ft_strcmp("roucou", "k"));
printf("\n");

printf("test 17");
printf("\n");
	printf("strcmp(\"k\", \"roucou\"): \t|%d|", strcmp("k", "roucou"));
printf("\n");
	printf("ft_strcmp(\"k\",\"roucou\"):|%d|", ft_strcmp("k", "roucou"));
printf("\n");
printf("\n");

//segfault
//printf("test segfault");
//printf("\n");
//	printf("strcmp(NULL, pouet): \t|%d|", strcmp(NULL, pouet));
//printf("\n");
//	printf("strcmp(pouet, NULL): \t|%d|", strcmp(pouet, NULL));
//printf("\n");

char s[] = "pouet";
int test;
	printf("\t|| ft_write ||");
printf("\n");
printf("------------------------------------------------------------------------");
printf("\n");
printf("test 1");
printf("\n");
	test = write(1, s, 5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(1, s, 5): \t|%d|", test);
printf("\n");
	test = ft_write(1, s, 5);
printf("\n");
	printf("s[] = \"%s\"", s);
printf("\n");
	printf("ft_write(1, s, 5): \t|%d|", test);
printf("\n");

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 2");
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = write(1, s, -5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(1, s, -5): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = ft_write(1, s, -5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(1, s, -5): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 3");
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = write(-5, s, 1);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(-5, s, 1): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = ft_write(-5, s, 1);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(-5, s, 1): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 4");
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = write(-5, s, 0);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(-5, s, 0): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = ft_write(-5, s, 0);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(-5, s, 0): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 5");
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = write(5, s, 0);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(5, s, 0): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = ft_write(5, s, 0);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(5, s, 0): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 6");
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = write(1, NULL, 5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(1, NULL, 5): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = ft_write(1, NULL, 5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(1, NULL, 5): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 7");
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = write(5, s, 5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(5, s, 5): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = ft_write(5, s, 5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(5, s, 5): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 8");
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = write(1, "salut", 10);
printf("\n");
	printf("write(1, \"salut\", 10): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = ft_write(1, "salut", 10);
printf("\n");
	printf("ft_write(1, \"salut\", 10):|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

char *non_allocated;
printf("------------------------------------------------------------------------");
printf("\n");
printf("test 9");
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = write(1, non_allocated, 10);
printf("\n");
	printf("write(1, non_allocated, 10): \t|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
errno = 0;
	printf("set errno to 0");
printf("\n");
	test = ft_write(1, non_allocated, 10);
printf("\n");
	printf("ft_write(1, non_allocated, 10):|%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
printf("\n");


char *r = calloc(1, 11);
int testread;
	printf("\t|| ft_read ||");
printf("\n");

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 1");
printf("\n");
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = read(fd, r, 10);
	printf("read(fd, r, 10): \t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = ft_read(fd, r, 10);
	printf("ft_read(1, r, 10):\t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);

	char *rd;
printf("------------------------------------------------------------------------");
printf("\n");
printf("test 2");
printf("\n");
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = read(fd, rd, 10);
	printf("read(fd, rd, 10): \t|%d|", testread);
printf("\n");
	printf("rd: \t|%s|", rd);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = ft_read(fd, rd, 10);
	printf("ft_read(fd, rd, 10):\t|%d|", testread);
printf("\n");
	printf("rd: \t|%s|", rd);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 3");
printf("\n");
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = read(-1, r, 10);
	printf("read(-1, r, 10): \t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);
fd = open("main.c", O_RDONLY);
errno = 0;
	printf("set errno to 0");
printf("\n");
testread = ft_read(-1, r, 10);
	printf("ft_read(-1, r, 10):\t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 4");
printf("\n");
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = read(8, r, 10);
	printf("read(8, r, 10): \t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = ft_read(8, r, 10);
	printf("ft_read(8, r, 10):\t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 5");
printf("\n");
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = read(fd, r, 0);
	printf("read(fd, r, 0): \t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = ft_read(fd, r, 0);
	printf("ft_read(fd, r, 0):\t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);

printf("------------------------------------------------------------------------");
printf("\n");
printf("test 6");
printf("\n");
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = read(fd, r, -1);
	printf("read(fd, r, -1): \t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);
bzero(r, 11);
errno = 0;
	printf("set errno to 0");
printf("\n");
fd = open("main.c", O_RDONLY);
testread = ft_read(fd, r, -1);
	printf("ft_read(fd, r, -1):\t|%d|", testread);
printf("\n");
	printf("r: \t|%s|", r);
printf("\n");
	printf("errno: \t|%d|", errno);
printf("\n");
close(fd);

free(r);
printf("\n");


char *test_strdup;
char *test_ft_strdup;
test_strdup = NULL;
char str[] = "coucou c'est trop cool de faire du code";
	printf("\t|| ft_strdup ||");
printf("\n");
printf("test 1");
printf("\n");
	test_strdup = strdup(str);
	printf("strdup(str): \t\t|%s|", test_strdup);
printf("\n");
printf("str: %p\ntest_strdup: %p\n", str, test_strdup);
	test_ft_strdup = ft_strdup(str);
	printf("ft_strdup(str): \t|%s|", test_ft_strdup);
printf("\n");
printf("str: %p\ntest_strdup: %p\n", str, test_ft_strdup);
	free(test_strdup);
	free(test_ft_strdup);

printf("test 1");
printf("\n");
	test_strdup = strdup("");
	printf("strdup(\"\"): \t|%s|", test_strdup);
printf("\n");
printf("str: %p\ntest_strdup: %p\n", "", test_strdup);
	test_ft_strdup = ft_strdup("");
	printf("ft_strdup(\"\"): \t|%s|", test_ft_strdup);
printf("\n");
printf("str: %p\ntest_strdup: %p\n", "", test_ft_strdup);
	free(test_strdup);
	free(test_ft_strdup);

/*
printf("test segfault");
printf("\n");
	test_strdup = strdup(NULL);
	printf("strdup(NULL): \t\t|%s|", test_strdup);
printf("\n");
	free(test_strdup);
	test_strdup = ft_strdup(NULL);
	printf("ft_strdup(NULL): \t|%s|", test_strdup);
printf("\n");
	free(test_strdup);
*/

	return (0);
}

/*

en asm, la taille des registres est important.
Ex: rax est pour les 64 bits donc 8 octets
	or si j'ai besoin de faire des comparaisons d'int, je dois faire avec eax qui est de 32 bits, sinon le signe n'est pas pris en compte.

 cmp c'est comme un cmp il renvoie la difference entre les deux 
Si je cmp al et 0.
jmp == jump sans condition
jl == jump lower
jg == jump greater
jng == jump not greater
je == jump equal
jne == jump not equal
jnel == jump not equl or lower

en asm la ligne d'avant compte (est importante).

les registres sont instables. Ils changent tout le temps.
ils sont utiliser par toutes les fonctions 
	donc ils peuvent être ecrasé en cours d'execution

push pop c'est envoyer sur la stack.
push == ajouter sur la stack,
pop == recuperer depuis la stack,
ça va le garder en memoire.

les registre ne modifient que les valeurs et non les variables.

rax prend toujours la valeur de retour des commands asm
rdi premier argument des functions
rsi deuxieme argument des functions
rdx	troisieme argument des functions

*/
