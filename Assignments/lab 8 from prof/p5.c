#include <iostream>

#include <stdio.h>

#include <string.h>

#define max_word 20

using namespace std;



void pluralize (char word[]);



int main ()

{

  char noun[max_word];

  char nounTemp[max_word];

  cout<<"Enter a noun in singular form: ";

  cin>>noun;

   strcpy(nounTemp, noun);

    pluralize (noun);

    cout<<"The plural form of "<< nounTemp<<" is " << noun;

  return 0;

}



void pluralize (char word[])

{

  int length;

  length=1;

  length = strlen(word);

/* if word ends in "y", but not "ay","ey","oy" or "uy" add "ies" */

   if ((word[length - 1] == 'y')&&(word[length - 2] !='a')

   &&(word[length - 2] !='e')

   &&(word[length - 2] !='o')

   &&(word[length - 2] != 'u'))

   {

     word[length - 1] = 'i';

     word[length] = 'e';

     word[length + 1] = 's';

     word[length + 2] = '\0';

   }



  /* if word ends in "s" "ch" or "sh" add "es" */

  else if (word[length - 1] == 's' ||

    (word[length - 2] == 'c' && word[length - 1] == 'h') ||

    (word[length - 2] == 's' && word[length - 1] == 'h'))

    strcat(word, "es");

  else

     strcat(word, "s");

}
