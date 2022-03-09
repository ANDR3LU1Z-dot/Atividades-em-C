/*

4.Faça um algoritmo para entrar com números
positivos e imprimir a média dos números informados:
*/

main(){
    int num;
    int ci = 0;
    float media = 0;
    int sum = 0;

    do{
            printf("\nDigite um numero inteiro: ");
            scanf("%i", &num);

            if(num > 0){
                ci++;
                sum += num;
                media = sum/ci;
            }

    }while(num > 0);

    printf("\nMedia dos numeros positivos: %f", media);

    return(0);

}
