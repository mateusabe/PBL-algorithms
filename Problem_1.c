#include <stdio.h>

void main()
{
    int start,mes, dia, qtc, val, dias,k, val1, val2, val3, sex, micro, diab, plan, cardio, ano, sexm, plans, diabs, cardios, micros, anocr, prsex, prcardio, prplan, prdiab, prmicro, pranocr;
    float peso;
                           /*As variáveis inciando com pr representam cálculos percentuais; as variáveis inciando com val e a variável k são para os laços de repetição.*/

    qtc = 0;               /*Essas variáveis recebem o valor 0 pois no decorrer do código elas serâo incrementadas.*/
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
            printf("\nResposta inválida.\n");
            val=3;
        }
        else{
            val=2;
        }
    }while(val!=2);

    do{
        k=1;
        qtc++;                                                /*A variável 'qtc' representa a quantidade de crianças cadastradas, por isso, a cada cadastro, ela recebe um incremento de +1.*/
        do{
            printf("Data de nascimento:\n");                  /*Aqui é perguntado a data de nascimento com várias condições, sendo que qualquer resposta introduzida que é considerada inválida faz com que a pergunta se repita.*/
            scanf("%d/%d/%d",&dia,&mes,&ano);
            if(dia>31||mes>12){                               /*Essa condição determina que o número de dias e o número de meses possuem limites.*/
                printf("Data invalida.\n");
                val=3;
            }
            else if(dia<=0||mes<=0||ano<=0){                  /*Essa condição determina que os numeros de dia, mes e ano devem ser maiores que zero.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(mes==041&&dia==31){                       /*Essa condição determina que para os mês 4, o máximo de dias é 30.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(mes==06&&dia==31){                        /*Essa condição determina que para os mês 6, o máximo de dias é 30.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(mes==9&&dia==31){                         /*Essa condição determina que para os mês 9, o máximo de dias é 30.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(mes==11&&dia==31){                        /*Essa condição determina que para os mes 11, o máximo de dias é 30.*/
                printf("\nData invalida.\n");
                val=3;
            }
            else if(ano<=2004){                              /*Essa condição determina que o ano de nascimento mínimo para ser aceito no cadastro é 2005, já que para o ECA a idade máxima para ser considerada criança são 12 anos incompletos.*/
                printf("O cadastro e para criancas.\n");
                val=3;
            }
            else if(ano>2017){                               /*Essa condição determina que o ano máximo é 2017.*/
                printf("Data invalida.\n");
                val=3;
            }
            else if(mes==02&&dia>=30){                       /*Essa condição determina que quando o mês for 2, o número máximo de dias é 29.*/
                printf("Data invalida.\n");
                val=3;
            }
            else if(ano%4!=0&&mes==02&&dia==29){             /*Essa condição determina que o mes 2 só tem 29 dias quando o ano é bissexto, ou seja, o quando o valor do ano é divisível por 4.*/
                printf("Data invalida.\n");
                val=3;
            }
            else if(ano==2017){                              /*Essa condição serve para contabilizar o número de crianças nascidas no ano corrente e calcular o percentual em relação às outras crianças.*/
                anocr++;
                pranocr=anocr*100/qtc;
                val=2;
            }
            else{                                            /*Esse desconsidera todas as respostas anteriores e valida a resposta quanto a data.*/
                val=2;
                pranocr=anocr*100/qtc;
            }
          }while(val!=2);                                    /*Esse laço de repetição é para o caso da validação da data não ocorra, assim, repetindo a digitação da data.*/

        do{
            printf("Digite [1] para masculino ou [2] para feminino:\n");       /*Aqui é perguntado o sexo com várias condições.*/
            scanf("%d",&sex);
            if(sex!=1&&sex!=2){                              /*Essa condição é para que qualquer número digitado que seja diferente de um 1 e 2, a resposta seja inválida e a pergunta se repita.*/
                printf("Invalido\n.");
                val1=3;
            }
            else if(sex==1){                                 /*Essa condição é para que quando o valor for 1 (masculino), haja incremento na variável do sexo masculino, para que seja possível o cáculo percentual.*/
                sexm++;
                prsex=sexm*100/qtc;
                val1=2;
            }
            else{                                            /*Essa condição é para que quando a resposta não entrar em nenhuma das condições anteriores, ela seja válida e o percentual seja calculado.*/
                prsex=sexm*100/qtc;
                val1=2;
            }
        }while(val1!=2);                                     /*Esse laço de repetição é para garantir a validação da resposta quanto ao sexo.*/

        do{
            printf("Peso:\n");                               /*Aqui é perguntado o peso, sendo que a variável é do tipo float pois o valor de peso normalmente é um número real.*/
            scanf("%f",&peso);
            if(peso<=0){                                     /*Essa condição é para que o valor dado de um respectivo peso não seja negativo e nem igual a zero.*/
                printf("\nPeso Invalido.\n");
                val1=3;
            }
            else{                                            /*Essa condição determina que a resposta é válida caso o peso dado seja maior do que zero.*/
                val1=2;
            }
        }while(val1!=2);                                     /*Esse laço de repetição é para que a pergunta repita caso a resposta seja inválida.*/

        do{
            printf("Plano de saude:[1] se tiver e [2] se nao tiver:\n");      /*Aqui é perguntado se a criança tem plano de saúde.*/
            scanf("%d",&plan);
            if(plan!=1&&plan!=2){                            /*Essa condição determina que qualquer resposta diferente de 1 e 2 é inválida.*/
                printf("Invalido.\n");
                val3=3;
            }
            else if(plan==1){                                /*Essa condição determina que se a resposta for 2 (não) ocorre incrementação na variável da quantidade de pessoas que não tem plano de saúde, e atribui o cálculo percentual à variável prplan.*/
                plans++;
                val3=2;
                prplan=plans*100/qtc;
            }
            else{                                            /*Essa condição determina  que se a resposta não se encaixar em nenhuma das condições anteriores ,ela é válida, e atribui o cáculo percentual à variável prplan.*/
                val3=2;
                prplan=plans*100/qtc;
            }
        }while(val3!=2);                                     /*Esse laço de repetição serve para que a pergunta sobre o plano de saúde repita caso a resposta seja diferente de 1 e 2.*/

        do{
            printf("Diabetes:[1] se tiver e [2] se nao tiver:\n");      /*Aqui é perguntado se a criança tem diabetes.*/
            scanf("%d",&diab);
            if(diab!=1&&diab!=2){                            /*Essa condição determina que qualquer número digitado que seja diferente de 1 e 2 é considerado inválido, assim, a pergunta é repetida.*/
                printf("Invalido.\n");
                val2=3;
            }
            else if(diab==1){                                /*Essa condição determina que se a resposta for 1 (sim), ocorre incremento na variável diabs e define o valor de prdiab como o cálculo percentual de quem tem diabetes.*/
                diabs++;
                val2=2;
                prdiab=diabs*100/qtc;
            }
            else{                                            /*Essa condição determina que, qualquer resposta que não entre nas condições anteriores, a resposta é válida e a variável prdiab recebe o valor de cáculo percentual de quem tem diabetes.*/
                val2=2;
                prdiab=diabs*100/qtc;
            }
        }while(val3!=2);                                     /*Esse laço de repetição serve para que, caso a resposta seja considerada inválida, a pergunta se repetir.*/

        do{
            printf("Problemas cardiacos:[1] se tiver e [2] se nao tiver:\n");        /*Aqui é perguntado se a criança possui problemas cardíacos.*/
            scanf("%d",&cardio);
            if(cardio!=1&&cardio!=2){                        /*Essa condição determina que qualquer resposta que seja diferente de 1 e 2 é considerada inválida, assim, a pergunta se repete.*/
                printf("Invalido.\n");
                val2=3;
            }
            else if(cardio==1){                              /*Essa condição determina que se a resposta for 1 (sim), ela é válida, ocorre incrementação na variável cardios e a variável prcardio recebe o valor de cáculo percentual das crianças que tem problemas cardíacos.*/
                cardios++;
                val2=2;
                prcardio=cardios*100/qtc;
            }
            else{                                            /*Essa condição determina que, qualquer resposta que não entre em nenhuma nas condiçoes anteriores, a resposta é válida e a variável recebe o valor de cálculo percentual.*/
                val2=2;
                prcardio=cardios*100/qtc;
            }
        }while(val3!=2);                                     /*Esse laço de repetição serve para que, caso a resposta seja considerada inválida, a pergunta se repetir.*/

        do{
            printf("Microcefalia:[1] se tiver e [2] se nao tiver:\n");       /*Aqui é perguntado se a criança possui microcefalia.*/
            scanf("%d",&micro);
            if(micro!=1&&micro!=2){                          /*Essa condição determina que qualquer resposta que seja diferente de 1 e 2 é considerada inválida, assim, a pergunta se repete.*/
                printf("Invalido.\n");
                val2=3;
            }
            else if(micro==1){                               /*Essa condição determina que se a resposta for 1 (sim), ela é válida, ocorre incrementação na variável micros e a variável prmicro recebe o valor de cáculo percentual das crianças que tem microcefalia.*/
                micros++;
                val2=2;
                prmicro=micros*100/qtc;
            }
            else{                                            /*Essa condição determina que, qualquer resposta que não entre em nenhuma nas condiçoes anteriores, a resposta é válida e a variável recebe o valor de cálculo percentual.*/
                val2=2;
                prmicro=micros*100/qtc;
            }
        }while(val3!=2);                                     /*Esse laço de repetição serve para que, caso a resposta seja considerada inválida, a pergunta se repetir.*/

        do{
            printf("\nPara encerrar digite [0]\nPara fazer outro cadastro digite [1]\nPara vizualizar dados dos cadastros realizados digite [2].\n");        /*No final do código são dadas três opções, realizar outro cadastro, ver os dados dos cadastros feitos e finalizar o programa.*/
            scanf("%d",&k);
            if(k==0){                                        /*Essa condição determina que se a resposta for 0, o programa é finalizado.*/
                return 0;
            }
            else if(k==2){                                    /*Essa condição determina que se a resposta for 2, são mostrados os dados dos cadastros realizados.*/
                printf("\nO total de criancas cadastradas e %d, dos quais:\nO percentual de criancas que nasceram no ano corrente e %d%%\nO percentual de meninos sobre meninas e %d%%.\nO percentual de pessoas com microcefalia e %d%%.\nO percentual de pessoas com diabetes e %d%%.\nO percentual de pessoas com problemas cardiacos e %d%%.\nO percentual de pessoas com plano de saude e %d%%.\n", qtc, pranocr, prsex, prmicro, prdiab, prcardio, prplan);
            }
            else if(k==1){                                    /*Essa condição é para caso a resposta seja um, assim, atendendo a última pergunta e realizando um novo cadastro.*/
                k==3;
            }
            else{                                             /*Essa condição é para caso o número digitado seja diferente de 0, 1 e 2, fazendo com que a pergunta seja refeita.*/
                printf("Comando invalido.");
                k==3;
            }
        }while(k==2);                                         /*Esse laço de repetição serve para que, caso a resposta da última entrada de dados seja 1, assim, um novo cadastro é iniciado.*/

    }while(k==1);
}
