#include <iostream>
#include <locale.h>
#include <time.h>//Biblioteca de tempo/horário.
#include <stdlib.h>

using namespace std;

int main (){//ÍNICIO.
	
	setlocale(LC_ALL, "portuguese");//Caracteres especias e assentos podem ser usados.
	
	
	int n1, n2, n3, n4, n5, senha;
	int a1, a2, a3, a4, a5;
	int acertounumeroelocal = 0;
	int acertounumero = 0;
	int vid; //Tentativas modo fácil.
	int vidas; //Tentativas modo médio
	int vida; //Tentativas modo díficil.
	float menu;
	float dificuldade;
	int voltar;
	
	do{
			int vid = 8;//Nível fácil recebe oito tentativas
			int vidas = 10;//Nível médio recebe dez tentativas
			int vida = 12;//Nível difícil recebe doze tentativas
			int acertounumeroelocal = 0;
			int acertounumero = 0;
			
	system("cls");
	
	do{ //Apresentação do jogo e menu principal 
		
		cout << "                                           SEJA BEM-VINDO AO JOGO DA SENHA!\n\n";
		cout << "                   Seu objetivo é tentar acertar uma senha aleatória em um certo número de tentativas.\n\n\n\n\n";
		cout << "                                                     MENU INICIAL\n\n";
		cout << "                                             1- Jogar   2- Sobre  3- Fim: ";
		cin >> menu;
		system("cls");
		
	if(menu == 1){//Pula pra escolha da dificuldade.
		break;
		
	}else if(menu == 2){//A proposta é apresentada.
		cout << "\nEste é o jogo MASTER MIND, conhecido nacionalmente como o JOGO DA SENHA.\nFoi o jogo de tabuleiro mais bem-sucedido dos anos 70.\n";
		cout << "O objetivo principal do jogador era descobrir a ordem correta das cores.\n";
		cout << "Foi inspirado nisso que o professor de 'Algoritmos e programação' Eduardo Alvez da Silva propôs este trabalho.\nNo entanto, diferentemente da versão original, ";
		cout << "hoje vamos trabalhar com números.\nVocê terá que desvendar qual é a senha do jogo através de dicas que serão exibidas no console.\n\n";
		cout << "Produzido por: (Lucas Zanelato, Rafael Marques e Lucas Francelino em Maio de 2024).\n\n";
		system ("pause");
		system("cls");
		
	}else if(menu == 3){//O jogo é encerrado.
		cout << "Obrigado por participar até aqui!";
		return 0;
		
	}else{
		cout << "Número digitado inválido. Tente novamente!\n\n";
		system ("pause");
		system("cls");
		
	}
	}while(menu == 2 || menu != 1 || menu != 3); //Garanto que o usuário escolha uma opção válida, e que só saia do loop quando clicar em 'jogar'.
	system("cls");
	
	while(dificuldade != 1 || dificuldade != 2 || dificuldade != 3){
	
	cout << "                                                ESCOLHA A DIFICULDADE\n\n" << "                                          1- Fácil  2- Médio  3- Difícil: ";
	cin >> dificuldade;
	system("cls");
		
	if(dificuldade == 1){
	break;
		
	}else if(dificuldade == 2){
	break;
		
	}else if(dificuldade == 3){
	break;
		
	}else{
	cout << "Valor inválido. Tente novamente!\n\n";
	system ("pause");
	system("cls");
		
	}
	}//Uso esse loop pra garantir que o usuário selecione um valor válido e que escolha a dificuldade desejada.
    
    cout << "REGRA: É válido somente números entre 1 e 6, e nenhum dígito pode se repetir!\n\n\n"; //Apresento a regra.
    
    if(dificuldade == 2){//Entra no nível 'médio' se o usuário tiver escolhido a opção '2'. 
		
    	srand(time(NULL));

    a1 = (rand() % 6) + 1;

    do {
        a2 = (rand() % 6) + 1;

    } while(a2 == a1);
    
    do {
        a3 = (rand() % 6) + 1;

    } while(a3 == a2 || a3 == a1);
    
    do {
        a4 = (rand() % 6) + 1;

    } while(a4 == a3 || a4 == a2 || a4 == a1);//Gero uma senha aletória de '4' dígitos com números entre 1 e 6 e garanto que os números não se repitam.
    
    //	cout << a1 << a2 << a3 << a4;
    	cout << "Nesse nível você precisa descobrir uma senha de 4 dígitos em apenas 10 tentativas. BOA SORTE!";//Falo o modo de jogo dessa dificuldade.
    	cout << "\n\n\n\n";
		system("pause");
		system("cls");
    
   do {
   	
   	
        if (vidas > 0) {
			
			do{
	
            cout << "Dígite a senha: ";
            cin >> senha;
    
            n1 = senha / 1000;//Transformo o primeiro valor dígitado em uma váriavel.
            n2 = (senha % 1000) / 100;//Transformo o segundo valor dígitado em uma váriavel.
            n3 = (senha % 100) / 10;//Transformo o terçeiro valor dígitado em uma váriavel.  
            n4 = senha % 10;//Transformo o quarto valor dígitado em uma váriavel.
            //Uso isso para que não seja necessário o usuário digitar '4' valores, sendo assim ele dígita um valor único ex: 1234.
            
            if(n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4){
            	cout << "\nATENÇÃO: senha inválida. São permitidos apenas 4 dígitos por tentativa, e os números aceitos estão entre 1 e 6, os dígitos não podem se repetir. Tente novamente!\n\n";
            	system("pause");
    			cout << "\n\n";//Garanto que números repetidos não sejam aceitos.
    			
			}else if(n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6){
				cout << "\nATENÇÃO: senha inválida. São permitidos apenas 4 dígitos por tentativa, e os números aceitos estão entre 1 e 6, os dígitos não podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";//Garanto que números menores que '1' ou maiores que '6' não sejam aceitos.
   				
			}
			
		}while(n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4 || n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6 );
		//Garanto que números repetidos e números menores que '1' ou maiores que '6' não sejam aceitos.
		
		//A parte principal do programa, o jogo acontece aqui, é aonde as comparações são feitas.
            if (n1 == a1) {
                acertounumeroelocal++;
            } else if (n1 == a2 || n1 == a3 || n1 == a4) {
                acertounumero++;
            }
            
            if (n2 == a2) {
                acertounumeroelocal++;
            } else if (n2 == a1 || n2 == a3 || n2 == a4) {
                acertounumero++;
            }
            
            if (n3 == a3) {
                acertounumeroelocal++;
            } else if (n3 == a1 || n3 == a2 || n3 == a4) {
                acertounumero++;
            }
 			if (n4 == a4) {
                acertounumeroelocal++;
            } else if (n4 == a1 || n4 == a2 || n4 == a3) {
                acertounumero++;
            }
            
            cout << "\nAcertou " << acertounumeroelocal << " números no lugar certo" << endl;//Mostro quantos números estão certos e no lugar certo.
            cout << "Acertou " << acertounumero << " números no lugar errado\n\n";//Mostro quantos números estão certos e no lugar errado.
            
            vidas = vidas - 1;
            
            cout << "RESTAM " << vidas << " TENTATIVAS\n\n\n\n";//Indico para o usuário em qual tentativa ele está.
            
       		 } if(n1 == a1 && n2 == a2 && n3 == a3 && n4 == a4){
       		 	cout << "PARABÉNS VOCÊ DESCOBRIU A SENHA!\n\n";//Quando o usuário acertar a senha o loop é interrompido e a mensagem de vitória é exibida.
       		 	break;
				}if(vidas == 0){
					cout << "VOCÊ PERDEU!\nsenha era: " << a1 << a2 << a3 << a4;//Se a senha não for acertada pelo usuário a mensagem de derrota é exibida.
					break;//Se não acertar a senha o programa é finalizado.
				}
        
        acertounumero = 0;//Preciso zerar os contadores para que eles não fiquem somando.
        acertounumeroelocal = 0;//Preciso zerar os contadores para que eles não fiquem somando.
        
    }while(n1 != a1 || n2 != a2 || n3 != a3 || n4 != a4);//O loop só acaba quando a senha for acertada ou quando as tentativas acabam.
}
    
    if(dificuldade == 1){//Entra no nível 'fácil' se o usuário tiver escolhido a opção '1'. 
    	
    	srand(time(NULL));

    a1 = (rand() % 6) + 1;

    do {
        a2 = (rand() % 6) + 1;

    } while(a2 == a1);
    
    do {
        a3 = (rand() % 6) + 1;

    } while(a3 == a2 || a3 == a1);//Gero uma senha aletória de '3' dígitos com números entre 1 e 6 e garanto que os números não se repitam.
    
        // cout << a1 << a2 << a3;	
    	cout << "Nesse nível você precisa descobrir uma senha de 3 dígitos em apenas 8 tentativas. BOA SORTE!";//Falo o modo de jogo dessa dificuldade.
    	cout << "\n\n\n";
		system("pause");
		system("cls");
    	
	do {
   	
        if (vid > 0) {
			
			do{
			 
            cout << "Dígite a senha: ";
            cin >> senha;
       
            n1 =  senha / 100;//Transformo o primeiro valor dígitado em uma váriavel.
            n2 = (senha % 100) / 10;//Transformo o segundo valor dígitado em uma váriavel.
            n3 = senha % 10;//Transformo o terçeiro valor dígitado em uma váriavel.
            //Uso isso para que não seja necessário o usuário digitar '3' valores, sendo assim ele dígita um valor único ex: 123.
            
            if(n1 == n2 || n1 == n3 || n2 == n3){
            	cout << "\nSenha inválida. São permitidos apenas 3 dígitos por tentativa, e os números aceitos estão entre 1 e 6, os dígitos não podem se repetir. Tente novamente!\n\n";
            	system("pause");
    			cout << "\n\n";//Garanto que números repetidos não sejam aceitos.
    			
			}else if(n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 ){
				cout << "\nSenha inválida. São permitidos apenas 3 dígitos por tentativa, e os números aceitos estão entre 1 e 6, os dígitos não podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";//Garanto que números menores que '1' ou maiores que '6' não sejam aceitos.
   				
			}
			
		}while(n1 == n2 || n1 == n3 || n2 == n3 || n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 );
    	//Garanto que números repetidos e números menores que '1' ou maiores que '6' não sejam aceitos.
    	
    	//A parte principal do programa, o jogo acontece aqui, é aonde as comparações são feitas.
            if (n1 == a1) {
                acertounumeroelocal++;
            } else if (n1 == a2 || n1 == a3 ) {
                acertounumero++;
            }
            
            if (n2 == a2) {
                acertounumeroelocal++;
            } else if (n2 == a1 || n2 == a3 ) {
                acertounumero++;
            }
            
            if (n3 == a3) {
                acertounumeroelocal++;
            } else if (n3 == a1 || n3 == a2 ) {
                acertounumero++;
            }
            
            cout << "\nAcertou " << acertounumeroelocal << " números no lugar certo" << endl;//Mostro quantos números estão certos e no lugar certo.
            cout << "Acertou " << acertounumero << " números no lugar errado\n\n";//Mostro quantos números estão certos e no lugar errado.
            
            vid = vid - 1;
            
            cout << "RESTAM " << vid << " TENTATIVAS\n\n\n\n";//Indico para o usuário em qual tentativa ele está.
            
       		 } if(n1 == a1 && n2 == a2 && n3 == a3){
       		 	cout << "PARABÉNS VOCÊ DESCOBRIU A SENHA!\n\n";//Quando o usuário acertar a senha o loop é interrompido e a mensagem de vitória é exibida.
       		 	break;
				}if(vid == 0){
					cout << "VOCÊ PERDEU!\nsenha era: " << a1 << a2 << a3;//Se a senha não for acertada pelo usuário a mensagem de derrota é exibida.
					break;//Se não acertar a senha o programa é finalizado.
				}
        
        acertounumero = 0;//Preciso zerar os contadores para que eles não fiquem somando.
        acertounumeroelocal = 0;//Preciso zerar os contadores para que eles não fiquem somando.
        
    }while(n1 != a1 || n2 != a2 || n3 != a3 );//O loop só acaba quando a senha for acertada ou quando as tentativas acabam.
}
    if(dificuldade == 3){//Entra no nível 'difícil' se o usuário tiver escolhido a opção '3'. 
    	
    	srand(time(NULL));

    a1 = (rand() % 6) + 1;

    do {
        a2 = (rand() % 6) + 1;

    } while(a2 == a1);
    
    do {
        a3 = (rand() % 6) + 1;

    } while(a3 == a2 || a3 == a1);
    
    do {
        a4 = (rand() % 6) + 1;

    } while(a4 == a3 || a4 == a2 || a4 == a1);
    
    do {
        a5 = (rand() % 6) + 1;

    } while(a5 == a1 || a5 == a2 || a5 == a3 || a5 == a4);//Gero uma senha aletória de '5' dígitos com números entre 1 e 6 e garanto que os números não se repitam.
    
    
    //	cout << a1 << a2 << a3 << a4 << a5;
    	cout << "Nesse nível você precisa descobrir uma senha de 5 dígitos em apenas 12 tentativas. BOA SORTE!";//Falo o modo de jogo dessa dificuldade.
    	cout << "\n\n\n";
		system("pause");
		system("cls");
	
	do {
   	
        if (vida > 0) {
			
			do{
	
            cout << "Dígite a senha: ";
            cin >> senha;
    
    		n1 = senha / 10000;//Transformo o primeiro valor dígitado em uma váriavel.
            n2 = (senha % 10000) / 1000;//Transformo o segundo valor dígitado em uma váriavel.
            n3 = (senha % 1000) / 100;//Transformo o terçeiro valor dígitado em uma váriavel.
            n4 = (senha % 100) / 10;//Transformo o quarto valor dígitado em uma váriavel.
            n5 = senha % 10;//Transformo o quinto valor dígitado em uma váriavel.
            //Uso isso para que não seja necessário o usuário digitar '5' valores, sendo assim ele dígita um valor único ex: 12345.
            
            if(n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5|| n2 == n3 || n2 == n4 || n2 == n5|| n3 == n4 || n3 == n5 || n4 == n5){
            	cout << "\nSenha inválida. São permitidos apenas 5 dígitos por tentativa, e os números aceitos estão entre 1 e 6, os dígitos não podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";//Garanto que números repetidos não sejam aceitos.
    			
			}else if(n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6 || n5 < 1 || n5 > 6){
				cout << "\nSenha inválida. São permitidos apenas 5 dígitos por tentativa, e os números aceitos estão entre 1 e 6, os dígitos não podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";//Garanto que números menores que '1' ou maiores que '6' não sejam aceitos.
   				
			}
			
		}while(n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5|| n2 == n3 || n2 == n4 || n2 == n5|| n3 == n4 || n3 == n5 || n4 == n5 || n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6 || n5 < 1 || n5 > 6 );
    	//Garanto que números repetidos e números menores que '1' ou maiores que '6' não sejam aceitos.
    	
    	//A parte principal do programa, o jogo acontece aqui, é aonde as comparações são feitas.
            if (n1 == a1) {
                acertounumeroelocal++;
            } else if (n1 == a2 || n1 == a3 || n1 == a4 || n1 == a5) {
                acertounumero++;
            }
            if (n2 == a2) {
                acertounumeroelocal++;
            } else if (n2 == a1 || n2 == a3 || n2 == a4 || n2 == a5) {
                acertounumero++;
            }
            if (n3 == a3) {
                acertounumeroelocal++;
            } else if (n3 == a1 || n3 == a2 || n3 == a4 || n3 == a5) {
                acertounumero++;
            }
 			if (n4 == a4) {
                acertounumeroelocal++;
            } else if (n4 == a1 || n4 == a2 || n4 == a3 || n4 == a5) {
                acertounumero++;
            }
            if (n5 == a5) {
                acertounumeroelocal++;
            } else if (n5 == a1 || n5 == a2 || n5 == a3 || n5 == a4) {
                acertounumero++;
            }
            
            cout << "\nAcertou " << acertounumeroelocal << " números no lugar certo" << endl;//Mostro quantos números estão certos e no lugar certo.
            cout << "Acertou " << acertounumero << " números no lugar errado\n\n";//Mostro quantos números estão certos e no lugar errado.
            
            vida = vida - 1;
            
            cout << "RESTAM " << vida << " TENTATIVAS\n\n\n\n";//Indico para o usuário em qual tentativa ele está.
            
       		 } if(n1 == a1 && n2 == a2 && n3 == a3 && n4 == a4 && n5 == a5){
       		 	cout << "PARABÉNS VOCÊ DESCOBRIU A SENHA!\n\n";//Quando o usuário acertar a senha o loop é interrompido e a mensagem de vitória é exibida.
       		 	break;
				}if(vida == 0){
					cout << "VOCÊ PERDEU!\nsenha era: " << a1 << a2 << a3 << a4 << a5;//Se a senha não for acertada pelo usuário a mensagem de derrota é exibida.
					break;//Se não acertar a senha o programa é finalizado.
				}
        
        acertounumero = 0;//Preciso zerar os contadores para que eles não fiquem somando.
        acertounumeroelocal = 0;//Preciso zerar os contadores para que eles não fiquem somando.
        
    }while(n1 != a1 || n2 != a2 || n3 != a3 || n4 != a4 || n5 != a5);//O loop só acaba quando a senha for acertada ou quando as tentativas acabam.
}
	do{
	
	cout << "\n\nDeseja voltar ao menu principal?\n ";
    cout << "\n1- Sim   2- Não: " ;
    cin >> voltar;
    
    if(voltar == 1){
    	break;
	}else if(voltar == 2){
		return 0;
	}else{
		cout << "\nNúmero inválido. Tente novamente!\n\n";
		system("pause");
		system("cls");
	}
	
	}while(voltar != 1 || voltar == 2);//Garanto que só 1 & 2 executem ações.
    
}while(voltar != 2);//Se o usuário acertar ou errar a senha ele tem a opção de voltar ao menu principal.

	return 0;//FIM.
	   
}

