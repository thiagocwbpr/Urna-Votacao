# Urna de Votação
Trabalho de faculdade no qual foi solicitado o desenvolvimento de uma urna eletrônica para uma pesquisa de quem a população votaria para as próximas eleições de prefeito e vereador. 

O código possui um menu inicial, no qual é possível escolher 3 opções. 1 para iniciar a votação, 2 para ver a apuração de votos, e 3 para sair e finalizar a pesquisa.
O código trás algumas condições, para que seja evitado falhas no sistema. Por exemplo, se o usuário digitar qualquer carácter que não seja o numero do candidato, automaticamente será invalidado o voto.

O mesmo acontece se caso, o usuário digitar outro numero, que não seja correspondente ao numero do candidato, o voto é computado como inválido.
Na apuração de votos, o código foi criado para que retorne a soma de todos os votos que foram computados para cada candidato, o mesmo acontece para votos nulos e inválidos, mostrando um resumo completo da votação atual.

Se caso a pesquisa ser finalizada, na opção 3 do menu, o programa se encerrará e os votos computados serão perdidos.

### Observação
Quem tiver interesse em dar continuação no código, poderá criar uma função no código para guardar as informações dos votos computados, assim como é realizado em uma urna eletrônica de votação real. 
Poderá criar também uma interface gráfica em outra linguagem para uma simulação mais realista sobre como funciona uma votação para eleições.

### Linguagem desenvolvida
Esse projeto é uma atividade de lógica de programação solicitado pela faculdade, portanto foi utilizado o Portugol Studio para desenvolvimento do mesmo, porém analisando a semântica do código, o mesmo pode ser implementado em qualquer linguagem.

### Observações
- O projeto foi desenvolvido em plataforma **Windows**, porém foi testado em **Linux-Mint cinnamon**.
- Se caso estiver utilizando Linux, a **função system("cls")** deve ser alterada para **system("clear")**.
- Foi utilizado a função **setlocale**, para utilização de acentos do portugues no código.
- Se caso estiver utilizando Linux, verifique se a função **setlocate** irá ter as funções ativadas.
- O mesmo pode ser compilado diretamente pelo **terminal linux**, sem a necessidade de utilização de uma IDE.
