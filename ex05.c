/*
5.Escreva um algoritmo que leia os números
menores que 20 e imprimir a soma somente dos números pares:

*/
main(){
    int num;
    int soma = 0;

    do{
            printf("\nDigite um numero inteiro: ");
            scanf("%i", &num);

    if(num %2 == 0){
            soma = soma + num;
    }

    }while(num < 20);


    printf("\nA soma dos numeros pares: %i", soma);
    return(0);
}
