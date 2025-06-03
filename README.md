# super_trunfo.c


## Objetivo do Programa
O objetivo do programa é simular a criação de cartas do jogo Super Trunfo, com o tema cidades brasileiras. Neste primeiro nível, o foco é o cadastro e a exibição de duas cartas, onde o jogador insere manualmente os dados das cidades. O programa serve como base para funcionalidades futuras, como batalhas entre cartas e classificação por atributos.

### Estrutura dos Dados
O programa utiliza uma struct em C chamada CartaCidade para representar uma carta do Super Trunfo. Cada carta contém os seguintes atributos:
Estado: Uma letra de A a H que representa um dos oito estados fictícios do jogo.
Código da Carta: Uma combinação da letra do estado com um número de 01 a 04 (ex: A01, B03).
Nome da Cidade: Nome completo da cidade.
População: Número total de habitantes da cidade (inteiro).
Área: Área da cidade em quilômetros quadrados (float).
PIB: Produto Interno Bruto da cidade, em bilhões (float).
Número de Pontos Turísticos: Quantidade de pontos turísticos na cidade (inteiro).

#### Funcionamento do Programa
Leitura de Dados:
O programa solicita que o usuário insira os dados de duas cartas. Para isso, ele utiliza a função lerCarta, que pede cada campo um por um.
Armazenamento:
As informações digitadas são armazenadas em um vetor de duas posições do tipo CartaCidade.
Exibição das Cartas:
Após o cadastro, o programa utiliza a função exibirCarta para mostrar os dados das duas cartas cadastradas na tela, organizados de forma clara e legível.

##### Recursos Utilizados
struct: Para agrupar os dados de cada carta.
scanf e gets (com modificadores) para leitura dos dados.
printf para exibir os dados de forma organizada.
Vetores para armazenar múltiplas cartas.