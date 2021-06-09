#include <stdio.h>				
#include <locale.h>

/*  ALUNO : THIAGO DA SILVA MENEZES
*   RA  :   21001298-5
*	CURSO : ENGENHARIA DE SOFTWARE
*	DISCIPLINA : ALGORITMOS E LOGICA DE PROGRAMACAO II 
*/
int numV,menu,maria,joao,ze,nulo,invalidado,invalidado2,zureta,gomes,nulo2;
char restart = 'c';													// <--- Criacao das variaveis utilizadas no algoritmo.
int voto = 1;

int main(){
	
setlocale(LC_ALL, "Portuguese");
void vereadores();
void prefeito();
void resumo();

		printf("=========================================\n");
		printf("| ELEIÇÕES 2021 - PREFEITO E VEREADORES |\n");
		printf("|    PESQUISA DE URNA - DATA PAPER      |\n");		// < ---- Inicio do programa, com menu das categorias
		printf("=========================================\n");
		printf("1 - VOTAR : \n");
		printf("2 - APURAÇÃO : \n");
		printf("3 - SAIR : \n");
			scanf("%d", &menu);
			fflush(stdin);
						system("cls");
					
		if (menu == 1){
			
				vereadores();
					prefeito();
					
					 }												// < ---- condicoes de acesso a cada categoria
		if (menu == 2){
			
				resumo();
				
				}
		if (menu == 3){
			
				printf("\n\n\n\n\n OBRIGADO POR TER VOTADO !!! \n\n\n\n");    			//  <--- Aqui finaliza a aplicacao.
					getchar();
						exit(0);		
			}
	return 0;
		}
							
	void vereadores(){   													            // < --- Inicio da Funcao (procedimento) vereadores.
	
	printf("\n\n ELEIÇÃO 2021 - VEREADORES \n");      
            printf(" _______________________      URNA ELETRONICA     \n");
            printf(" |  _________          |     |  1  |  2  |  3 |   \n");
            printf(" |  |  |  |  |         |     |  4  |  5  |  6 |   \n");
            printf(" |  ---------          |     |  7  |  8  |  9 |   \n");
            printf(" |                     |           |  0  |        \n");								
            printf(" |                     |                          \n");
            printf(" |_____________________|\n\n"); 
            printf("Por favor, informe o numero do seu candidato :    \n\n");
            printf("Nº: 111 - João do Frete    \n");
            printf("Nº: 222 - Maria da Pamonha \n");
            printf("Nº: 333 - Zé da Farmacia   \n");
            printf("Nº: 444 - Voto Nulo        \n");
            printf("\n\nInforme aqui, o numero do candidato : ");
            scanf ("%d", &numV);
            fflush(stdin);
            system("cls");
            
            if( numV != 111 && numV != 222 && numV != 333 && numV != 444)
							{
						   system("cls");
						   printf("\n\n ELEIÇÃO 2021 - VEREADORES \n");	
            			   printf(" _______________________      URNA ELETRONICA  \n");
            			   printf(" |  ____________       |     |  1  |  2  |  3 |\n");
                           printf(" |  | X | X | X |      |     |  4  |  5  |  6 |\n");
                           printf(" |  ------------       |     |  7  |  8  |  9 |\n");
                           printf(" |      VOTO           |           |  0  |     \n");
                           printf(" |     INVALIDO        |                       \n");
                           printf(" |_____________________|\n\n");
                           		invalidado = invalidado + voto;
            			   printf("\n\n\n\n\n\t******* NUMERO NÃO CORRESPONDE A NENHUM CANDIDATO, VOTO INVALIDADO! *******\n\n");  
           				  }
            switch(numV){
              case 111 :   printf("\n\n ELEIÇÃO 2021 - VEREADORES \n");	
            			   printf(" _______________________      URNA ELETRONICA  \n");
            			   printf(" |  ____________       |     |  1  |  2  |  3 |\n");
                           printf(" |  | 1 | 1 | 1 |      |     |  4  |  5  |  6 |\n");
                           printf(" |  ------------       |     |  7  |  8  |  9 |\n");
                           printf(" |     VOTOU EM        |           |  0  |     \n");
                           printf(" |   JOÃO DO FRETE     |                       \n");
                           printf(" |_____________________|\n\n"); 
                           printf("\n\n\n\t*****  VOTO COMPUTADO PARA JOÃO DO FRETE!  *****\n\n");						   
						   joao = joao + voto;
						   fflush(stdin);
						   break;
						   
			 case 222 :    printf("\n\n ELEIÇÃO 2021 - VEREADORES \n");	
            			   printf(" _______________________      URNA ELETRONICA  \n");
            			   printf(" |  ____________       |     |  1  |  2  |  3 |\n");
                           printf(" |  | 2 | 2 | 2 |      |     |  4  |  5  |  6 |\n");
                           printf(" |  ------------       |     |  7  |  8  |  9 |\n");
                           printf(" |     VOTOU EM        |           |  0  |     \n");
                           printf(" |  MARIA DA PAMONHA   |                       \n");
                           printf(" |_____________________|\n\n"); 
                           printf("\n\n\n\t*****  VOTO COMPUTADO PARA MARIA DA PAMONHA! *****\n\n");
                           maria = maria + voto;
                           fflush(stdin);
                           break;
                           
			 case 333 :    printf("\n\n ELEIÇÃO 2021 - VEREADORES \n");	
            			   printf(" _______________________      URNA ELETRONICA  \n");
            			   printf(" |  ____________       |     |  1  |  2  |  3 |\n");
                           printf(" |  | 3 | 3 | 3 |      |     |  4  |  5  |  6 |\n");
                           printf(" |  ------------       |     |  7  |  8  |  9 |\n");
                           printf(" |     VOTOU EM        |           |  0  |     \n");
                           printf(" |  ZÉ DA FARMACIA     |                       \n");
                           printf(" |_____________________|\n\n"); 
                           printf("\n\n\n\t*****  VOTO COMPUTADO PARA ZÉ DA FARMACIA! *****\n\n");
						   ze = ze + voto;
						   fflush(stdin);
						   break;
						   	
			case 444 :	   printf("\n\n ELEIÇÃO 2021 - VEREADORES \n");	
            			   printf(" _______________________      URNA ELETRONICA  \n");
            			   printf(" |  ____________       |     |  1  |  2  |  3 |\n");
                           printf(" |  | 0 | 0 | 0 |      |     |  4  |  5  |  6 |\n");
                           printf(" |  ------------       |     |  7  |  8  |  9 |\n");
                           printf(" |      VOTO           |           |  0  |     \n");
                           printf(" |     ANULADO         |                       \n");
                           printf(" |_____________________|\n\n"); 
                           printf("\n\n\n\t*****  VOTO COMPUTADO COMO NULO! *****\n\n");
                           nulo = nulo + voto;
                           fflush(stdin);
                           break;
			      }
			      printf("PRESSIONE <ENTER>");
			      getchar();
			      	fflush(stdin);
			      		system("cls");
		}
					
	void prefeito(){																    // < --- Inicio da Funcao (procedimento) prefeitos.
	        
		    printf("\n\n ELEIÇÃO 2021 - PREFEITOS \n");      
            printf(" ______________________      URNA ELETRONICA    \n");
            printf(" |  ______            |     |  1  |  2  |  3 |   \n");
            printf(" |  |  |  |           |     |  4  |  5  |  6 |   \n");
            printf(" |  ------            |     |  7  |  8  |  9 |   \n");
            printf(" |                    |           |  0  |        \n");
            printf(" |                    |                          \n");
            printf(" |____________________|\n\n"); 
            printf("Por favor, informe o numero do seu candidato :    \n\n");
            printf("Nº: 11 - DR. ZURETA    \n");
            printf("Nº: 22 - SENHOR GOMES  \n");
            printf("Nº: 44 - VOTO NULO     \n");
            printf("\n\nInforme aqui, o numero do candidato : ");
            	scanf ("%d", &numV);
            		fflush(stdin);
            			system("cls");
            
            if( numV != 11 && numV != 22 && numV != 44 )
			{
            	system("cls");
            		printf("\n\n ELEIÇÃO 2021 - PREFEITOS \n");	
            			   printf(" _______________________      URNA ELETRONICA  \n");
            			   printf(" |  ____________       |     |  1  |  2  |  3 |\n");
                           printf(" |  | X | X | X |      |     |  4  |  5  |  6 |\n");
                           printf(" |  ------------       |     |  7  |  8  |  9 |\n");
                           printf(" |      VOTO           |           |  0  |     \n");
                           printf(" |     INVALIDO        |                       \n");
                           printf(" |_____________________|\n\n"); 
                           		invalidado2 = invalidado2 + voto;
            			   printf("\n\n\n\n\n\t******* NUMERO NÃO CORRESPONDE A NENHUM CANDIDATO, VOTO INVALIDADO! *******\n\n");
			} 
            switch(numV){
            	case 11 : printf("\n\n ELEIÇÃO 2021 - PREFEITOS \n");      
            			  printf(" ________________________      URNA ELETRONICA    \n");
                          printf(" |  ________            |     |  1  |  2  |  3 |   \n");
                          printf(" |  | 1 | 1 |           |     |  4  |  5  |  6 |   \n");
                          printf(" |  --------            |     |  7  |  8  |  9 |   \n");
                          printf(" |       VOTOU EM       |           |  0  |        \n");
                          printf(" |      DR. ZURETA      |                          \n");
                          printf(" |______________________|\n\n"); 
                          printf("\n\n\n\t*****  VOTO COMPUTADO PARA DR. ZURETA! *****\n\n");
						  		zureta = zureta + voto;
						  			fflush(stdin);		
			               break;
			    case 22 : printf("\n\n ELEIÇÃO 2021 - PREFEITOS \n");	
            			   printf(" _______________________       URNA ELETRONICA  \n");
            			   printf(" |  ________           |      |  1  |  2  |  3 |\n");
                           printf(" |  | 2 | 2 |          |      |  4  |  5  |  6 |\n");
                           printf(" |  --------           |      |  7  |  8  |  9 |\n");
                           printf(" |     VOTOU EM        |            |  0  |     \n");
                           printf(" |   SENHOR GOMES      |                        \n");
                           printf(" |_____________________|\n\n"); 
                           printf("\n\n\n\t*****  VOTO COMPUTADO PARA SENHOR GOMES! *****\n\n");
                           		gomes = gomes + voto;
                           			fflush(stdin);
			               break;
			    case 44 : printf("\n\n ELEIÇÃO 2021 - PREFEITOS \n");	
            			   printf(" _______________________       URNA ELETRONICA  \n");
            			   printf(" |  ________           |      |  1  |  2  |  3 |\n");
                           printf(" |  | 4 | 4 |          |      |  4  |  5  |  6 |\n");
                           printf(" |  --------           |      |  7  |  8  |  9 |\n");
                           printf(" |      VOTO           |            |  0  |     \n");
                           printf(" |     ANULADO         |                        \n");
                           printf(" |_____________________|\n\n");
                           printf("\n\n\n\t*****  VOTO COMPUTADO COMO NULO! *****\n\n");
                           		nulo2 = nulo2 + voto;
                           			fflush(stdin);
			               break;
				}
						   printf("PRESSIONE <ENTER>");
				 				getchar();
									fflush(stdin);
										system("cls");
						   		printf("\n\n\n\t ******  SEUS VOTOS FORAM COMPUTADOS!!! OBRIGADO POR COLABORAR COM NOSSA PESQUISA!!! ****** \n\n\n");
						   printf("PRESSIONE <ENTER>");
								getchar();
									fflush(stdin);
										system("cls");
											return main();
	}
	
	void resumo(){																		// < --- Inicio da Funcao (procedimento) resumo. Menu de apuracao de votos.													   
		    printf("\n\n  APURAÇÃO - PREFEITO E VEREADOR - ELEIÇÕES 2021   \n");
		    printf("\n\n|================   VEREADORES   ================|   \n");
			printf("|Nº: 111 - João do Frete    total de votos ---> %d|   \n", joao);
            printf("|Nº: 222 - Maria da Pamonha total de votos ---> %d|   \n", maria);
            printf("|Nº: 333 - Zé da Farmacia   total de votos ---> %d|   \n", ze);
            printf("|Nº: 444 - Voto Nulo        total de votos ---> %d|   \n", nulo);
            printf("|Nº DO CANDIDADO DIGITADO INCORRETAMENTE  ----> %d|   \n", invalidado);
            printf("|=================================================  \n\n");
            printf("|=================================================  \n\n");
            printf("|================   PREFEITOS   =================|  \n");
            printf("|Nº: 11 - DR. ZURETA  	    total de votos ---> %d|   \n", zureta);
            printf("|Nº: 22 - SENHOR GOMES      total de votos ---> %d|   \n", gomes);
            printf("|Nº: 44 - VOTO NULO         total de votos ---> %d|   \n", nulo2);
            printf("|Nº DO CANDIDADO DIGITADO INCORRETAMENTE   ---> %d|   \n", invalidado2);
            printf("|================================================|   \n\n");
            printf("PRESSIONE <ENTER>");
            				getchar();
            				fflush(stdin);
								system("cls");
										return main();	      
	}
	


	
	
				
				
            
            
	
	


