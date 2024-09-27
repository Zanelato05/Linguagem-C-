/*Uma empresa contratou-o para desenvolver um software para realizar a seleção de pessoal para seu quadro de funcionários. O software deve solicitar os seguintes dados dos candidatos: 
• Número de inscrição; 
• Idade; 
• Sexo (M ou F); 
• Possui experiência anterior (S ou N) 
A entrada dos dados deve ser encerrada quando o número de inscrição for igual a -1. 
Não é necessário fazer a consistência de nenhuma das informações digitadas. 
A empresa solicitou que as seguintes informações fossem exibidas na tela após a entrada dos dados: 
a) Quantidade de candidatos do sexo feminino; 
b) Idade média dos homens que apresentam experiência anterior; 
c) Porcentagem dos homens com mais de 45 anos; 
d) Quantidade de mulheres com idade inferior a 35 anos e com experiência anterior; 
e) Entre as mulheres que já tem experiência anterior, a que possui menor idade.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");

	int letraA;
	int letraB;
	int letraC;
	int letraD;
	int letraE;
	
	int inscricao = 1;
	int idade;
	char sexo;
	char experiencia;
	
	int contF = 0;
	int contM = 0;
	int contS = 0;
	int contN = 0;
	int somaidadeM = 0;
	int contMS;
	int contM45;
	int contF35S;
	int menoridadeMS;
	
	while(inscricao != -1){
	
	cout << "Dígite o número da sua inscrição: ";
	cin >> inscricao;
	
	if(inscricao != -1){
	
	cout << "\nDígite a sua idade: ";
	cin >> idade;
	
	cout << "\nQual seu gênero 1- Masculino  2- Feminino: ";
	cin >> sexo;
	
	if(sexo == 2){
		contF++;
		letraA = contF;
	}else if(sexo == 1){
		contM++;
	}
	
	cout << "\nPossuí experiência anterior 1- Sim  2- Não: ";
	cin >> experiencia;
	
	if(sexo = 1 && experiencia == 1){
		somaidadeM += idade;
		contMS++;
		letraB = somaidadeM/contMS;
	}
	
	if(sexo == 1 && idade > 45){
		contM45++;
		
	}
	
	if(sexo == 2 && idade < 35 && experiencia == 1){
		contF35S++;
		letraD = contF35S;
	}
	
	if(sexo == 2 && experiencia == 1){
		
		if(idade < menoridadeMS){
			
			menoridadeMS = idade;
			letraE = inscricao;
		}
	}
	letraC = ((contM45*100) / contM);
	

	system("cls");
}
}
	
	cout << "a) Quantidade de candidatos do sexo feminino " << letraA;
	cout << "\n\nb) Idade média dos homens que apresentam experiência anterior " << letraB;
	cout << "\n\nc) Porcentagem dos homens com mais de 45 anos " << letraC;
	cout << "\n\nd) Quantidade de mulheres com idade inferior a 35 anos e com experiência anterior " << letraD;
	cout << "\n\ne) Entre as mulheres que já tem experiência anterior, a que possui menor idade é a de matricula número " << letraE << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	return 0;
	
}
