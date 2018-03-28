#include <stdio.h>

void main()
{
    int start,mes, dia, qtc, val, dias,k, val1, val2, val3, sex, micro, diab, plan, cardio, ano, sexm, plans, diabs, cardios, micros, anocr, prsex, prcardio, prplan, prdiab, prmicro, pranocr;
    float peso;
                           /*As vari�veis inciando com pr representam c�lculos percentuais; as vari�veis inciando com val e a vari�vel k s�o para os la�os de repeti��o.*/

    qtc = 0;               /*Essas vari�veis recebem o valor 0 pois no decorrer do c�digo elas ser�o incrementadas.*/
    anocr = 0;
    plans = 0;
    diabs = 0;
    cardios = 0;
    micros = 0;
    sexm = 0;

    do{
        printf("Cadastro de criancas residentes no bairro Feira VI.\n\nPara realizar cadastros digite [1], para encerrar o programa, digite [2].\n");
        scanf("%d",&start);
        if(start==2){
            return 0;
        }
        else if(start!=1&&start!=2){
            printf("\nResposta inv�lida.\n");
            val=3;
        }
        else{
            val=2;
        }
    }while(val!=2);

    do{
        k=1;
        qtc++;                                                /*A vari�vel 'qtc' representa a quantidade de crian�as cadastradas, por isso, a cada cadastro, ela recebe um incremento de +1.*/
        do{
            printf("Data de nascimento:\n");                  /*Aqui � perguntado a data de nascimento com v�rias condi��es, sendo que qualquer resposta introduzida que � considerada inv�lida faz com que a pergunta se repita.*/
            scanf("%d/%d/%d",&dia,&mes,&ano);
            if(dia>31||mes>12){                               /*Essa condi��o determina que o n�mero de dias e o n�mero de meses possuem limites.*/
                printf("Data invalida.\n");
                val=3;
            }
            else if(dia<=0||mes<=0||ano<=0){                  /*Essa condi��o determina que os numeros de dia, mes e ano devem ser maiores que zero.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(mes==041&&dia==31){                       /*Essa condi��o determina que para os m�s 4, o m�ximo de dias � 30.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(mes==06&&dia==31){                        /*Essa condi��o determina que para os m�s 6, o m�ximo de dias � 30.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(mes==9&&dia==31){                         /*Essa condi��o determina que para os m�s 9, o m�ximo de dias � 30.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(mes==11&&dia==31){                        /*Essa condi��o determina que para os mes 11, o m�ximo de dias � 30.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(ano<=2004){                              /*Essa condi��o determina que o ano de nascimento m�nimo para ser aceito no cadastro � 2005, j� que para o ECA a idade m�xima para ser considerada crian�a s�o 12 anos incompletos.*/
                printf("O cadastro e para criancas.\n");
                val=3;
            }
            else if(ano>2017){                               /*Essa condi��o determina que o ano m�ximo � 2017.*/
                printf("Data invalida.\n");
                val=3;
            }
            else if(mes==02&&dia>=30){                       /*Essa condi��o determina que quando o m�s for 2, o n�mero m�ximo de dias � 29.*/
                printf("Data invalida.\n");
                val=3;
            }
            else if(ano%4!=0&&mes==02&&dia==29){             /*Essa condi��o determina que o mes 2 s� tem 29 dias quando o ano � bissexto, ou seja, o quando o valor do ano � divis�vel por 4.*/
                printf("Data invalida.\n");
                val=3;
            }
            else if(ano==2017){                              /*Essa condi��o serve para contabilizar o n�mero de crian�as nascidas no ano corrente e calcular o percentual em rela��o �s outras crian�as.*/
                anocr++;
                pranocr=anocr*100/qtc;
                val=2;
            }
            else{                                            /*Esse desconsidera todas as respostas anteriores e valida a resposta quanto a data.*/
                val=2;
                pranocr=anocr*100/qtc;
            }
          }while(val!=2);                                    /*Esse la�o de repeti��o � para o caso da valida��o da data n�o ocorra, assim, repetindo a digita��o da data.*/

        do{
            printf("Digite [1] para masculino ou [2] para feminino:\n");       /*Aqui � perguntado o sexo com v�rias condi��es.*/
            scanf("%d",&sex);
            if(sex!=1&&sex!=2){                              /*Essa condi��o � para que qualquer n�mero digitado que seja diferente de um 1 e 2, a resposta seja inv�lida e a pergunta se repita.*/
                printf("Invalido\n.");
                val1=3;
            }
            else if(sex==1){                                 /*Essa condi��o � para que quando o valor for 1 (masculino), haja incremento na vari�vel do sexo masculino, para que seja poss�vel o c�culo percentual.*/
                sexm++;
                prsex=sexm*100/qtc;
                val1=2;
            }
            else{                                            /*Essa condi��o � para que quando a resposta n�o entrar em nenhuma das condi��es anteriores, ela seja v�lida e o percentual seja calculado.*/
                prsex=sexm*100/qtc;
                val1=2;
            }
        }while(val1!=2);                                     /*Esse la�o de repeti��o � para garantir a valida��o da resposta quanto ao sexo.*/

        do{
            printf("Peso:\n");                               /*Aqui � perguntado o peso, sendo que a vari�vel � do tipo float pois o valor de peso normalmente � um n�mero real.*/
            scanf("%f",&peso);
            if(peso<=0){                                     /*Essa condi��o � para que o valor dado de um respectivo peso n�o seja negativo e nem igual a zero.*/
                printf("\nPeso Invalido.\n");
                val1=3;
            }
            else{                                            /*Essa condi��o determina que a resposta � v�lida caso o peso dado seja maior do que zero.*/
                val1=2;
            }
        }while(val1!=2);                                     /*Esse la�o de repeti��o � para que a pergunta repita caso a resposta seja inv�lida.*/

        do{
            printf("Plano de saude:[1] se tiver e [2] se nao tiver:\n");      /*Aqui � perguntado se a crian�a tem plano de sa�de.*/
            scanf("%d",&plan);
            if(plan!=1&&plan!=2){                            /*Essa condi��o determina que qualquer resposta diferente de 1 e 2 � inv�lida.*/
                printf("Invalido.\n");
                val3=3;
            }
            else if(plan==1){                                /*Essa condi��o determina que se a resposta for 2 (n�o) ocorre incrementa��o na vari�vel da quantidade de pessoas que n�o tem plano de sa�de, e atribui o c�lculo percentual � vari�vel prplan.*/
                plans++;
                val3=2;
                prplan=plans*100/qtc;
            }
            else{                                            /*Essa condi��o determina  que se a resposta n�o se encaixar em nenhuma das condi��es anteriores ,ela � v�lida, e atribui o c�culo percentual � vari�vel prplan.*/
                val3=2;
                prplan=plans*100/qtc;
            }
        }while(val3!=2);                                     /*Esse la�o de repeti��o serve para que a pergunta sobre o plano de sa�de repita caso a resposta seja diferente de 1 e 2.*/

        do{
            printf("Diabetes:[1] se tiver e [2] se nao tiver:\n");      /*Aqui � perguntado se a crian�a tem diabetes.*/
            scanf("%d",&diab);
            if(diab!=1&&diab!=2){                            /*Essa condi��o determina que qualquer n�mero digitado que seja diferente de 1 e 2 � considerado inv�lido, assim, a pergunta � repetida.*/
                printf("Invalido.\n");
                val2=3;
            }
            else if(diab==1){                                /*Essa condi��o determina que se a resposta for 1 (sim), ocorre incremento na vari�vel diabs e define o valor de prdiab como o c�lculo percentual de quem tem diabetes.*/
                diabs++;
                val2=2;
                prdiab=diabs*100/qtc;
            }
            else{                                            /*Essa condi��o determina que, qualquer resposta que n�o entre nas condi��es anteriores, a resposta � v�lida e a vari�vel prdiab recebe o valor de c�culo percentual de quem tem diabetes.*/
                val2=2;
                prdiab=diabs*100/qtc;
            }
        }while(val3!=2);                                     /*Esse la�o de repeti��o serve para que, caso a resposta seja considerada inv�lida, a pergunta se repetir.*/

        do{
            printf("Problemas cardiacos:[1] se tiver e [2] se nao tiver:\n");        /*Aqui � perguntado se a crian�a possui problemas card�acos.*/
            scanf("%d",&cardio);
            if(cardio!=1&&cardio!=2){                        /*Essa condi��o determina que qualquer resposta que seja diferente de 1 e 2 � considerada inv�lida, assim, a pergunta se repete.*/
                printf("Invalido.\n");
                val2=3;
            }
            else if(cardio==1){                              /*Essa condi��o determina que se a resposta for 1 (sim), ela � v�lida, ocorre incrementa��o na vari�vel cardios e a vari�vel prcardio recebe o valor de c�culo percentual das crian�as que tem problemas card�acos.*/
                cardios++;
                val2=2;
                prcardio=cardios*100/qtc;
            }
            else{                                            /*Essa condi��o determina que, qualquer resposta que n�o entre em nenhuma nas condi�oes anteriores, a resposta � v�lida e a vari�vel recebe o valor de c�lculo percentual.*/
                val2=2;
                prcardio=cardios*100/qtc;
            }
        }while(val3!=2);                                     /*Esse la�o de repeti��o serve para que, caso a resposta seja considerada inv�lida, a pergunta se repetir.*/

        do{
            printf("Microcefalia:[1] se tiver e [2] se nao tiver:\n");       /*Aqui � perguntado se a crian�a possui microcefalia.*/
            scanf("%d",&micro);
            if(micro!=1&&micro!=2){                          /*Essa condi��o determina que qualquer resposta que seja diferente de 1 e 2 � considerada inv�lida, assim, a pergunta se repete.*/
                printf("Invalido.\n");
                val2=3;
            }
            else if(micro==1){                               /*Essa condi��o determina que se a resposta for 1 (sim), ela � v�lida, ocorre incrementa��o na vari�vel micros e a vari�vel prmicro recebe o valor de c�culo percentual das crian�as que tem microcefalia.*/
                micros++;
                val2=2;
                prmicro=micros*100/qtc;
            }
            else{                                            /*Essa condi��o determina que, qualquer resposta que n�o entre em nenhuma nas condi�oes anteriores, a resposta � v�lida e a vari�vel recebe o valor de c�lculo percentual.*/
                val2=2;
                prmicro=micros*100/qtc;
            }
        }while(val3!=2);                                     /*Esse la�o de repeti��o serve para que, caso a resposta seja considerada inv�lida, a pergunta se repetir.*/

        do{
            printf("\nPara encerrar digite [0]\nPara fazer outro cadastro digite [1]\nPara vizualizar dados dos cadastros realizados digite [2].\n");        /*No final do c�digo s�o dadas tr�s op��es, realizar outro cadastro, ver os dados dos cadastros feitos e finalizar o programa.*/
            scanf("%d",&k);
            if(k==0){                                        /*Essa condi��o determina que se a resposta for 0, o programa � finalizado.*/
                return 0;
            }
            else if(k==2){                                    /*Essa condi��o determina que se a resposta for 2, s�o mostrados os dados dos cadastros realizados.*/
                printf("\nO total de criancas cadastradas e %d, dos quais:\nO percentual de criancas que nasceram no ano corrente e %d%%\nO percentual de meninos sobre meninas e %d%%.\nO percentual de pessoas com microcefalia e %d%%.\nO percentual de pessoas com diabetes e %d%%.\nO percentual de pessoas com problemas cardiacos e %d%%.\nO percentual de pessoas com plano de saude e %d%%.\n", qtc, pranocr, prsex, prmicro, prdiab, prcardio, prplan);
            }
            else if(k==1){                                    /*Essa condi��o � para caso a resposta seja um, assim, atendendo a �ltima pergunta e realizando um novo cadastro.*/
                k==3;
            }
            else{                                             /*Essa condi��o � para caso o n�mero digitado seja diferente de 0, 1 e 2, fazendo com que a pergunta seja refeita.*/
                printf("Comando invalido.");
                k==3;
            }
        }while(k==2);                                         /*Esse la�o de repeti��o serve para que, caso a resposta da �ltima entrada de dados seja 1, assim, um novo cadastro � iniciado.*/

    }while(k==1);
}
