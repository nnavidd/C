/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 07:05:43 by navid             #+#    #+#             */
/*   Updated: 2024/02/12 19:01:40 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdint.h>


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/**
 * @brief Computes the length of the string ’s’. (not protected)
 * 
 * @param s String
 * @retval Length of the string
 * @warning Segfaults,, if ’s’ is NULL.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Copies ’src’ to ’dst’, taking the full size of the destination buffer
 * and guaranteeing NUL-termination if there is room (should be included in
 * ’dstsize’). Copies up to ’dstsize’ - 1 characters from the string ’src’ to
 * ’dst’, NUL-terminating the result if ’dstsize’ is not 0. If ’src’ and ’dst’
 * overlap, the behavior is undefined.
 * 
 * @param dst Destination string
 * @param src String to concatenate
 * @param dstsize Size of the destination buffer
 * @return The length of the string it tried to create (length of ’src’). If
 * the return value is >= ’dstsize’, the output string has been truncated.
 * @warning Segfaults, if ’dst’ or ’src’ are NULL
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t siz);

/**
 * @brief Concatenates ’src’ to ’dst’, taking the full size of the destination
 * buffer and guaranteeing NUL-termination if there is room (should be included
 * in ’dstsize’). It will append at most ’dstsize’ - strlen(’dst’) - 1
 * characters. It will then NUL-terminate, unless ’dstsize’ is 0 or the
 * original ’dst’ string was longer than ’dstsize’ (means that either ’dstsize’
 * is incorrect or that ’dst’ is not a proper string). If ’src’ and ’dst’
 * overlap, the behavior is undefined.
 * 
 * @param dst Destination string
 * @param src String to concatenate
 * @param dstsize Size of the destination buffer
 * @return The length of the string it tried to create (length ’dst’ + ’src’).
 * If the return value is >= ’dstsize’, the output string has been truncated.
 * @warning Segfaults, if ’dst’ or ’src’ are NULL
 */
size_t	ft_strlcat(char *dst, const char *src, size_t siz);

/**
 * @brief Locates the first occurrence of the character ’c’ in the string ’s’.
 * If ’c’ is a NULL-character, the terminating NULL-character of ’s’ is located.
 * 
 * @param s String to search through
 * @param c Character to search
 * @retval ✔︎ Address of the located character
 * @retval ✘ NULL if the character is not contained in the string
 * @warning Segfaults, if ’s’ is NULL
 */
char	*ft_strchr(const char *string, int c);

/**
 * @brief Locates the last occurrence of the character ’c’ in the string ’s’.
 * If ’c’ is a NULL-character, the terminating NULL-character of ’s’ is located.
 * 
 * @param s String to search through
 * @param c Character to search
 * @retval ✔︎ Address of the located character
 * @retval ✘ NULL if the character is not contained in the string
 * @warning Segfaults, if ’s’ is NULL
 */
char	*ft_strrchr(const char *str, int c);

/**
 * @brief Compares ’n’ characters of the two strings ’s1’ and ’s2’.
 * 
 * @param s1 First string
 * @param s2 Second string
 * @param n Number of characters to compare
 * @retval An integer greater than, equal to, or less than 0, according as the
 * string ’s1’ is greater than, equal to, or less than the string ’s2’
 * @retval 0, if ’n’ is 0.
 * @warning Segfaults, if ’s1’ or ’s2’ are NULL
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Compares the two strings ’s1’ and ’s2’.
 * 
 * @param s1 First string
 * @param s2 Second string
 * @return An integer greater than, equal to, or less than 0, according as the 
 * string ’s1’ is greater than, equal to, or less than the string ’s2’
 * @warning Segfaults, if ’s1’ or ’s2’ are NULL
 */
int	ft_strcmp(char *s1, char *s2);

