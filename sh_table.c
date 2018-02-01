/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_table.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saxiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 15:43:03 by saxiao            #+#    #+#             */
/*   Updated: 2018/02/01 14:54:19 by saxiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <stdlib.h>
#include <errno.h>
#include "minishell.h"

char	**path(char **env)
{
	int		j;

	j = 1;
	while (*env && j)
	{
		if (!ft_strncmp(*env, "PATH=", 5))
			j = 0;
		env++;
	}
	return (ft_split(*env + 5, ":"));
}

int		calcu_index(t_table *add)
{
	int		cal;
	int		i;

	cal = 0;
	i = 0;
	while (add->name[i])
		cal = add->name[i++] + cal;
	cal = cal % 100;
	return (cal);
}

void	addin_table(:wq

void	init_shtable(t_sh *table, char **path)
{
	DIR				*dirp;
	struct dirent	*dir;
	int				index;
	t_table			*add;

	while (*path)
	{
		if (!(dirp = opendir(*path)))
			perror("open path failed");
		while ((dir = readdir(dirp)))
		{
			add = (t_table *)malloc(sizeof(t_table));
			ft_strcpy(add->name, dir->d_name);
			ft_strcpy(add->path, *path);
			ft_strcat(add->path, "/");
			ft_strcat(add->path, add->name);
			add->next = NULL;
			index = calcu_index(add);

		}

	}

}
