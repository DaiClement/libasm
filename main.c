/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdai <cdai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:59:45 by cdai              #+#    #+#             */
/*   Updated: 2020/10/08 09:39:32 by cdai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main()
{
	int fd;
	char *pouet;
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

printf("test 2");
printf("\n");
	printf("strlen(null): \t\t|%ld|", strlen(pouet));
printf("\n");
	printf("ft_strlen(null): \t|%d|", ft_strlen(pouet));
printf("\n");

printf("test 3");
printf("\n");
	printf("strlen(\"\"): \t\t|%ld|", strlen(""));
printf("\n");
	printf("ft_strlen(\"\"): \t\t|%d|", ft_strlen(""));
printf("\n");
	
printf("\n");
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
	printf("before strcmp src: |%s|, dest: |%s|", src, dest);
printf("\n");
	printf("strcmp(dest, src): |%d|", strcmp(dest, src));
printf("\n");
	printf("after strcmp src: |%s|, dest: |%s|", src, dest);
printf("\n");
	printf("before ft_strcmp src: |%s|, dest: |%s|", src, dest);
printf("\n");
	printf("ft_strcmp(dest, src): |%d|", ft_strcmp(dest, src));
printf("\n");
	printf("after ft_strcmp src: |%s|, dest: |%s|", src, dest);
printf("\n");

	printf("strcmp(\"9gag9\", \"9gag;\"): |%d|", strcmp("9gag9", "9gag;"));
printf("\n");
	printf("ft_strcmp(\"9gag9\", \"9gag;\"): |%d|", ft_strcmp("9gag9", "9gag;"));
printf("\n");

	printf("strcmp(\"1\", \"9\"): \t|%d|", strcmp("1", "9"));
printf("\n");
	printf("ft_strcmp(\"1\", \"9\"): \t|%d|", ft_strcmp("1", "9"));
printf("\n");
	printf("strcmp(\"2\", \"2\"): \t|%d|", strcmp("2", "2"));
printf("\n");
	printf("ft_strcmp(\"2\", \"2\"): \t|%d|", ft_strcmp("2", "2"));
printf("\n");
	printf("strcmp(\"7\", \"2\"): \t|%d|", strcmp("7", "2"));
printf("\n");
	printf("ft_strcmp(\"7\", \"2\"): \t|%d|", ft_strcmp("7", "2"));
printf("\n");
	
	printf("strcmp(\"12\", \"2\"): \t|%d|", strcmp("12", "2"));
printf("\n");
	printf("ft_strcmp(\"12\", \"2\"): \t|%d|", ft_strcmp("12", "2"));
printf("\n");
	printf("strcmp(\"22\", \"2\"): \t|%d|", strcmp("22", "2"));
printf("\n");
	printf("ft_strcmp(\"22\", \"2\"): \t|%d|", ft_strcmp("22", "2"));
printf("\n");
	printf("strcmp(\"32\", \"2\"): \t|%d|", strcmp("32", "2"));
printf("\n");
	printf("ft_strcmp(\"32\", \"2\"): \t|%d|", ft_strcmp("32", "2"));
printf("\n");
	printf("strcmp(\"2\", \"32\"): \t|%d|", strcmp("2", "32"));
printf("\n");
	printf("ft_strcmp(\"2\", \"32\"): \t|%d|", ft_strcmp("2", "32"));
printf("\n");
	printf("strcmp(\"2\", \"26\"): \t|%d|", strcmp("2", "26"));
printf("\n");
	printf("ft_strcmp(\"2\", \"26\"): \t|%d|", ft_strcmp("2", "26"));
printf("\n");
	printf("strcmp(pouet, pouet): \t|%d|", strcmp(pouet, pouet));
printf("\n");
	printf("ft_strcmp(pouet, pouet):|%d|", ft_strcmp(pouet, pouet));
printf("\n");
	printf("strcmp(NULL, NULL): \t|%d|", strcmp(NULL, NULL));
printf("\n");
	printf("ft_strcmp(NULL, NULL): \t|%d|", ft_strcmp(NULL, NULL));
printf("\n");
//segfault
//	printf("strcmp(NULL, pouet): \t|%d|", strcmp(NULL, pouet));
//printf("\n");
//	printf("strcmp(pouet, NULL): \t|%d|", strcmp(pouet, NULL));
//printf("\n");

/*
	char s[] = "pouet";
	printf("\t||ft_write||");
printf("\n");
	int test = ft_write(1, s, 5);
printf("\n");
	printf("\ns[] = \"pouet\"");
printf("\n");
	printf("ft_write(1, s, 5): |%d|", test);
printf("\n");
	test = ft_write(2, s, 5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(2, s, 5): |%d|", test);
printf("\n");
printf("\n");

// comparaison avec le vrai write
	test = write(1, s, -5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(1, s, -5): |%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

	
	test = write(-5, s, 1);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(-5, s, 1): |%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

	errno = 10;
	test = write(-5, s, 0);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(-5, s, 0): |%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

	errno = 10;
	test = write(5, s, 0);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("write(5, s, 0): |%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

	errno = 10;
	test = ft_write(1, s, -5);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(1, s, -5): |%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

	
	errno = 10;
	test = ft_write(-5, s, 1);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(-5, s, 1): |%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

	errno = 10;
	test = ft_write(-5, s, 0);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(-5, s, 0): |%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

	errno = 10;
	test = ft_write(5, s, 0);
printf("\n");
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(5, s, 0): |%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");

	errno = 10;
printf("\n");
	printf("errno: %d", errno);
printf("\n");
	test = ft_write(5, s, -5);
	printf("s[] = \"pouet\"");
printf("\n");
	printf("ft_write(5, s, -5): |%d|", test);
printf("\n");
	printf("errno: %d", errno);
printf("\n");
printf("\n");


	printf("\t||ft_read||");
printf("\n");
	errno = 10;
	fd = open("main.c", O_RDONLY);
	char *r = calloc(1, 11);
	int testread = read(fd, r, 10);
	printf("buffer = |%s|\nread return = |%d|", r, testread);
printf("\n");
printf("\n");
	close(fd);
	printf("errno: %d", errno);
printf("\n");
printf("\n");

	errno = 10;
	fd = open("main.c", O_RDONLY);
	testread = ft_read(fd, r, 10);
	printf("buffer = |%s|\nft_read return = |%d|", r, testread);
printf("\n");
printf("\n");
	close(fd);
	printf("errno: %d", errno);
printf("\n");
printf("\n");

	errno = 10;
	testread = read(-1, r, 10);
	printf("buffer = |%s|\nread return = |%d|", r, testread);
printf("\n");
printf("\n");
	printf("errno: %d", errno);
printf("\n");
printf("\n");
	
	errno = 10;
	testread = ft_read(fd, r, 10);
	printf("buffer = |%s|\nft_read return = |%d|", r, testread);
printf("\n");
printf("\n");
	printf("errno: %d", errno);
printf("\n");
printf("\n");
	
	errno = 10;
	char *rd;
	fd = open("main.c", O_RDONLY);
	testread = read(fd, rd, 10);
	printf("buffer = |%s|\nread return = |%d|", r, testread);
printf("\n");
printf("\n");
	printf("errno: %d", errno);
printf("\n");
printf("\n");
	close(fd);
	
	errno = 10;
	fd = open("main.c", O_RDONLY);
	testread = ft_read(fd, rd, 10);
	printf("buffer = |%s|\nft_read return = |%d|", r, testread);
printf("\n");
printf("\n");
	printf("errno: %d", errno);
printf("\n");
printf("\n");
	close(fd);

free(r);

printf("\n");
	printf("\t||ft_strdup||");
printf("\n");
	char *test_strdup;
	char str[] = "coucou c'est trop cool de faire du code";
	test_strdup = ft_strdup(str);
	printf("|%s|", test_strdup);
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
