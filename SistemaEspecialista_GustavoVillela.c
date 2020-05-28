#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>


int  main( int argc , char *argv[])
{
    //menu
    int opcao,decisao,navegadores,controlIPDNS;
    char opcaoBol [10], opcaoBol2 [10];
    char opcaoBol3[10],opcaoBol4[10];
    char opcaoBol5[10],opcaoBol6[10],opcaoBol7[10],opcaoBol8[10];
	char opcaoBol9[10];
    
    do{
	
    system("cls");
    system("color 0F");
    printf("***************** SISTEMA ESPECIALISTA EM PROBLEMAS RELACIONADOS A CONEXAO COM A INTERNET *****************");
	printf("\nMenu de Opcoes:");
	printf("\n1 - Sem Conectividade \n2 - Acesso Negado \n3 - Escolhendo o Navegador \n4 - Verificar IP/DNS   \n5 - Verificar/Ativar Driver de Rede   \n6 - Verificar/Atualizar Driver de Rede  \n7- Problema com Velocidade da Internet  \n8 - Sair  \n");
    scanf("%d", &opcao);
	switch (opcao) {
        case 1:
			
			printf("\nOs cabos estao conectado? Responda com ['Yes'] or ['No']...\n");
			scanf("%s",opcaoBol);
			printf("\nVoce esta conectado a rede? Responda com ['Yes'] or ['No']...\n");
			scanf("%s",opcaoBol2);
			
			if(strlen(opcaoBol) == 2  &&  (strlen(opcaoBol2) == 2 || strlen(opcaoBol2) == 3) ){
					printf("\nVoce deve conectar todos os cabos no modem e no seu Desktop ou Notebook.\n");	
					printf("Retornando ao Menu de Opcoes...\n");
					system("\npause");			
			}
			else if (strlen(opcaoBol) == 3 && strlen(opcaoBol2) == 2 ){
					printf("\nVoce deve entrar em contato com o suporte da sua operadora de internet.\n");
					printf("Retornando ao Menu de Opcoes...\n");
					system("\npause");
			}
			else if (strlen(opcaoBol) == 3 && strlen(opcaoBol2) == 3 ){
					printf("\nSua conexao esta estabilizada.\n");
					printf("Retornando ao Menu de Opcoes...\n");
					system("\npause");
			}
			
		break;
		
		case 2:
			
			printf("\nSua conexao foi negada? Responda com ['Yes'] or ['No']...\n");
			scanf("%s",&opcaoBol3);
			
			printf("\nO servidor proxy esta conectado? Responda com ['Yes'] or ['No']...\n");
			scanf("%s",&opcaoBol4);
			
			if(strlen(opcaoBol3) == 3 && strlen(opcaoBol4) == 3){
				printf("Voce deve desativar os servidores proxy em: Aperte Tecla Windows+R -> Digite 'inetcpl.cpl' sem aspas -> OK -> Conexoes -> Nunca Discar uma Conexao (se houver) -> configuracoes de LAN -> Desmarque Usar um servidor proxy para sua LAN -> Se a opcao Detectar automaticamente as configuracoes estiver desativada, ative-a. Se esta ja estiver ativada, desative -> OK. (Recomendamos o uso de um programa anti-virus apos este processo).\n");
				printf("Retornando ao Menu de Opcoes...\n");
				system("\npause");
			}
			else if ((strlen(opcaoBol3) == 2 && strlen(opcaoBol4) == 2)  || (strlen(opcaoBol3)== 3 && strlen(opcaoBol4) == 2) || (strlen(opcaoBol3) == 2 && strlen(opcaoBol4) == 3)){
				printf("Voce deve voltar ao menu e ir em 'Escolher o Navegador' para obter suporte para o navegador a qual esta utilizando e alterar o proxy.\n");	
				printf("Retornando ao Menu de Opcoes...\n");
				system("\npause");
			}
		
		break;
		
		case 3:
		
			printf("Escolha seu navegador para receber a mensagem explicando como alterar o proxy.\n");
			
			
			printf("1 - CHROME \n2 - IE \n3 - MOZZILLA \n4 - OUTROS\n");
			scanf("%d",&navegadores);
		switch(navegadores){
			case 1:
				printf("Chrome -> configuracoes -> avancadas -> rede -> alterar proxy\n");
				printf("Retornando ao Menu de Opcoes...\n");
				system("\npause");
			
			break;
		
			case 2:
				printf("IE -> ferramentas -> opcoes da internet -> conexoes -> configuracoes de lan\n");
				printf("Retornando ao Menu de Opcoes...\n");
				system("\npause");
			
			break;
			
			case 3:
				printf("Firefox -> editar-> preferencias -> avancado -> rede\n");
				printf("Retornando ao Menu de Opcoes...\n");
				system("\npause");
			
			break;
		
			case 4:
				printf("OUTROS Navegadores -> Recomendamos o agendamento de visita de um tecnico ao local.\n");
				printf("Retornando ao Menu de Opcoes...\n");
				system("\npause");
			
			break;
		
			default: 

			break;
			
		}
		
		break;
		
		case 4:
		
			printf("Esta com problemas de IP nao valido? Responda com ['Yes'] or ['No']...\n");
			scanf("%s",&opcaoBol5);
			
			printf("Esta com problemas para descobrir seu ip? Responda com ['Yes'] or ['No']...\n");
			scanf("%s",&opcaoBol6);
			
			if ((strlen(opcaoBol5) == 3 && strlen(opcaoBol6) == 3) || (strlen(opcaoBol5) == 2 && strlen(opcaoBol6) == 3) ){
				printf("Painel de Controle -> Rede e Internet -> Central de Rede e Compartilhamento -> Ethernet -> Detalhes -> Gateway Padrao IPV4\n");
				printf("Retornando ao Menu de Opcoes...\n");
				system("\npause");
			}
			else if(strlen(opcaoBol5) == 2 && strlen(opcaoBol6) == 2){
				printf("Retornando ao Menu de Opcoes...\n");
				system("\npause");
			}
			else if(strlen(opcaoBol5) == 3 && strlen(opcaoBol6) == 2){
				printf("1-Colocar IP Dinamico  \n2-Colocar IP Fixo \n3-Colocar DNS Dinamico  \n4-Colocar DNS Fixo\n");
				scanf("%d",&controlIPDNS);
				switch(controlIPDNS){
					case 1:
						printf("Painel de controle -> Conexoes de Rede -> Botao Direito do Mouse em Conexao Local -> Propiedades -> Geral -> Protocolo TCP/IP -> Propiedades -> Geral -> deixar selecionado Obter endereco IP automaticamente -> OK\n");
						printf("Retornando ao Menu de Opcoes...\n");
						system("\npause");
					break;		
				
					case 2:
						printf("Painel de controle -> Conexoes de Rede -> Botao Direito do Mouse em Conexao Local -> Propiedades -> Geral -> Protocolo TCP/IP -> Propiedades -> Geral -> deixar selecionado Usar o seguinte endereco IP e preencher com IP valido -> OK\n");
						printf("Retornando ao Menu de Opcoes...\n");
						system("\npause");
					break;
					
					case 3:
						printf("Painel de controle -> Conexoes de Rede -> Botao Direito do Mouse em Conexao Local -> Propiedades -> Geral -> Protocolo TCP/IP -> Propiedades -> Geral -> deixar selecionado Obter o endereco dos sevidores DNS automaticamente -> OK\n");
						printf("Retornando ao Menu de Opcoes...\n");
						system("\npause");
					break;
					
					case 4:
						printf("Painel de controle -> Conexoes de Rede -> Botao Direito do Mouse em Conexao Local -> Propiedades -> Geral -> Protocolo TCP/IP -> Propiedades -> Geral ->  Usar os seguintes enderecos de sevidor DNS e preencher com DNS valido -> OK\n");
						printf("Retornando ao Menu de Opcoes...\n");
						system("\npause");
					break;
				
					default:
						
					break;
			    }
			}
			else if(strlen(opcaoBol5) == 2 && strlen(opcaoBol6) == 2){
					    printf("Sua rede esta sem problemas.\n");
						printf("Retornando ao Menu de Opcoes...\n");
						system("\npause");
						
			}
		break;
			
		case 5:
		
		printf("Voce deseja diagnosticar problemas relativos a placa de rede? Responda com ['Yes'] or ['No']...\n ");
		scanf("%s",&opcaoBol7);
		
		if (strlen(opcaoBol7) == 3){
			printf("Painel de controle -> Central de Rede de Compartilhamento -> Alterar as configuracoes do adptador -> botao direito do mouse, clique em Ativar.\n");
			printf("Retornando ao Menu de Opcoes...\n");
			system("\npause");
		}else if (strlen(opcaoBol7) == 2){
			printf("Retornando ao Menu de Opcoes...\n");
			system("\npause");
		}
		
		break;
		
		case 6:
			
		printf("Voce deseja consultar seu driver da placa de rede? Responda com ['Yes'] or ['No']...\n");
		scanf("%s",&opcaoBol8);
		
		if(strlen(opcaoBol8) == 3){
			printf("Gerenciador de dispositivos -> Adptadores de Rede -> Caso esteja com problemas ou desatualizado, havera um 'X' vermelho no campo correspondente.\n");
			printf("Retornando ao Menu de Opcoes...\n");
			system("\npause");
		}else if (strlen(opcaoBol8) == 2){
			printf("Retornando ao Menu de Opcoes...\n");
			system("\npause");
		}			
			
		break;	
			
		case 7:
		
		printf("Sua velocidade de internet esta lenta? Responda com ['Yes'] or ['No']...\n");
		scanf("%s",&opcaoBol9);
		
		if(strlen(opcaoBol9) == 3){
			printf("Voce deve verificar a quantidade de dispositivos conectados em seu wifi em: Tecla Windows+R -> Digitar 'cmd' sem aspas -> digitar o comando 'getmac' sem aspas. Apos verificar os dispositivos conectados no seu wifi, faca a medicao da velocidade de sua internet digitando no google: Medidor Velocidade Internet.\n");
			printf("Retornando ao Menu de Opcoes...\n");
			system("\npause");
		}else if (strlen(opcaoBol9) == 2){
			printf("Retornando ao Menu de Opcoes...\n");
			system("\npause");
		}		
		
		break;	
				
		default: 
				
		break;

}
	
		
}
		while(opcao!= 8);

}

