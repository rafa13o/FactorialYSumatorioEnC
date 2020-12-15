#include <stdio.h>
#include <string.h>


long factorial(int x){
  long f = 1;

  for(int i=1; i<=x;i++){
    f = f*i;
  }

  return f;
}

int sumatorio (int x){
  int s=0;

  for(int i =1;i<=x;i++){
    s=s+i;
  }
  
  return s;
}

int main(void) {

  // Declaración de las variables que voy a utilizar a lo largo del programa
  int numero; // Número que recojo por teclado del usuario
  int posicionPares = 0, posicionImpares = 0; // Me servirán como índice para saber en qué posición del vector (array) tengo que poner el resultado
  int pares[10], impares[10]; // Me lo da el profesor

  for(int i = 1; i<=10; i++){ // Va de 1 a 10 (10 posiciones, es decir, 10 números)

    // Voy solicitando el número desde 1 hasta 10
    printf("Dame el número %i de 10:  ", i);
    scanf("%d", &numero); // Guardo ese número en la variable numero

    // Compruebo si numero es par o impar (par = el resto de dividirlo entre dos es 0)
    if(numero%2==0){ // Es par
      pares[posicionPares]=factorial(numero);
      posicionPares++;
    }else{ // No es par
      impares[posicionImpares] = sumatorio(numero);
      posicionImpares++;
    }
  }


  // Primero voy a imprimir el array (vector) de los pares
  printf("\n\nVector de los factoriales de los pares --> \n\t\t"); // \n es salto de línea y \t es tabulación
  printf("[ ");
  for(int i = 0; i<10; i++){
    if(pares[i] != '\0')
      printf("%i , ", pares[i]);
    else{
      printf(" ]");
      break; // Significa que está vacía esa posición y, por tanto, el resto también
    }
  }



  // Ahora voy a imprimir el array (vector) de los impares
  printf("\n\n\nVector del sumatorio de los impares --> \n\t\t"); // \n es salto de línea y \t es tabulación
  printf("[ ");
  for(int i = 0; i<10; i++){
    if(impares[i] != '\0')
      printf("%i , ", impares[i]);
    else{
      printf(" ]");
      break; // Significa que está vacía esa posición y, por tanto, el resto también
    }
  }

  return 0;
}
