NAME		= libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I includes
RM			= rm -f
AR			= ar rcs
HEADER = $(addsuffix .h, $(addprefix includes/, ))

SRCS_PATH = src/

FTIS = alnum alpha ascii digit print 
FTLST = add_back add_front last new size delone clear iter # map 
FTMEM = bzero  memchr memcmp memcpy memmove memset calloc
FTPUT = char_fd str_fd endl_fd nbr_fd 
FTSTR = chr ncmp lcat lcpy len  nstr rchr dup trim join mapi iteri
FTSUB = substr #ft_split
FTTO = ft_tolower ft_toupper ft_atoi ft_itoa 
FTLEN = ft_intlen
MAIN = main

SRCS = $(addsuffix .c, $(addprefix $(SRCS_PATH)ft_is/ft_is, $(FTIS))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_mem/ft_, $(FTMEM))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_str/ft_str, $(FTSTR))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_to/, $(FTTO))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH), $(MAIN))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_put/ft_put, $(FTPUT))) \
	$(addsuffix .c, $(addprefix $(SRCS_PATH)ft_sub/ft_, $(FTSUB))) \

BONUS_SRCS = $(addsuffix .c, $(addprefix $(SRCS_PATH)bonus_srcs/ft_lst/ft_lst, $(FTLST)))
			 

OBJS		= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS_SRCS:.c=.o)

$(NAME):	$(OBJS)
			-@$(AR) $(NAME) $(OBJS) $(FORMAT)

all:		$(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
			-@$(AR) $(NAME) $(OBJ) $(BONUS_OBJS)

clean:
			-@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			-@$(RM) $(NAME)
# FILE = ""

compile: 
# @read -p "Enter file name: " FILE ;
# echo $FILE
	@$(CC) $(CFLAGS) $(SRCS) 
#  $(SRCS_PATH)main.c
# $($(SRCS_PATH)FILE)

re:			fclean all

.PHONY:		all bonus clean fclean re
