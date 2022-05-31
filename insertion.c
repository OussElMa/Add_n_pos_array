#include <stdio.h>
int main() 
{
  int i, t[100], taille, pos, n;
    printf("Taille du tableau?\n");
  scanf("%d", &taille); /*Je recupere la taille du tableau*/
  printf("Remplissez le tableau.\n");
    i=0; /*J'initialise i sur 0*/
  while(i<taille)/*Ici je récupere le contenu du tableau */
  {
      printf("Element n°%d: \n ", i+1);/*i+1 pour l'affichage car l'utilisateur compte a partir de 1 et non 0*/
      scanf("%d", &t[i]);
      i++;
  }
  i=0;/*J'initialise i sur 0*/
  printf("Quel case souhaitez-vous changer?");
  scanf("%d", &pos); /*Je recupere la position*/
  printf("Quel valeur souhaitez-vous lui accorder?");
  scanf("%d", &n);/*Je recupere la valeur*/
  if(pos<0 || pos>taille)/*Je vérifie si la position indiqué par l'utilisateur se trouve dans la taille du tableau */
        printf("Cette case n'existe pas.");
    else
    {
          i = taille; /*Je donne la valeur de taille à i */
      while(i>=pos) /*Admettons la taille de mon tableau est 4 avec {1,4,3,2} et que je souhaite changer la position 2(8) bah while(4(i)>=(pos)2) alors {1, ,4,3,2}*/
        {
            t[i] = t[i-1];
            i--;
        }
    t[pos-1] = n; /*{1,8,4,3,2} t[2-1] = 8*/
    taille++;
  printf("element du tableau apres insertion: ");
    }
  i=0;/*J'initialise i sur 0*/
  while(i<taille)/*Je recupere la position*/
  {
      printf("T[%d] :%d\n", i+1, t[i]);
      i++;
  } 
  return 0;
}