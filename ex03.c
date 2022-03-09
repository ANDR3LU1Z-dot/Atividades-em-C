/*
3.Faça um algoritmo para entrar com números
enquanto forem positivos e imprimir quantos números foram informados:
*/

main(){
    int num;
    int sum = 0;

    do{
            printf("\nDigite um numero inteiro: ");
            scanf("%i", &num);
            sum++;

    }while(num > 0);

    printf("Quantidade de numeros digitados: %i", sum);
    return(0);

}
