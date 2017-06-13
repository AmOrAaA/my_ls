/*
** main.c for  in /home/AmOrAA/Delivery/LS/PSU_2016_my_ls
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Sat Dec  3 10:16:50 2016 Florian Testu
** Last update Sat Dec  3 20:50:38 2016 Florian Testu
*/

#include "./include/my.h"

void	algol2(int argc, char **argv)
{
  int	i;

  i = 2;
  while (argv[1][i] != '\0')
    {
      if (argv[1][i] == 'a')
	{
	  ls2_la(argc, argv);
	  return ;
	}
      else
	ls2_l(argc, argv);
      i = i + 1;
    }
}

int	algol(int argc, char **argv)
{
  int	i;

  i = 1;
  while (argv[1][i] != '\0')
    {
      if (argv[1][i] == 'l' && argv[1][i + 1] == 'a')
	{
	  ls_la(argc, argv);
	  return (1);
	}
      else if (argv[1][i] == 'a')
	ls_a(argc, argv);
      else if (argv[1][i] == 'd')
	ls_d(argc, argv);
      else if (argv[1][i] == 'l')
	{
	  ls_l(argc, argv);
	  return (1);
	}
      i = i + 1;
    }
  return (0);
}

void	algo(int argc, char **argv)
{
  int	i;

  i = 1;
  while (argv[1][i] != '\0')
    {
      if (argc == 2)
	{
	  if (argv[1][i] == 'l' && argv[1][i + 1] != NULL)
	    {
	      algol2(argc, argv);
	      return ;
	    }
	  else if (argv[1][i] == 'l')
	    ls2_l(argc, argv);
	  else if (argv[1][i] == 'a')
	    ls2_a(argc, argv);
	  else if (argv[1][i] == 'd')
	    ls2_d(argc, argv);
	}
      else if (algol(argc, argv))
	return ;
      i = i + 1;
    }
}

int	main(int argc, char **argv)
{
  int	i;

  i = 1;
  if (argc == 1)
    {
      ls2(argc, argv);
      return (0);
    }
  while (i < argc)
    {
      if (argv[i][0] == '-')
	{
	algo(argc, argv);
	return (0);
	}
      else
	{
	  ls(argc, argv);
	  return (0);
	}
      i = i + 1;
    }
  return (0);
}