/**
 * @brief Locates the first occurrence of the null-terminated string ’needle’
 * in the string ’haystack’, where not more than ’len’ characters are searched.
 * 
 * @param haystack String to search in
 * @param needle String to search for
 * @param len Length of ’haystack’ that is searched
 * @retval ✔︎ Pointer of the first occurrence of ’needle’ in ’haystack’
 * @retval ✘ NULL, if ’len’ is 0 or ’haystack’ does not contain ’needle’
 * @warning Segfaults, if ’haystack’ or ’needle’ are NULL
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Allocates a copy of ’s1’
 * 
 * @param s1 String to duplicate
 * @retval ✔︎ Duplicate
 * @retval ✘ NULL, if memory allocation failed
 * @warning Segfaults, if ’s1’ is NULL
 */
char	*ft_strdup(const char *s1);

/**
 * @brief Allocates a sub-string from the string ’s’.
 * 
 * @param s Base string
 * @param start Starting index of the sub-string
 * @param len Length of the sub-string
 * @retval ✔︎ Sub-string
 * (empty if ’start’ is greater than or equals to strlen of ’s’)
 * @retval ✘ NULL, if ’s’ is NULL or memory allocation failed
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates new string, which is the result of the concatenation of
 * ’s1’ and ’s2’.
 * 
 * @param s1 Left string
 * @param s2 Right string
 * @retval ✔︎ Concatenated string
 * @retval ✘ NULL, if ’s1’ or ’s2’ are NULL or memory allocation failed
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Allocates a copy of ’s1’ with all characters specified in ’set’
 * removed from the beginning and the end of the string.
 * 
 * @param s1 String to trim
 * @param set String of characters that should be trimmed
 * @retval ✔︎ Trimmed string
 * @retval ✘ NULL, if ’s1’ or ’set’ are NULL or memory allocation failed
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Applies the function ’f’ to each character of the string ’s’, and
 * passing its index as first argument to create a new string resulting from
 * successive applications of ’f’.
 * 
 * @param s String
 * @param f Function
 * @retval ✔︎ The new string
 * @retval ✘ NULL, if ’s’ is NULL or memory allocation failed
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function ’f’ on each character of the string passed as
 * argument, passing its index as first argument. Each character is passed by
 * address to ’f’ to be modified if necessary.
 * 
 * @param s String
 * @param f Function
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief Outputs the string ’s’ to the given file descriptor ’fd’.
 * 
 * @param s String to write
 * @param fd File descriptor to write to
 * @retval ✔︎ Number of bytes written
 * @retval ✘ -1, if write fails or ’s’ is NULL
 */
void	ft_putstr_fd(char const *s, int fd);

/**
 * @brief Outputs the character ’c’ to the given file descriptor ’fd’.
 * 
 * @param c Character to write
 * @param fd File descriptor to write to
 * @retval ✔︎ Number of bytes written
 * @retval ✘ -1, if write fails
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor ’fd’
 * followed by a newline.
 * 
 * @param s String to write
 * @param fd File descriptor to write to
 * @retval ✔︎ Number of bytes written
 * @retval ✘ -1, if write fails or ’s’ is NULL
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given file descriptor ’fd’.
 * 
 * @param n Integer to write
 * @param fd File descriptor to write to
 * @retval ✔︎ Number of bytes written
 * @retval ✘ -1, if write fails
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief Writes ’len’ bytes of value ’c’ (converted to an unsigned char) to
 * the array ’b’.
 * 
 * @param b Pointer to the memory to write to
 * @param c Character to write
 * @param len Number of bytes to write
 * @returns The string ’b’
 */
void	*ft_memset(void *p, int c, size_t len);

/**
 * @brief Copies ’len’ bytes from string ’src’ to string ’dst’. The two strings
 * may overlap; the copy is always done in a non-destructive manner.
 * 
 * @param dst Pointer to the memory to copy to
 * @param src Pointer to the memory to copy from
 * @param len Number of bytes to copy
 * @retval ✔︎ Original value of ’dst’
 * @retval ✘ NULL, if ’dst’ or ’src’ are NULL
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief Writes ’n’ zeroed bytes to the string ’s’.
 * 
 * @param s Pointer to the memory to write to
 * @param n Number of bytes to write
 */
void	ft_bzero(void *p, size_t len);

