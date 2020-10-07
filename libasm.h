/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdai <cdai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 15:10:26 by cdai              #+#    #+#             */
/*   Updated: 2020/10/07 13:01:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <unistd.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

//#include <libc.h>

//void	hello(void);
//int		star(void);
//int		factorial(int);
int		ft_strlen(char *s);
char    *ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_write(int fd, char* buf, int count);
int     ft_read(int fd, char* buf, int count);
char    *ft_strdup(char *str);
int		ft_show_registre(char *s1, char *s2, int s3);

#endif
