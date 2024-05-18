/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:17:27 by oprosvir          #+#    #+#             */
/*   Updated: 2024/05/13 23:53:02 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *range;
    int size;

    if (end >= start)
        size = end - start + 1;
    else
        size = start - end + 1;
    range = (int *)malloc(sizeof(int) * size);
    if (!range)
        return NULL;
    int i = 0;
    while (i < size)
    {
        if (end > start)
            range[i] = end - i;
        else
            range[i] = end + i;
        i++;
    }
    return range;
}

/*int main (int argc, char * argv[])
{
    int *val;
    int start = 0;
    int end = -3;
    int i = 0;

    (void)argc;
    (void)argv;
    int size = (end >= start) ? (end - start + 1) : (start - end + 1);
    val = ft_rrange(start, end);
    while (i < size)
    {
        printf("%d ", val[i]);
        i++;
    }
    free(val);

}*/