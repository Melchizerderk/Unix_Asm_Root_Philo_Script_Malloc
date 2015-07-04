/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:32:27 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 12:55:40 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/mman.h>

# define TINY (size_t)(getpagesize() / 256)
# define SMALL (size_t)(getpagesize() / 8)
# define SIZEALLOCTINY (size_t)(getpagesize() * 512)
# define SIZEALLOCSMALL (size_t)(getpagesize() * 4096)
# define BLOCK_SIZE sizeof(struct s_block)
# define SIZE_T_MAX 65535

typedef struct	s_block {
	size_t			size;
	struct s_block	*next;
	struct s_block	*prev;
	int				free;
	void			*ptr;
	char			data[1];
}				t_block;

void			*malloc(size_t size);
void			free(void *ptr);
void			*realloc(void *ptr, size_t size);
t_block			*add_block(size_t size, t_block *lst_block);
t_block			*creat_memory(size_t size);
t_block			*find_block(size_t size, t_block *lst_block);
void			*ft_memcpy(void *dest, const void *src, size_t n);
int				get_type(size_t size);
void			init_memory(size_t size, t_block **lst_block);
t_block			*join_block(t_block *curent, t_block *to_join);
int				print_info(t_block *lst_block);
t_block			*split_block(size_t size, t_block *lst_block);
void			print_head(int type);
size_t			get_total_size(t_block *lst_block);
void			ft_putstr(char const *str);
void			ft_putchar(int ch);
void			ft_putbase(long long int n, int base, char *tab_base);
t_block			**get_type_lsts_block(void);
int				check_sir(void *ptr);
void			show_alloc_mem(void);

#endif
