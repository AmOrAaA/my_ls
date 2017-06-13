/*
** Fonc.c for  in /home/AmOrAA/Delivery/LS/test
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Thu Dec  1 13:56:09 2016 Florian Testu
** Last update Thu Dec  1 13:58:58 2016 Florian Testu
*/

#include "./include/my.h"

void	my_putchar(char z)
{
  write(1, &z, 1);
}

void    my_putstr(char *a)
{
  int b;

  b = 0;
  while (a[b] != '\0')
    {
      my_putchar(a[b]);
      b = b + 1;
    }
}

int     my_strcmp(char *s1, char *s2)
{
  int   a;
  int   b;
  int   c;

  a = 0;
  b = 0;
  while (s1[a] && s2[b] != '\0')
    {
      if (s1[a] < s2[b] || s1[a] > s2[b])
	{
	  return (1);
	}
      a = a + 1;
      b = b + 1;
    }
  return (0);
}
