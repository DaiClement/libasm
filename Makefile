# **************************************************************************** #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdai <cdai@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/10 15:03:02 by cdai              #+#    #+#              #
#    Updated: 2020/03/12 12:38:44 by cdai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	\
			ft_strlen.s\
			ft_strcpy.s\
			ft_strcmp.s\
			ft_write.s\
			ft_read.s\
			ft_strdup.s\
			
OBJS	=	${SRCS:.s=.o}

NAME	=	libasm.a

FLAGS	=	-Wall -Wextra -Werror

CC		=	clang

X86_64	=	
#			-arch x86_64 -Wl,-no_pie

RM		=	rm -f
AR		=	ar rc

NASM	=	nasm -felf64 #-f macho64

MAIN	=	main.c
MAIN_OBJS = ${MAIN:.c=.o}
TEST	=	${MAIN_OBJS:.o=.out}

.c.o:
		${CC} -c $< -o ${<:.c=.o} -I.

.s.o:
		${NASM} $<

.o.out:
		${CC} ${X86_64} -o ${<:.o=.out} $< ${NAME} -I.;

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${MAIN_OBJS}

fclean: clean
		${RM} ${NAME} ${TEST}

re:		fclean all

#testnoc:	all
#		${CC} ${X86_64} -o testOnlyASM.out ${OBJS};\
#		./testOnlyASM.out;

test:	all ${MAIN_OBJS}
		${CC} ${X86_64} -o ${MAIN_OBJS:.o=.out} ${MAIN_OBJS} ${NAME} -I.;
		./${TEST};

norm:
		norminette -R CheckForbiddenSourseHeader

commit:
		git add -A;\
		git commit;\

#DOCKER CMDS

docker:
	if \
		docker exec -ti work bash; \
		then \
			true; \
	elif \
		docker run -d -ti --name work minishell_image; \
		then \
			echo 'docker run succeeded'; \
			docker exec -ti work bash; \
	elif \
		docker restart work; \
		then \
			echo 'docker run failed'; \
			echo 'docker restart worked'; \
			docker exec -ti work bash; \
	elif \
		docker build -t minishell_image . && \
		docker run -d -ti --name work minishell_image; \
		then \
			echo 'docker run failed'; \
			echo 'docker restart failed'; \
			echo 'docker build then run succeeded'; \
			docker exec -ti work bash; \
	else \
		echo 'Docker no installed'; \
	fi

kill:
	docker kill work

config:
	git config --global user.email "cdai@student.42.fr";
	git config --global user.name "Dai Clement";
	sed 's/marvin/cdai/' 42header/vim/stdheader.vim | sed 's/42.fr/student.42.fr/' > ~/.vim/plugin/stdheader.vim;

search:
	grep -n $(RUN_ARGS) srcs/*.c headers/*.h libft/*/*.c libft/*/*.h

.PHONY: all clean fclean re norm commit testnoc testmain
