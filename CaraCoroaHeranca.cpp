#include <iostream>
#include <cstdlib>
using namespace std;

int n, perda=0, ganho=0;
char nome[30];
	
class Nome_Jogador{

	public:

		Nome_Jogador(){
	
		cout<<"\nSeja bem vindo ao jogo Cara e coroa. Boa sorte"<<endl;
		cout<<"\nQual o nome do Jogador: ";
		cin>>nome;
		system("cls");
	}	
};

class Intermediaria : public Nome_Jogador{
	
	public:
		
		Intermediaria()
		{
		
		cout<<"\n"<<nome<<" quantas vezes voce deseja jogar?"<<endl;
		cin>>n;
		system("cls");
		
		for(int i=0 ; i < n; i++)
		{
			int resp;
			cout<<nome<<" faca  sua escolha"<<endl;  
			cout<<"Digite 0 = Cara\n       1 = Coroa "<<endl;
			cin>>resp;
		
			while(resp != 0 && resp != 1)
			{
				cout<<nome<<" digite apenas 0 e 1 para jogar"<<endl;
				cin>>resp;	
			}
			
			if((rand()%2)==resp)
			{
				ganho++;
				if(resp==0)
				cout<<"Cara! Voce acertou "<<nome<<"\n"<<endl;
				else
				cout<<"Coroa! Voce acertou "<<nome<<"\n"<<endl;	  		  			
			}
			
			else
			{
				perda++;
				if(resp==1)
				cout<<"Cara! Voce perdeu "<<nome<<"\n"<<endl;
				else
				cout<<"Coroa! Voce perdeu "<<nome<<"\n"<<endl;
			}
		}
	}
};
		
class Result_Cara_Coroa : public Intermediaria{
	
	public:
		
		Result_Cara_Coroa(){
		cout<<nome<<" o seu resultado e: "<<endl;
		cout<<"O numero de jogos que voce ganho foi: "<<ganho<<endl;
		cout<<"O numero de jogos que voce perdeu foi: "<<perda<<endl;
	
		}
};

int main(void)
{
	Result_Cara_Coroa c;
}
