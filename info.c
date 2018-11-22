/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   info.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 16:02:40 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 16:02:41 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

void	increase_line(t_info *info)
{
	info->y++;
	info->x = 0;
}

void	initialize(t_info *info, int id)
{
	info->x = 0;
	info->y = 0;
	info->size = find_size(id);
	info->id = -1;
	info->found = 0;
	info->nb_tetros = id;
}
