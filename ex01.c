/*
1.Escreva um algoritmo que leia os números
maiores que 0 enquanto a sua soma não ultrapasse 10, escreva o sucessor do número:
*/

main (){
    int sum = 0;
    int num;
    int i = 0;

    do{
            printf("Digite um numero inteiro: ");
            scanf("%d", &num);
            sum = sum + num;

    } while (sum < 10 && num > 0);

    printf("Fim do algoritmo");

    return(0);
}
