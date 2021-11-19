#include <stdio.h>
#include<conio.h>

#define n 5

    main(){
    int i,ac1=0,ac2=0,ac3=0;
    char vetorr[n],vetorg[n];
    float media1,media2,media3;

    for(i=0;i<n;i++){
        printf("entre com a letra do gabarito referentea questao:%d\n",i+1);
        fflush(stdin);
        scanf("%c",&vetorg[i]);
    }
    for(i=0;i<n;i++){
        printf("gabarito da questao : %d letra: %c\n",i+1,vetorg[i]);
        fflush(stdin);
    }

    printf("\n \n");
    printf("#####################>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<#############\n");
    printf("#####################>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<#############\n");
    printf("#####################>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<#############\n");
    printf("\n \n");
    for(i=0;i<n;i++){
        printf("entre com a letra referente a questao:%d do primeiro aluno\n",i+1);
        fflush(stdin);
        scanf("%c",&vetorr[i]);

        if(vetorr[i]==vetorg[i]){
            ac1=ac1+1;
        }
    }

    media1=(ac1/5.0)*10.0;
    if(ac1>=3)
        printf("o aluno acertou :%d questoes e teve grau:%2.2f foi aprovado\n",ac1,media1);

    if(ac1<3)
        printf("o aluno acertou :%d questoes e teve grau:%2.2f foi reprovado\n",ac1,media1);

    printf("\n \n");
    printf("#####################>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<#############\n");
    printf("#####################>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<#############\n");
    printf("#####################>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<#############\n");
    printf("\n \n");

    for(i=0;i<n;i++){
        printf("entre com a letra referente a questao:%d do segundo aluno\n",i+1);
        fflush(stdin);
        scanf("%c",&vetorr[i]);

        if(vetorr[i]==vetorg[i]){
            ac2=ac2+1;
        }

        media2=ac2/5.0*(10.0);

    }
    if(ac2>=3)
       printf("o aluno acertou :%d questoes e teve grau:%2.2f foi aprovado\n",ac2,media2);

    if(ac2<3){
       printf("o aluno acertou :%d questoes e teve grau:%2.2f foi reprovado\n",ac2,media2);
    }
    printf("#####################>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<#############\n");
    printf("#####################>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<#############\n");
    printf("#####################>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<#############\n");

    printf("\n \n");
    for(i=0;i<n;i++){
        printf("entre com a letra referente a questao:%d do terçeiro aluno\n",i+1);
        fflush(stdin);
        scanf("%c",&vetorr[i]);

    if(vetorr[i]==vetorg[i]){
        ac3=ac3+1;
    }
    media3=ac3/5.0*(10.0);
}



    if(ac3>=3){
      printf("o aluno acertou :%d questoes e teve grau:%2.2f foi aprovado\n",ac3,media3);
    }

       if(ac3<3){
       printf("o aluno acertou :%d questoes e teve grau:%2.2f foi reprovado\n",ac3,media3);
       }

    printf("\n \n");
    printf("aperte entrer para sair\n");
    printf("ate mais\n");

    getch();
}
