/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagir < gagir@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:07:58 by gagir             #+#    #+#             */
/*   Updated: 2023/07/19 14:49:10 by gagir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		dest_len;
	int		src_len;
	int		i;
	int 	j;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (
}
#include <stdio.h>
size_t strlcat_custom(char *dest, const char *src, size_t size) {
    size_t dest_len = 0;
    size_t src_len = 0;
    size_t i, j;

    // Find the length of the destination string
    while (dest[dest_len] != '\0' && dest_len < size)
        dest_len++;

    // Find the length of the source string
    while (src[src_len] != '\0')
        src_len++;

    // Append the source string to the destination string
    i = dest_len;
    j = 0;
    while (src[j] != '\0' && i < size - 1) {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Null-terminate the destination string
    dest[i] = '\0';

    // Return the total length of the concatenated string
    return dest_len + src_len;
}

int main() {
    char dest[20] = "Hello, ";
    char src[] = "World!";

    size_t result = strlcat_custom(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
}

