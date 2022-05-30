Explicação do algoritmo Selection_Sort:

Selection Sort ou Odernação por Seleção é um algoritmo usado
para ordenar uma sequência de números.

sequência de exemplo = {6, 1, 7, 8, 9, 3, 5, 4, 2}

Passo1:
> Usando o algoritmo de "Busca Linear", o menor valor na sequência é localizado;
> {6, [1], 7, 8, 9, 3, 5, 4, 2}

Passo2:
> O menor valor é trocado de posição com o número mais a esquerda do último número ordenado(no caso do primeiro número, irá para a extremidade esquerda) e é considerado totalmente ordenado;
> {1, 6, 7, 8, 9, 3, 5, 4, 2}

Passo3:
> Repita os <Passo1> e <Passo2> até a sequência estar completamente ordenada;
P1> {1, 6, 7, 8, 9, 3, 5, 4, [2]}
P2> {1, 2, 7, 8, 9, 3, 5, 4, 6}
P1> {1, 2, 7, 8, 9, [3], 5, 4, 6}
P2> {1, 2, 3, 8, 9, 7, 5, 4, 6}
p1> {1, 2, 3, 8, 9, 7, 5, [4], 6}
P2> {1, 2, 3, 4, 9, 7, 5, 8, 6}
p1> {1, 2, 3, 4, 9, 7, [5], 8, 6}
P2> {1, 2, 3, 4, 5, 7, 9, 8, 6}
p1> {1, 2, 3, 4, 5, 7, 9, 8, [6]}
P2> {1, 2, 3, 4, 5, 6, 9, 8, 7}
p1> {1, 2, 3, 4, 5, 6, 9, 8, [7]}
P2> {1, 2, 3, 4, 5, 6, 7, 8, 9}
p1> {1, 2, 3, 4, 5, 6, 7, [8], 9}
P2> {1, 2, 3, 4, 5, 6, 7, 8, 9}
