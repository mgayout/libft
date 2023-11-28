
#include "./libft/libft.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void	ft_toupper1(unsigned int i, char *s)
{
	if (*s >= 97 && *s <= 122)
		*s -= 32;
}

char	ft_toupper2(unsigned int i, char s)
{
	char	str;
	if (s >= 97 && s <= 122)
		return (s - 32);
	return (s);
}

int main (void)
{
												//Fonctions str
	char	atoi1[]="\t \n \v \f \r -123L456";
	char	bzero[]="111111111";
	char	calloc[]="11111111";
	char	*copy;
	char	alpha = 'e';
	char	num = '7';
	char	np ='\n';
	int		itoa1 = -73728;
	char	split[]="111/11/1///1/";
	char	sep = '/';
	int		s = 0;
	char	**copy2;
	char	strchr1[]="123456";
	int		i = '4';
	char	strdup[]="123456";
	char	striteri[]="abc";
	char	strjoin[]="123";
	char	strjoin2[]="456";
	char	strlcat1[]="123";
	char	strlcat2[]="456";
	char	strlcat3[]="123";
	char	strlcat4[]="456";
	char	strlcpy1[]="123";
	char	strlcpy2[]="456";
	char	strlcpy3[]="123";
	char	strlcpy4[]="456";
	char	strlen1[]="azfeve";
	char	strmapi[]="fbebsb";
	char	strncmp1[]="abcdE";
	char	strncmp2[]="abcde";
	char	strnstr1[]="111111101111111";
	char	strnstr2[]="10";
	char	strrchr1[]="123456";
	int		j = '5';
	char	strtrim[]=" //  .=bzbz/feeg=.  ./=";
	char	strtrim2[]=" / .=";
	char	substr[]="ABCDEF";
	unsigned int 	a = 4;
	size_t	len = ft_strlen(substr);
	int		k = 'E';
	int		l = 'e';

	/*
												//Fonctions mem
	
	*/

	
												//Fonctions lst
	typedef struct identifier	
	{
		char	*name;
		char	*surname;
	}	t_ident;

	t_ident l1,l2,l3;
	t_list	*kase1;
	t_list	*kase2;
	t_list	*kase3;
	t_list	*plist;

	l1.name = ft_strdup("Gayout");
	l1.surname = ft_strdup("Maxime");
	l2.name = ft_strdup("Durand");
	l2.surname = ft_strdup("Paul");
	l3.name = ft_strdup("Zoro");
	l3.surname = ft_strdup("Diego");
	kase1 = ft_lstnew(&l1);
	kase2 = ft_lstnew(&l2);
	kase3 = ft_lstnew(&l3);
	
												//Part str

	printf("\n\tAtoi\n\nLa fonction : %d\nMa fonction : %d\n", atoi(atoi1), ft_atoi(atoi1));
	ft_bzero(bzero, sizeof (bzero));
	printf("\n\tBzero\n\nMa fonction : %s\n", bzero);
	copy = ft_calloc(ft_strlen(calloc), sizeof(calloc));
	printf("\n\tCalloc\n\nMa fonction : %s\n", copy);
	free(copy);
	printf("\n\tIsalnum\n\nune valeur alphabétique renvoie : %d\nune valeur numérique renvoie : %d\nune valeur autre renvoie : %d\n", ft_isalnum(alpha), ft_isalnum(num), ft_isalnum(np));
	printf("\n\tIsalpha\n\nune valeur alphabétique renvoie : %d\nune valeur numérique renvoie : %d\n", ft_isalpha(alpha), ft_isalpha(num));
	printf("\n\tIsascii\n\nune valeur ascii renvoie : %d\nune valeur autre renvoie : %d\n", ft_isalnum(alpha), ft_isalnum(np));
	printf("\n\tIsdigit\n\nune valeur alphabétique renvoie : %d\nune valeur numérique renvoie : %d\n", ft_isdigit(alpha), ft_isdigit(num));
	printf("\n\tIsprint\n\nune valeur printable renvoie : %d\nune valeur autre renvoie : %d\n", ft_isprint(alpha), ft_isprint(np));
	copy = ft_itoa(itoa1);
	printf("\n\tItoa\n\nMa fonction : %s\n", copy);
	free(copy);
	copy2 = ft_split(split, sep);
	printf("\n\tSplit\n\n");
	while (copy2[s])
	{
		printf("Tableau n°%d = %s\n", s, copy2[s]);
		free(copy2[s]);
		s++;
	}
	free(copy2);
	printf("\n\tStrchr\n\nLa fonction : %s\nMa fonction : %s\n", strchr(strchr1, i), ft_strchr(strchr1, i));
	copy = ft_strdup(strdup);
	printf("\n\tStrdup\n\nMa fonction : %s\n", copy);
	free(copy);
	ft_striteri(striteri, ft_toupper1);
	printf("\n\tStriteri\n\nMa fonction : %s\n", striteri);
	copy = ft_strjoin(strjoin, strjoin2);
	printf("\n\tStrjoin\n\nMa fonction : %s\n", copy);
	free(copy);
	strncat(strlcat1, strlcat2, sizeof(strlcat2));
	ft_strlcat(strlcat3, strlcat4, (sizeof(strlcat3) + sizeof(strlcat4)));
	printf("\n\tStrlcat\n\nLa fonction : %s\nMa fonction : %s\n", strlcat1, strlcat3);
	strncpy(strlcpy1, strlcpy2, sizeof(strlcpy2));
	ft_strlcpy(strlcpy3, strlcpy4, (sizeof(strlcpy3) + sizeof(strlcpy4)));
	printf("\n\tStrlcpy\n\nLa fonction : %s\nMa fonction : %s\n", strlcpy1, strlcpy3);
	printf("\n\tStrlen\n\nLa fonction : %ld\nMa fonction : %d\n", strlen(strlen1), ft_strlen(strlen1));
	copy = ft_strmapi(strmapi, *ft_toupper2);
	printf("\n\tStrmapi\n\nMa fonction : %s\n", copy);
	free(copy);
	printf("\n\tStrncmp\n\nLa fonction : %d\nMa fonction : %d\n", strncmp(strncmp1, strncmp2, sizeof(strncmp1)), ft_strncmp(strncmp1, strncmp2, sizeof(strncmp1)));
	printf("\n\tStrnstr\n\nMa fonction : %s\n", ft_strnstr(strnstr1, strnstr2, sizeof(strnstr1)));
	printf("\n\tStrrchr\n\nLa fonction : %s\nMa fonction : %s\n", strrchr(strrchr1, j), ft_strrchr(strrchr1, j));
	copy = ft_strtrim(strtrim, strtrim2);
	printf("\n\tStrtrim\n\nMa fonction : %s\n", copy);
	free(copy);
	copy = ft_substr(substr, a, len);
	printf("\n\tSubstr\n\nMa fonction : %s\n", copy);
	free(copy);
	printf("\n\tTolower et Toupper\n\nMa fonction tolower : %c\nMa fonction toupper : %c\n", ft_tolower(k), ft_toupper(l));
	
	/*
												//Part mem
	*/
	
	
												//Part list

	ft_lstadd_back(&kase1, kase2);
	ft_lstadd_front(&kase1, kase3);
	plist = kase1;
	while (plist)
	{
		printf("%s - %s\n", (char *)(((t_ident *)(plist->content))->name), \
			(char *)(((t_ident *)(plist->content))->surname));
		plist = plist->next;
	}
return (0);
}