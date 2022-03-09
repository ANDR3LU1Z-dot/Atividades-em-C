/*
2.Escreva um
algoritmo que leia os números informados e imprimir o dobro de cada número.
O algoritmo acaba quando entrar com o número -99:

*/

main(){
    int num;
    int dobro;

    do{
            printf("\nDigite um numero inteiro: ");
            scanf("%d", &num);

            dobro = num * 2;

            printf("\nO dobro do numero digitado: %d", dobro);

    } while(num != -99);

    return(0);

}
