/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:59:52 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/25 15:44:32 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define GREEN "\033[38;5;84m"
#define RED "\033[38;5;197m"
#define GREY "\033[38;5;8m"
#define DEFAULT "\033[0m"
#define CHECKMARK "\xE2\x9C\x93"
#define putchar custom_putchar

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *nptr);

int	main(void)
{
	char	tc_isalpha[10] = {'1', '0', '~', ' ', 'c', 'D', '\t', 8, 126, 127};
	char	*tc_atoi[11] = {"", "1234", "+1234", "-1234", "--1234",
			"2147483647", "-2147483648", "-2147483649", "2147483648", "hello",
			NULL};

	// char	tc_isdigit[10] = {'1', '0', '~', ' ', 'c', 'D', '\t', 8, 126, 127};
	// char	tc_isalnum[10] = {'1', '0', '~', ' ', 'c', 'D', '\t', 8, 126, 127};
	// char	tc_isascii[10] = {'1', '0', '~', ' ', 'c', 'D', '\t', 8, 126, 127};
	// char	tc_isprint[10] = {'1', '0', '~', ' ', 'c', 'D', '\t', 8, 126, 127};
	// char	*tc_strlen[10] = {"hello", "", "strlennn"};
	printf("%s\ntesting ft_isalpha\n", DEFAULT);
	for (int i = 0; tc_isalpha[i]; i++)
		printf("%s CASE: %c \t GOT:%i \t EXPECTED:%i\t\n",
			ft_isalpha(tc_isalpha[i]) == isalpha(tc_isalpha[i]) ? "\033[38;5;84m[OK]" : "\033[38;5;197m[KO]",
			tc_isalpha[i], ft_isalpha(tc_isalpha[i]), isalpha(tc_isalpha[i]));
	printf("%s\ntesting ft_atoi\n", DEFAULT);
	for (int i = 0; tc_atoi[i]; i++)
		printf("%s CASE: %-12s \t GOT:%-12i \t EXPECTED:%-12i\t\n",
			ft_atoi(tc_atoi[i]) == atoi(tc_atoi[i]) ? "\033[38;5;84m[OK]" : "\033[38;5;197m[KO]",
			tc_atoi[i], ft_atoi(tc_atoi[i]), atoi(tc_atoi[i]));
}
