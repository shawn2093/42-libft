/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:24:52 by long              #+#    #+#             */
/*   Updated: 2023/10/17 23:25:53 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int main(int ac, char **av)
{
    (void) ac;
    (void) av;
    
    char s3[] = "";
	printf("%d", ft_strrchr(s3, 0) == s3);
	return (0);

    /*
    //ft_strrchr
    printf("testing: %s\n", ft_strrchr(av[1], atoi(av[2])));
	printf("actual: %s\n", ft_strrchr(av[1], atoi(av[2])));
    */

    /*
    //ft_isalpha
    printf("testing: %d\n", ft_isalpha(atoi(av[1])));
	printf("actual: %d\n", isalpha(atoi(av[1])));
    */

    /*
    //ft_atoi
    printf("testing: %d\n", ft_atoi(av[1]));
    printf("actual: %d", atoi(av[1]));
    */
   
    return(0);
}