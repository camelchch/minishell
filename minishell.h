/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saxiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 12:26:55 by saxiao            #+#    #+#             */
/*   Updated: 2018/01/31 16:30:04 by saxiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft/libft.h"

#ifndef MINISHELL_H
#define MINISHELL_H

typedef struct s_table
{
	char			name[NAME_MAX + 1];
	char			path[PATH_MAX + 1];
	struct s_table	*next;
}					t_table;

typedef struct	s_shtable
{
	t_table		sh_ta;
}				t_sh;

#endif
