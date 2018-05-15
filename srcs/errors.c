/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguy-caz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 20:12:37 by dguy-caz          #+#    #+#             */
/*   Updated: 2017/06/16 19:50:51 by dguy-caz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	ft_print_err(int argc)
{
	if (argc > 2)
		ft_putendl("The program can only run one scene at once.");
	if (argc < 2)
		ft_putendl("Please enter a scene to display");
	ft_help();
}

void	ft_help(void)
{
	ft_putendl("\nusage : ./rtv1 [scene]\n");
	ft_putendl("- SCENE INSTRUCTIONS:\n");
	ft_putendl("Scene attributs: width, height, camera position\n");
	ft_putendl("Objects name: SP (sphere), PL (plane), CY (cylinder), CO (Cone), LI (light)\n");
	ft_putendl("Each object as a coord and a normalized color attribut:");
	ft_putendl("Sphere additionnal attribut : radius");
	ft_putendl("Plane additionnal attribut : normal");
	ft_putendl("Cylinder additionnal attributs : normal, radius, length");
	ft_putendl("Cone additionnal attributs : tangent, length, normal\n");
	ft_putendl("Vectors are set with x, y and z components");
	ft_putendl("Colors are set with r, g and b components\n");
	exit(EXIT_FAILURE);
}

void	ft_kill(char *text)
{
	ft_putendl(text);
	exit(EXIT_FAILURE);
}

int		tab_count(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
