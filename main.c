/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdai <cdai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:59:45 by cdai              #+#    #+#             */
/*   Updated: 2020/10/07 14:28:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main()
{
//	int *testerr = __errno_location();
	// hello();
	// star();
	// hello();
	// star();
	// printf("%d\n", factorial(10));

	printf("\n");
	printf("\t|| ft_strlen ||\n");
	printf("strlen(\"pouet\"): \t|%ld|\n", strlen("pouet"));
	printf("ft_strlen(\"pouet\"): \t|%d|\n\n", ft_strlen("pouet"));

	char *pouet = NULL;
	// printf("strlen(null): %ld\n", strlen(pouet));
	// printf("ft_strlen(null): %d\n", ft_strlen(pouet));

	char src[] = "coucou";
	char *dest = calloc(1, 7);
	dest[0] = 'p';

	printf("||ft_strcpy||\n");
	printf("before strcpy src: |%s|, dest: |%s|\n", src, dest);
	printf("ft_strcpy(dest, src): \t|%s|\n", ft_strcpy(dest, src));
	printf("after strcpy src: |%s|, dest: |%s|\n\n", src, dest);

	printf("||ft_strcmp||\n");
	printf("before strcmp src: |%s|, dest: |%s|\n", src, dest);
	printf("ft_strcmp(dest, src): |%d|\n", ft_strcmp(dest, src));
	printf("after strcmp src: |%s|, dest: |%s|\n", src, dest);
	printf("strcmp(\"1\", \"2\"): \t|%d|\n", strcmp("1", "2"));
	printf("ft_strcmp(\"1\", \"2\"): \t|%d|\n", ft_strcmp("1", "2"));
	printf("strcmp(\"2\", \"2\"): \t|%d|\n", strcmp("2", "2"));
	printf("ft_strcmp(\"2\", \"2\"): \t|%d|\n", ft_strcmp("2", "2"));
	printf("strcmp(\"3\", \"2\"): \t|%d|\n", strcmp("3", "2"));
	printf("ft_strcmp(\"3\", \"2\"): \t|%d|\n", ft_strcmp("3", "2"));
	
	printf("strcmp(\"12\", \"2\"): \t|%d|\n", strcmp("12", "2"));
	printf("ft_strcmp(\"12\", \"2\"): \t|%d|\n", ft_strcmp("12", "2"));
	printf("strcmp(\"22\", \"2\"): \t|%d|\n", strcmp("22", "2"));
	printf("ft_strcmp(\"22\", \"2\"): \t|%d|\n", ft_strcmp("22", "2"));
	printf("strcmp(\"32\", \"2\"): \t|%d|\n", strcmp("32", "2"));
	printf("ft_strcmp(\"32\", \"2\"): \t|%d|\n", ft_strcmp("32", "2"));
	printf("|%d|\n\n", strcmp(pouet, pouet));

	char s[] = "pouet";
	printf("\t||ft_write||\n");
	int test = ft_write(1, s, 5);
	printf("\ns[] = \"pouet\"");
	printf("\nft_write(1, s, 5): |%d|\n", test);
	test = ft_write(2, s, 5);
	printf("\ns[] = \"pouet\"");
	printf("\nft_write(2, s, 5): |%d|\n\n", test);

// comparaison avec le vrai write
	test = write(1, s, -5);
	printf("\ns[] = \"pouet\"");
	printf("\nwrite(1, s, -5): |%d|\n", test);
	printf("errno: %d\n", errno);

	
	test = write(-5, s, 1);
	printf("\ns[] = \"pouet\"");
	printf("\nwrite(-5, s, 1): |%d|\n", test);
	printf("errno: %d\n", errno);

	errno = 10;
	test = write(-5, s, 0);
	printf("\ns[] = \"pouet\"");
	printf("\nwrite(-5, s, 0): |%d|\n", test);
	printf("errno: %d\n", errno);

	errno = 10;
	test = write(5, s, 0);
	printf("\ns[] = \"pouet\"");
	printf("\nwrite(5, s, 0): |%d|\n", test);
	printf("errno: %d\n", errno);

	errno = 10;
	test = ft_write(1, s, -5);
	printf("\ns[] = \"pouet\"");
	printf("\nft_write(1, s, -5): |%d|\n", test);
	printf("errno: %d\n", errno);

	
	errno = 10;
	test = ft_write(-5, s, 1);
	printf("\ns[] = \"pouet\"");
	printf("\nft_write(-5, s, 1): |%d|\n", test);
	printf("errno: %d\n", errno);

	errno = 10;
	test = ft_write(-5, s, 0);
	printf("\ns[] = \"pouet\"");
	printf("\nft_write(-5, s, 0): |%d|\n", test);
	printf("errno: %d\n", errno);

	errno = 10;
	test = ft_write(5, s, 0);
	printf("\ns[] = \"pouet\"");
	printf("\nft_write(5, s, 0): |%d|\n", test);
	printf("errno: %d\n", errno);
	errno = 10;
	printf("\nerrno: %d\n", errno);
	test = ft_write(5, s, -5);
	printf("s[] = \"pouet\"");
	printf("\nft_write(5, s, -5): |%d|\n", test);
	printf("errno: %d\n\n", errno);


	printf("\t||ft_read||\n");
	errno = 10;
	int fd = open("main.c", O_RDONLY);
	char *r = calloc(1, 11);
	int testread = read(fd, r, 10);
	printf("buffer = |%s|\nread return = |%d|\n\n", r, testread);
	close(fd);
	printf("errno: %d\n\n", errno);

	errno = 10;
	fd = open("main.c", O_RDONLY);
	testread = ft_read(fd, r, 10);
	printf("buffer = |%s|\nft_read return = |%d|\n\n", r, testread);
	close(fd);
	printf("errno: %d\n\n", errno);

	errno = 10;
	testread = read(-1, r, 10);
	printf("buffer = |%s|\nread return = |%d|\n\n", r, testread);
	printf("errno: %d\n\n", errno);
	
	errno = 10;
	testread = ft_read(fd, r, 10);
	printf("buffer = |%s|\nft_read return = |%d|\n\n", r, testread);
	printf("errno: %d\n\n", errno);
	
	errno = 10;
	char *rd;
	fd = open("main.c", O_RDONLY);
	testread = read(fd, rd, 10);
	printf("buffer = |%s|\nread return = |%d|\n\n", r, testread);
	printf("errno: %d\n\n", errno);
	close(fd);
	
	errno = 10;
	fd = open("main.c", O_RDONLY);
	testread = ft_read(fd, rd, 10);
	printf("buffer = |%s|\nft_read return = |%d|\n\n", r, testread);
	printf("errno: %d\n\n", errno);
	close(fd);

free(r);
	printf("\n\t||ft_strdup||\n");
	char *test_strdup;
	char str[] = "coucou c'est trop cool de faire du code";
	test_strdup = ft_strdup(str);
	printf("|%s|\n", test_strdup);
	free(test_strdup);

//	printf("La fonction qui suit est faite pour savoir quelques sont les registres par rapport a ses variables.\n");
//	char euh[] = "1";
//	int ret = ft_show_registre(euh, "2", -3);
//	printf("%d\n", ret);
	
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
