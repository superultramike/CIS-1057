#include <stdio.h>
#include <string.h>

int main() {
  	char str[20];

  	printf("Please Enter any Noun: ");
  	scanf("%s", str);

  	for(int i = 0; i <= strlen(str); i++) {
        if (str[i - 1] == 'y') {
            str[i - 1] = 'i';
            str[i] = 'e';
            str[i + 1] = 's';
            str[i + 2] = '\0';
  		}
  		else if (str[(strlen(str)) - 1] == 's') {
           strcat(str, "es");
        }
	}

	printf("The plural of your original word is: %s ", str);

  	return 0;
}
