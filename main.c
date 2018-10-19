/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 13:01:47 by ftourret     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/19 16:36:56 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		code;
	char	*map[26];
	int		i;
	int		j;

	i = 0;
	ft_usage(argc);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		ft_error();
	while ((code = get_next_line(fd, &map[i][j++])))
	{
		if (code == -1)
			ft_error();
		if (ft_linelen(map[i][j]) == 1 && map[i][j][0])
			
	}
	return (0);
}
