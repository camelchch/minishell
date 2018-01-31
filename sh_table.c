/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_table.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saxiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 15:43:03 by saxiao            #+#    #+#             */
/*   Updated: 2018/01/31 17:28:03 by saxiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
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

void	init_shtable(t_sh *table, char **path)
{
	DIR				*dirp;
	struct dirent	*dir;
	int				index;

	while (*path)
	{
		if (!(dirp = opendir(*path)))
			perror("open directory failed");
		while (dir = readdir(dirp))
		{

		}

	}

}
