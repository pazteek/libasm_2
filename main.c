#include <unistd.h>
#include "libasm.h"
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main(int argv, char** argc)
{
	char lopeur[25];
	char *a;
	char *b;
	printf("%zu=%zu\n", ft_strlen(argc[1]), strlen(argc[1]));
	printf("%zu=%zu\n", ft_strlen(""), strlen(""));
	printf("%zu=%zu\n", ft_strlen("15415"), strlen("15415"));
	printf("%zu=%zu\n", ft_strlen("1"), strlen("1"));
	printf("%zu=%zu\n", ft_strlen("2222222222222"), strlen("2222222222222"));

	printf("[%s]",ft_strcpy(lopeur, argc[1]));
	printf("[%s]=",lopeur);
	printf("[%s]",strcpy(lopeur, argc[1]));
	printf("[%s]\n",lopeur);
	printf("[%s]",ft_strcpy(lopeur, argc[1]));
	printf("[%s]=",lopeur);
	printf("[%s]",strcpy(lopeur, argc[1]));
	printf("[%s]\n",lopeur);
	printf("[%s]",ft_strcpy(lopeur, ""));
	printf("[%s]=",lopeur);
	printf("[%s]",strcpy(lopeur, ""));
	printf("[%s]\n",lopeur);
	printf("%d = %d\n", strcmp("A","B"),ft_strcmp("A","B"));
	printf("%d = %d\n", strcmp("B","A"),ft_strcmp("B","A"));
	printf("%d = %d\n", strcmp("(A()","A"),ft_strcmp("A","A"));
	printf("%d = %d\n", strcmp("ACC","AA"),ft_strcmp("ACC","AA"));
	printf("%d = %d\n", strcmp("AA","AB"),ft_strcmp("A","AB"));
	printf("%d = %d\n", strcmp("AB","AA"),ft_strcmp("AB","AA"));
//	a = ft_strdup();
//	b = strdup(NULL);
//	printf("[%s]=[%s]\n", a, b);
//	free(a);
//	free(b);
//	printf("%d",read(1545, a, 3));
		return 0;
}
