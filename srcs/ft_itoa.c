/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:53:50 by long              #+#    #+#             */
/*   Updated: 2023/10/17 14:28:24 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int numlen(int n)
{
    int count;

    count = 0;
    if (n < 0)
    {
        n *= -1;
        count++;
    }
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return (count);
} 

char    *ft_itoa(int n)
{
    int     len;
    char    *str;
    int     start;

    if (n == -2147483648)
        return ("-2147483648");
    if (n == 0)
        return ("0");
    len = numlen(n);
    str = (char *) malloc(sizeof(char) * (len + 1));
    if (!str)
        return (0);
    str[len] = '\0';
    start = 0;
    if (n < 0)
    {
        str[0] = '-';
        start = 1;
        n *= -1;
    }
    while (--len >= start)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
    }
    return (str);
}

/*
int main(void)
{
    char    *t1 = ft_itoa(10);
    char    *t2 = ft_itoa(-2147483648);
    char    *t3 = ft_itoa(0);
    char    *t4 = ft_itoa(-10);
    char    *t5 = ft_itoa(2147483647);
    printf("Test1: %s\n", t1);
    printf("Test2: %s\n", t2);
    printf("Test3: %s\n", t3);
    printf("Test4: %s\n", t4);
    printf("Test5: %s\n", t5);
    system("leaks a.out");
    return (0);
}
*/