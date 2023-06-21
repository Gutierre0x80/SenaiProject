#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>            //LIBRARIES

int main(){
    int  bb=5,i=3,socorro=0,cor=0, contcor=0,cat=0,d=0, q=0, t=0, f=0,menu=0, determinante,quant=0, security1=0,security2=0,security3=0,security4=0,security5=0,security6=0,security21=0,security22=0,security23=0,security24=0,security25=0,security31=0,security32=0,security33=0,security34=0,security35=0, security41=0,security42=0,security43=0,security44=0,security45=0,q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,q21=0,q22=0,q23=0,q24=0,q25=0,q31=0,q32=0,q33=0,q34=0,q35=0,q41=0,q42=0,q43=0,q44=0,q45=0,lam=0,fit=0,led=0,sinal=0,lumi=0,disj=0,quadro=0,tomada=0,adap=0,gera=0,rest=0,capa=0,dio=0,led4=0,proto=0;      // Variables
    float p=0, clp=0, ka=0, dmi=0, st=0, com=0, cam=0,gast;                         //Variables


    setlocale(LC_ALL,"portuguese");     // ATIVAR IDIOMA PORTUGUES

    char texto[] = "BEM-VINDO AO PROGRAMA ANIMAL DO SENAI IRADO\n\nO PROGRAMA SERÁ INCIADO EM: "; // A string que será alterada
    setlocale(LC_ALL, "Portuguese");
    while (socorro<5) { // Loop de cores
        system("cls");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, i);                                        // Sets the text color
        printf("%s%d", texto,bb);                                                   // prints the string
        i = (i + 1) % 8;                                                           // Change the color (0 to 7)
        Sleep(1000);                                                              // Pause for half a second
        bb = bb-1;                                                               // Subtract from stopwatch
        socorro++;                                                              //Add in repeat condition
    }

    do{                                                                          //start of loop
        system("cls");
        system("color 09");                                                     //saving current state


        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;                                      //command to save menu
        WORD saved_attributes;
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

            printf("\n\t\t\t\t________________________________________________________ \n\t\t      \t\t|                                                      | \n\t           \t\t| Escolha uma seção com base no seu número apresentado |\n\t\t\t\t|______________________________________________________| \n\t\t\t\t\n\n\n");

        SetConsoleTextAttribute(hConsole, saved_attributes);

            printf("[1] Automação Industrial \n[2] Iluminação \n[3] Eletríca \n[4] Eletrônica\n\n");                    //pergunta geral
            printf("\n\Digite o número da categoria que deseja comprar: ");
            scanf("%d",&cat);

        if(cat == 1){                                                                               //item 1
            system("cls");
            system("color 0A");                             //Saving menu color

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        WORD saved_attributes;
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("\n\t\t\t\t________________________________________________________ \n\t\t      \t\t|                                                      | \n\t           \t\t| Escolha uma seção com base no seu número apresentado |\n\t\t\t\t|______________________________________________________| \n\t\t\t\t\n\n\n");
            //Voltando ao estado original
            SetConsoleTextAttribute(hConsole, saved_attributes);
            printf("[1] CLP R$5.400,00\n[2] Kit Aruduíno R$380,00\n[3] DMI R$2.500,00\n[4] Sensor de Temperatura R$450,00\n[5] Compressor R$3.800,00\n[6] Câmera móvel R$140,00\n\n");
            printf("Digite o número do produto que deseja comprar: ");
            scanf("%d",&d);

        switch(d){                                                         

            case 1:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security1==0){
                quant++;
                security1++;
                }
                clp = q*5400+clp;
                q1 = q+q1;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%.2f nesta compra\n\nTotal: R$%.2f.\n\n\n\n",clp,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;
                }
            case 2:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security2==0){
                quant++;
                security2++;
                }
                ka = q*380+ka;
                q2 = q+q2;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%.2f nesta compra\n\nTotal: R$%.2f.\n\n\n\n",ka,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 3:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security3==0){
                quant++;
                security3++;
                }
                dmi = q*2500+dmi;
                q3 = q+q3;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%.2f nesta compra\n\nTotal: R$%.2f.\n\n\n\n",dmi,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 4:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security4==0){
                quant++;
                security4++;
                }
                st = q*450+st;
                q4 = q+q4;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%.2f nesta compra\n\nTotal: R$%.2f.\n\n\n\n",st,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 5:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security5==0){
                quant++;
                security5++;
                }
                com = q*3800+com;
                q5 = q+q5;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%.2f nesta compra\n\nTotal: R$%.2f.\n\n\n\n",com,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 6:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security6==0){
                quant++;
                security6++;
                }
                cam = q*140+cam;
                q6 = q+q6;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%.2f nesta compra\n\nTotal: R$%.2f.\n\n\n\n",cam,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 04");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            default:
                system("cls");
                system("color 0c");
                printf("Valor inválido");
                return 0;
                break;
        }}
        if(cat == 2){                                                                               //item 2
        system("cls");
        system("color 06");                 


        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        WORD saved_attributes;
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

            printf("\n\t\t\t\t________________________________________________________ \n\t\t      \t\t|                                                      | \n\t           \t\t| Escolha uma seção com base no seu número apresentado |\n\t\t\t\t|______________________________________________________| \n\t\t\t\t\n\n\n");

        SetConsoleTextAttribute(hConsole, saved_attributes);
            printf("[1] Lâmpada R$10.00\n[2] Fita de led R$45,00\n[3] led 5mm R$1,00\n[4] Sinaleiro led vermelho 220V R$10,00\n[5] Luminária solar R$60,00\n\n");
            printf("Digite o número do produto que deseja comprar: ");
            scanf("%d",&d);

        switch(d){
            case 1:                                                             
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security21==0){
                quant++;
                security21++;
                }
                lam = q*10+lam;
                q21 = q+q21;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",lam,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;
                }
            case 2:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security22==0){
                quant++;
                security22++;
                }
                fit = q*45+fit;
                q22 = q+q22;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",fit,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 3:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security23==0){
                quant++;
                security23++;
                }
                led = q+led;
                q23 = q+q23;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",led,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 4:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security24==0){
                quant++;
                security24++;
                }
                sinal = q*10+sinal;
                q24 = q+q24;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",sinal,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 5:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security25==0){
                quant++;
                security25++;
                }
                lumi = q*60+lumi;
                q25 = q+q25;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",lumi,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            default:
                system("cls");
                system("color 0c");
                printf("Valor inválido");
                return 0;
                break;
        }}
        if(cat == 3){                                                                               //item 3

        system("cls");
        system("color 0e");                                    


        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        WORD saved_attributes;
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

            printf("\n\t\t\t\t________________________________________________________ \n\t\t      \t\t|                                                      | \n\t           \t\t| Escolha uma seção com base no seu número apresentado |\n\t\t\t\t|______________________________________________________| \n\t\t\t\t\n\n\n");

        SetConsoleTextAttribute(hConsole, saved_attributes);
            printf("[1] Disjuntor R$20.00\n[2] Quadro de energia R$70,00\n[3] Tomada R$5,00\n[4] Adaptador R$4,00\n[5] Gerador R$1.450,00\n\n");
            printf("Digite o número do produto que deseja comprar: ");
            scanf("%d",&d);

        switch(d){
            case 1:                                                   
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security31==0){
                quant++;
                security31++;
                }
                disj = q*20+disj;
                q31 = q+q31;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",disj,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;
                }
            case 2:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security32==0){
                quant++;
                security32++;
                }
                quadro = q*70+quadro;
                q32 = q+q32;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",quadro,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 3:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security33==0){
                quant++;
                security33++;
                }
                tomada = q*5+tomada;
                q33 = q+q33;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",tomada,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 4:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security34==0){
                quant++;
                security34++;
                }
                adap = q*4+adap;
                q34 = q+q34;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",adap,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 5:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security35==0){
                quant++;
                security35++;
                }
                gera = q*1450+gera;
                q35 = q+q35;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",gera,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            default:
                system("cls");
                system("color 0c");
                printf("Valor inválido");
                return 0;
                break;
        }}
        if(cat == 4){                                                                               //item 4
        system("cls");
        system("color 05");                     


        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        WORD saved_attributes;
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\t\t\t\t________________________________________________________ \n\t\t      \t\t|                                                      | \n\t           \t\t| Escolha uma seção com base no seu número apresentado |\n\t\t\t\t|______________________________________________________| \n\t\t\t\t\n\n\n");


        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("[1] Resistores 10 Unidades R$2,00\n[2] Capacitores R$2,00\n[3] Diodos R$1,00\n[4] Led R$1,00\n[5] Protoboard R$20,00\n\n");
        printf("Digite o número do produto que deseja comprar: ");
        scanf("%d",&d);

        switch(d){

            case 1:
                printf("Quantos gostaria de comprar?: ");                           
                scanf("%d",&q);
                if(q>0){
                if(security41==0){
                quant++;
                security41++;
                }
                rest = q*2+rest;
                q41 = q+q41;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",rest,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;
                }
            case 2:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security42==0){
                quant++;
                security42++;
                }
                capa = q*2+capa;
                q42 = q+q42;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",capa,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 3:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security43==0){
                quant++;
                security43++;
                }
                dio = q+dio;
                q43 = q+q43;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",dio,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 4:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security44==0){
                quant++;
                security44++;
                }
                led4 = q+led4;
                q44 = q+q44;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",led4,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            case 5:
                printf("Quantos gostaria de comprar?: ");
                scanf("%d",&q);
                if(q>0){
                if(security45==0){
                quant++;
                security45++;
                }
                proto = q*20+proto;
                q45 = q+q45;
                p = clp+ka+dmi+st+com+cam+lam+fit+led+sinal+lumi+disj+quadro+tomada+adap+gera+rest+capa+dio+led4+proto;
                printf("\n\nVocê está gastando R$%d nesta compra\n\nTotal: R$%.2f.\n\n\n\n",proto,p);
                printf("\nDigite 1 para continuar comprando e 0 para sair da compra: ");
                scanf("%d",&determinante);
                system("cls");
                break;}
                else{
                    system("cls");
                    system("color 0c");
                    printf("\n\nÉ preciso comprar pelo menos 1 produto\n\n");
                    return 0;}
            default:
                system("cls");
                system("color 0c");
                printf("Valor inválido");
                return 0;
                break;
        }}
        }while(determinante == 1);                                                        //end of loop
    if(quant > 2){                               

        system("cls");
        system("color 09");


        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;                                      //command to save menu
        WORD saved_attributes;
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;


        SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
        printf("Os produtos comprados foram: \n\n");
        SetConsoleTextAttribute(hConsole, saved_attributes);


        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("Automação Industrial:");
        SetConsoleTextAttribute(hConsole, saved_attributes);


        printf("\n[%d] CLP\n[%d] Kit Arduíno\n[%d] DMI\n[%d] Sensor de temperatura\n[%d] Compressor\n[%d] Câmera Móvel\n\n",q1,q2,q3,q4,q5,q6);

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED
                                );
        printf("Iluminação:");
        SetConsoleTextAttribute(hConsole, saved_attributes);

        printf("\n[%d] Lâmpada\n[%d] Fita de led\n[%d] Led\n[%d] Sinaleiro\n[%d] Luminária solar\n\n",q21,q22,q23,q24,q25);

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("Elétrica:");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("\n[%d] Disjuntor\n[%d] Quadro de Energia\n[%d] Tomada\n[%d] Adaptador\n[%d] Gerador\n\n",q31,q32,q33,q34,q35);
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("Eletrônica:");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("\n[%d] Resistores(x10)\n[%d] Capacitores\n[%d] Diodos\n[%d] Led\n[%d] Protoboard\n",q41,q42,q43,q44,q45);
        
        printf("\n\nO preço total ficou: R$%.2f.\n\n\n\n",p);
        system("pause");

    return 0;
    }

        system("color 0c");
        system("cls");                                                                                                                             // error case
        printf("\nDe acordo com nossas diretrizes, é preciso comprar ao menos 3 categorias distintas de produtos\n\n");
    return 0;
}