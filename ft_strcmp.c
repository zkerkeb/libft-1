int	ft_strcmp(const char *s1, const char *s2)
{
  int	resultat;
  int	index;

  while(s1[index] == s2[index])
    index++;
  resultat = s1[index] - s2[index];
  return (resultat);
}