/**
 * @brief Copies ’n’ bytes from memory area ’src’ to memory area ’dst’.
 * If ’dst’ and ’src’ overlap, behavior is undefined,
 * in which case ft_memmove should be used.
 * 
 * @param dst Pointer to the memory to copy to
 * @param src Pointer to the memory to copy from
 * @param n Number of bytes to copy
 * @retval ✔︎ Original value of ’dst’
 * @retval ✘ NULL, if ’dst’ or ’src’ are NULL
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Converts a lower-case letter to the corresponding upper-case letter.
 * 
 * @param c Character to convert
 * @return The corresponding upper-case letter, if the argument is a lower-case
 * letter. Otherwise, the argument is returned unchanged. 
 */
int	ft_toupper(int c);

/**
 * @brief Converts a upper-case letter to the corresponding lower-case letter.
 * 
 * @param c Character to convert
 * @return The corresponding lower-case letter, if the argument is a upper-case
 * letter. Otherwise, the argument is returned unchanged. 
 */
int	ft_tolower(int c);

/**
 * @brief Searches for the first occurence of ’c’ in ’s’ within ’n’ bytes.
 * 
 * @param s String to search through
 * @param c Character to search for
 * @param n Number of bytes to search
 * @retval ✔︎ Pointer to the first occurence of ’c’ in ’s’ within ’n’ bytes
 * @retval ✘ NULL, if ’c’ could not be found
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares byte string ’s1’ against byte string ’s2’.
 * 
 * @param s1 First string
 * @param s2 Second string
 * @param n Assumed number of bytes the strings are long
 * @retval ✔︎ 0, if the two strings are identical or ’n’ is NULL
 * @retval ✘ Otherwise, the difference between the first two differing bytes
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Converts the initial portion of ’str’ to int representation,
 * ignoring whitespaces in the beginning,
 * taking either ’+’ or ’-’ in front of the first digit
 * and any non-digit character after the first digit marks the end of the number
 * 
 * @param str String to convert
 * @retval ✔︎ Converted number
 * @retval ✘ 0, if an invalid character is in front of the first digit
 * or the created number is smaller than INT_MIN
 * @retval ✘ -1, if the created number is bigger than INT_MAX
 * @warning Segfaults, if ’str’ is NULL
 */
int	ft_atoi(const char *str);

/**
 * @brief Allocates space for ’count’ elements that are ’size’ bytes of memory.
 * The allocated memory is filled with bytes of value zero.
 * 
 * @param count Number of elements
 * @param size Size of one element
 * @retval ✔︎ Pointer to the allocated memory.
 * @retval ✘ NULL, if ’size’ is 0,
 * ’size’ * ’count’ overflows,
 * or memory allocation fails.
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief Allocates a NULL-terminated array of strings obtained by splitting
 * ’s’ using the character ’c’ as a delimiter. Passing a null character as ’c’,
 * the string will be split by each character.
 * 
 * @param s The string to split
 * @param c Delimiting character
 * @retval ✔︎ The array of new strings resulting from the split
 * @retval ✘ NULL, if ’s’ is NULL or memory allocation failed
 */
char	**ft_split(char const *str, char charset);

/**
 * @brief Converts the integer ’n’ to string representation.
 * 
 * @param n Integer to convert
 * @retval ✔︎ Allocated string
 * @retval ✘ NULL, if memory allocation fails
 */
char	*ft_itoa(int n);


t_list	*ft_lstnew(void*content);
void	ft_lstadd_front(t_list	**lst, t_list*new);
int	ft_lstsize(t_list	*lst);
t_list	*ft_lstlast(t_list	*lst);
void	ft_lstadd_back(t_list	**lst, t_list	*new);
void	ft_lstdelone(t_list	*lst, void (*del)(void *));
void	ft_lstclear(t_list	**lst, void (*del)(void *));
void	ft_lstiter(t_list	*lst, void (*f)(void*));
t_list	*ft_lstmap(t_list	*lst, void *(*f)(void*), void(*del)(void*));

#endif
