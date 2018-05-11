#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <list>

#define NPISTAS 2     // Define a constante "NPISTAS" como 2. Sempre que "NPISTAS" for invocado, o valor será substituído por 2
#define NVOOS 100

 
using namespace std;


       
struct Pista{
    private:
        int comprimento;
        string identificacao;
        int largura;
        int limitePeso;
        
    public:
        Pista(){
        }
        
    //setters
	void setComprimento(int comprimento){
    	this->comprimento = comprimento;
    } 
	
	void setIdentificacao(string identificacao){
    	this->identificacao = identificacao;
    }
	
	void setLargura(int largura){
    	this->largura = largura;
    }   
    
    void setLimitePeso(int limitePeso){
    	this->limitePeso = limitePeso;
    }
    
    //getters
    int getComprimento(){
    	return comprimento;
    }
    
    string getIdentificacao(){
    	return identificacao;
    }
    
    int getLargura(){
    	return largura;
    }
    
    int getLimitePeso(){
    	return limitePeso;
    }
};

struct Voo{
    private:
        string codigo;
        string origem;
        string destino;
        int pesoAviao;
        int velocidadeMaxima;
        int kmPercurso;
        
    public:
        Voo(){
        }
        
    //setters
	void setCodigo(string codigo){
    	this->codigo = codigo;
    }
	
	void setOrigem(string origem){
    	this->origem = origem;
    }   
	
	void setDestino(string destino){
    	this->destino = destino;
    } 
    
    void setPesoAviao(int pesoAviao){
    	this->pesoAviao = pesoAviao;
    }
	
	void setVelocidadeMaxima(int velocidadeMaxima){
    	this->velocidadeMaxima = velocidadeMaxima;
    } 
    
    void setKmPercurso(int kmPercurso){
    	this->kmPercurso = kmPercurso;
    }
    
    //getters
    string getCodigo(){
    	return codigo;
    }
    
    string getOrigem(){
    	return origem;
    }
    
    string getDestino(){
    	return destino;
    }
    
    int getPesoAviao(){
    	return pesoAviao;
    }
    
    int getVelocidadeMaxima(){
    	return velocidadeMaxima;
    }
    
    int getKmPercurso(){
    	return kmPercurso;
    }
};

struct Aeroporto{
	
    private:
        int idAeroporto;
        string nomeAeroporto;
        int latitude;
        int longitude;
        string cidade;
        Pista pistas[NPISTAS];
        Voo planosVoos[NPISTAS];
        Voo filaDecolagem[NVOOS];
        
    public:
        Aeroporto(){
        
		}
		
        Aeroporto(int idAeroporto, string nomeAeroporto, int latitude, int longitude, string cidade){
        	this->idAeroporto = idAeroporto;
        	this->nomeAeroporto = nomeAeroporto;
        	this->latitude = latitude;
        	this->longitude = longitude;
        	this->cidade = cidade;
        }
        
        
    //setters    
    void setidAeroporto(int idAeroporto){
    	this->idAeroporto = idAeroporto;
    }
    
    void setnomeAeroporto(string nomeAeroporto){
    	this->nomeAeroporto = nomeAeroporto;
    }
    
    void setLatitude(int latitude){
    	this->latitude = latitude;
    }
    
    void setLongitude(int longitude){
    	this->longitude = longitude;
    }
    
    void setCidade(string cidade){
    	this->cidade = cidade;
    }
    
    void setPistas(Pista pistas[NPISTAS]){
    	this->pistas[NPISTAS] = pistas[NPISTAS];
    }
    
    void setPlanosVoos(Voo planosVoos[NPISTAS]){
    	this->planosVoos[NPISTAS] = planosVoos[NPISTAS];
    }
    
    void setFilaDecolagem(Voo filaDecolagem[NVOOS]){
    	this->filaDecolagem[NVOOS] = filaDecolagem[NVOOS];
    }
    
    //getters
    int getidAeroporto(){
    	return idAeroporto;
    }

	string getnomeAeroporto(){
    	return nomeAeroporto;
    }
    
    int getLatitude(){
    	return latitude;
    }
    
    int getLongitude(){
    	return longitude;
    }

	string getCidade(){
    	return cidade;
    }
    
    Pista getPistas(){
    	return pistas[NPISTAS];
    }
    
    Voo getPlanosVoos(){
    	return planosVoos[NPISTAS];
    }
    
    Voo getFilaDecolagem(){
    	return filaDecolagem[NVOOS];
    }
};


int idAeroporto = 0;
Aeroporto vetAeroporto[100];
//list<Aeroporto> listaAeroportos;

void cadastroAeroportos(){
	
	string nomeAeroportoTemp, cidadeTemp;
	int latitudeTemp, longitudeTemp;
	
	printf("Insira o nome do aeroporto: \n"); 
	scanf("%[]", &nomeAeroportoTemp);
	//getline(cin, nomeAeroportoTemp); 
	//vetAeroporto[idAeroporto].setnomeAeroporto(&nomeAeroportoTemp);
	
	printf("Insira a cidade local do aeroporto: \n");
	scanf("%[]", &cidadeTemp);
	//getline(cin, cidadeTemp);
	//vetAeroporto[idAeroporto].setCidade(&cidadeTemp);
	
	printf("Insira a latitude: \n");
	scanf("%i", &latitudeTemp);
	//getline(cin, latitudeTemp);
	//vetAeroporto[idAeroporto].setLatitude(&latitudeTemp);
	
	printf("Insira a longitude: \n");
	scanf("%i", &longitudeTemp);
	//getline(cin, longitudeTemp);
	//vetAeroporto[idAeroporto].setLongitude(&Aeroporto.setLongitude());
	
	vetAeroporto[idAeroporto] = Aeroporto(idAeroporto, nomeAeroportoTemp, latitudeTemp, longitudeTemp, cidadeTemp);
	//Aeroporto auxAeroporto = Aeroporto(idAeroporto, nomeAeroporto, latitude, longitude, cidade);
	//listaAeroportos.push_front(auxAeroporto);
	idAeroporto ++;
}


int main (void){

	int op;
	int count = 0;
	
	do{
	
		printf("\t \t Gerenciador de Aeroportos \n \n");
		printf("Digite a funcao desejada: \n\n");
		printf("1 - Cadastrar novo aeroporto \n");
		printf("2 - Cadastrar novo voo \n");
		printf("3 - Detalhes do aeroporto \n");
		printf("4 - Detalhes do voo \n");
		printf("5 - Cronogama de voos \n");
		printf("6 - Aeroportos cadastrados e seus destinos \n");
		
		scanf("%d", &op);
		
		switch(op){
	
			case 1:
				//Cadastrar novo aeroporto
				void cadastroAeroportos();
				break;
			
			case 2:
				 //Cadastrar novo voo
				break;
			
			case 3:
				 //Detalhes do aeroporto
				break;
			
			case 4:
				 //Detalhes do voo
				break;
			
			case 5:
				 //Cronograma de voos
				break;
			
			case 6:
				 //Aeroportos cadastrados e seus destinos
				 for( int i = 0; i < idAeroporto; i++){
				 	printf("Nome do aeroporto: %[]", vetAeroporto[i].getnomeAeroporto());
				 }
				 
				break;
		}
		
		printf("Deseja voltar para o menu? \n\n");	
		printf("1 - Sim \n");
		printf("0 - Nao \n");		
		scanf("%d", &count);
			
	
	}	while(count != 0);
	
	printf("Ate mais!");
	system("PAUSE");

	
return 0;
}
