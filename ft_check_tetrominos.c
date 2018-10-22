/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_tetrominos.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 16:51:06 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 12:40:37 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_tetrominos(t_tetro *tetro)
{
	int	i;
	int	j;

	i = 0;
	while (tetro->content[i])
	{
		j = 0;
		if (ft_lentochar(tetro->content[i], '\n') != 4)
			ft_error();
		while (tetro->content[i][j])
		{
			if (tetro->content[i][j] != '.' || tetro->content[i][j] != '#')
				ft_error();
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_checkmap(char **map)
{
	int		x;
	int		y;
	int		i;
	int		j;
	int		empty;
	t_tetro	*tetro;

	y = 0;
	empty = 4;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			tetro->content[]
		}
	}
}
