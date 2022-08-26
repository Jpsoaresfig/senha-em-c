#include <stdio.h>
#include <string.h>


int main() {

	char password[] ="jp";
	char checkPassword[80];

    printf("digite sua senha: ");
    scanf("%s", &checkPassword);

    if((strcmp(password,checkPassword)) == 0){
        printf("passou ");
    }
    else{
        printf("senha incorreta");
    }

	return 1;

}

