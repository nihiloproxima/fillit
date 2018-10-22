/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_tetrominos.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 16:51:06 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 16:06:02 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_tetrominos(char **tetro)
{
	int	i;
	int	j;

	i = 0;
	while (tetro[i])
	{
		j = 0;
		if (ft_lentochar(tetro[i], '\n') != 4)
			ft_error();
		while (tetro[i][j])
		{
			if (tetro[i][j] != '.' || tetro[i][j] != '#')
				ft_error();
			j++;
		}
		i++;
	}
	return (0);
}

char ***map_setup(void)
{
	char tetros[26][5][5];
	int	y;
	int	i;

	i = 0;
	while (tetros[i])
	{
		y = 0;
		while (y++ < 5)
			tetros[i][y][5] = '\0';
		tetros[i][5] = NULL;
	}
}

char	***ft_map(char **map)
{
	char	tetros[26][5][5];
	int		x;
	int		y;

	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][0] == '\n')
				break ;
		}
	}
}
