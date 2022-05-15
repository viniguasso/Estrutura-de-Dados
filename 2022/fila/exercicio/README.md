Sistema de atendimento baseado em fichas normais e de prioridades

Menu
1. Retirar ficha normal
2. Retirar ficha prioritária
3. Atender
4. Mostrar filas
5. Sair
6. Opção: 

As fichas normais são npumeros de 100 a 500, com a letra n na frente, por exemplo: n100.

As fichas prioritárias são números de 1000 a 1500, com a letra p na frente, p1000.

São necessários 3 contadores:
    contaFichaNormal = 100;
    contaFichaPrioritaria = 1000;
    contaAtendimento = 0;

Toda vez que uma ficha é retirada, indormar o número da ficha. Para cada 3 contaAtendimento normais, realizar um atendimento prioritário (contaAtendimentos).
O programa tem como regra de negócio: a cada 3 chamadas de fichas normais, chamar uma ficha prioritária. Para isso,
o programa deve utilizar duas filas (normal, prioritaria). As fichas normais são números da faixa de 100 a 500, enquanto
as fichas prioritárias são de 500 a 1000. Dessa forma, sugere-se usar dois contadores