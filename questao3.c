#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPlacaAntiga(char *placa) {
    if (strlen(placa) != 8) {
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        if (!isalpha(placa[i])) {
            return 0;
        }
    }

    if (placa[3] != '-' || !isdigit(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6]) || !isdigit(placa[7])) {
        return 0;
    }

    return 1;
}

int isPlacaMercosul(char *placa) {
    if (strlen(placa) != 7) {
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        if (!isalpha(placa[i])) {
            return 0;
        }
    }

    if (!isdigit(placa[3]) || !isalpha(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6])) {
        return 0;
    }

    return 1;
}

int diavalido(char* diaSemana){
  if (strcmp(diaSemana, "SEGUNDA-FEIRA") == 0) {
        return 1;
    } else if (strcmp(diaSemana, "TERCA-FEIRA") == 0) {
     return 1;
       
    } else if (strcmp(diaSemana, "QUARTA-FEIRA") == 0) {
     return 1;
        
    } else if (strcmp(diaSemana, "QUINTA-FEIRA") == 0) {
     return 1;
        
    } else if (strcmp(diaSemana, "SEXTA-FEIRA") == 0) {
     return 1;
        
    } else if (strcmp(diaSemana, "SABADO") == 0 || strcmp(diaSemana, "DOMINGO") == 0) {
     return 1;
       
    } 
  else{ 
  return 0;
  }
}


int main() {
    char placa[10];
    char diaSemana[30];

      scanf("%s", placa);
    
    scanf("%s", diaSemana);


    

    int placaAntigaValida = isPlacaAntiga(placa);
    int placaMercosulValida = isPlacaMercosul(placa);
int placavalida=1, diaValido=1;
    if(!placaAntigaValida && !placaMercosulValida){
        printf("Placa invalida\n");
      placavalida=0;
  } 
  
      
  if(!diavalido(diaSemana)){
    printf("Dia da semana invalido\n");
    diaValido=0;
  }

  if (placavalida && diaValido){
    char ultimoDigito = placa[strlen(placa) - 1];

    if (strcmp(diaSemana, "SEGUNDA-FEIRA") == 0) {
        if (ultimoDigito != '0' && ultimoDigito != '1') {
            printf("%s pode circular segunda-feira\n", placa);
        } else {
            printf("%s nao pode circular segunda-feira\n", placa);
        }
    } else if (strcmp(diaSemana, "TERCA-FEIRA") == 0) {
        if (ultimoDigito != '2' && ultimoDigito != '3') {
            printf("%s pode circular terca-feira\n", placa);
        } else {
            printf("%s nao pode circular terca-feira\n", placa);
        }
    } else if (strcmp(diaSemana, "QUARTA-FEIRA") == 0) {
        if (ultimoDigito != '4' && ultimoDigito != '5') {
            printf("%s pode circular quarta-feira\n", placa);
        } else {
            printf("%s nao pode circular quarta-feira\n", placa);
        }
    } else if (strcmp(diaSemana, "QUINTA-FEIRA") == 0) {
        if (ultimoDigito != '6' && ultimoDigito != '7') {
            printf("%s pode circular quinta-feira\n", placa);
        } else {
            printf("%s nao pode circular quinta-feira\n", placa);
        }
    } else if (strcmp(diaSemana, "SEXTA-FEIRA") == 0) {
        if (ultimoDigito != '8' && ultimoDigito != '9') {
            printf("%s pode circular sexta-feira\n", placa);
        } else {
            printf("%s nao pode circular sexta-feira\n", placa);
        }
    } else if (strcmp(diaSemana, "SABADO") == 0 || strcmp(diaSemana, "DOMINGO") == 0) {
        printf("Nao ha proibicao no fim de semana\n");
    }}

    return 0;
}
