# Marcos gabriel Barbosa dos santos 11921EBI025

## OBJETIVOS
criar arquivos main.c, main.o, startup.c, startup.o e linker script

## desenvolvimento
 Primeiro foi feito a configuração do git em seguindo foi criado o primeiro arquivo denominado "main.c" e seu executavel
 "main.o", foi feito também um arquivo "makefile " para compilar usando pelo comando 'make'

 Em sequencia foi criado o startup.c cujo a função é: declaração e inicialização doStack; declaração e inicialização da Tabela de Vetores de Interrupção; código doReset handler; outros códigos exception handler.
 
Stack é área da memória onde dados, varieaveis e ponteiros são armazenados
reset handler é o vetor de interrupção no endereço 0x0000 0004

por ultimo foi criado o arquivo linker denominado "stm32f411-rom.Id",  linker tem por objetivo juntar o código objeto (relocável) em umlocal e gerar um único arquivo executável

