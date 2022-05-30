Explicação do algoritmo Bubble_Sort:

Bubble Sort ou Odernação por Bolha é um algoritmo usado para ordenar uma sequência de números.

sequência de exemplo = {5, 9, 3, 1, 2, 8, 4, 7, 6}

Passo1:
> Com um indicador na extremidade direita da sequência, você compara os numeros aos seus lados esquerdo e direito. Nesse caso, eles compararão (7 e 6);
> {5, 9, 3, 1, 2, 8, 4, [7, 6]}

Passo2:
> Depois de compara-los, Se o numero à direita (6) for menor do que o número à esquerda (7) então eles trocam de lugar, senão, eles permanecem em seus lugares. Nesse caso, (6) é menor do que (7), então eles trocam de lugar;
> {5, 9, 3, 1, 2, 8, 4, [6, 7]}

Passo3:
> Depois da comparação, os indicadores são movidos uma posição a esquerda;
> {5, 9, 3, 1, 2, 8, [4, 6], 7}

Passo4:
> Os <Passo2> e <Passo3> são repetidos até o indicador chegar na extremidade da esquerda;
P2> {5, 9, 3, 1, 2, 8, [4, 6], 7}
P3> {5, 9, 3, 1, 2, [8, 4], 6, 7}
P2> {5, 9, 3, 1, 2, [4, 8], 6, 7}
P3> {5, 9, 3, 1, [2, 4], 8, 6, 7}
P2> {5, 9, 3, 1, [2, 4], 8, 6, 7}
P3> {5, 9, 3, [1, 2], 4, 8, 6, 7}
P2> {5, 9, 3, [1, 2], 4, 8, 6, 7}
P3> {5, 9, [3, 1], 2, 4, 8, 6, 7}
P2> {5, 9, [1, 3], 2, 4, 8, 6, 7}
P3> {5, [9, 1], 3, 2, 4, 8, 6, 7}
P2> {5, [1, 9], 3, 2, 4, 8, 6, 7}
P3> {[5, 1], 9, 3, 2, 4, 8, 6, 7}
P2> {[1, 5], 9, 3, 2, 4, 8, 6, 7}

*Com esse processo podemos ter a certeza que o primeiro número sempre será o menor logo, ele será considerado totalmente ordenado.

Passo5:
> Repitimos o <Passo1> e <Passo4> até a sequência estar completamente ordenada
P1> {1, 5, 9, 3, 2, 4, 8, [6, 7]}
P4> {1, 5, 9, 3, 2, 4, 8, [6, 7]}
P4> {1, 5, 9, 3, 2, 4, [8, 6], 7}
P4> {1, 5, 9, 3, 2, 4, [6, 8], 7}
P4> {1, 5, 9, 3, 2, [4, 6], 8, 7}
P4> {1, 5, 9, 3, 2, [4, 6], 8, 7}
P4> {1, 5, 9, 3, [2, 4], 6, 8, 7}
P4> {1, 5, 9, 3, [2, 4], 6, 8, 7}
P4> {1, 5, 9, [3, 2], 4, 6, 8, 7}
P4> {1, 5, 9, [2, 3], 4, 6, 8, 7}
P4> {1, 5, [9, 2], 3, 4, 6, 8, 7}
P4> {1, 5, [2, 9], 3, 4, 6, 8, 7}
P4> {1, [5, 2], 9, 3, 4, 6, 8, 7}
P4> {1, [2, 5], 9, 3, 4, 6, 8, 7}
.
.
P4> {1, 2, 5, 9, 3, 4, 6, [8, 7]}
P4> {1, 2, 5, 9, 3, 4, 6, [7, 8]}
P4> {1, 2, 5, 9, 3, 4, [6, 7], 8}
P4> {1, 2, 5, 9, 3, 4, [6, 7], 8}
P4> {1, 2, 5, 9, 3, [4, 6], 7, 8}
P4> {1, 2, 5, 9, 3, [4, 6], 7, 8}
P4> {1, 2, 5, 9, [3, 4], 6, 7, 8}
P4> {1, 2, 5, 9, [3, 4], 6, 7, 8}
P4> {1, 2, 5, [9, 3], 4, 6, 7, 8}
P4> {1, 2, 5, [3, 9], 4, 6, 7, 8}
P4> {1, 2, [5, 3], 9, 4, 6, 7, 8}
P4> {1, 2, [3, 5], 9, 4, 6, 7, 8}
.
.
.
.
P4> {1, 2, 3, 5, 9, 4, 6, [7, 8]}
P4> {1, 2, 3, 5, 9, 4, 6, [7, 8]}
P4> {1, 2, 3, 5, 9, 4, [6, 7], 8}
P4> {1, 2, 3, 5, 9, 4, [6, 7], 8}
P4> {1, 2, 3, 5, 9, [4, 6], 7, 8}
P4> {1, 2, 3, 5, 9, [4, 6], 7, 8}
P4> {1, 2, 3, 5, [9, 4], 6, 7, 8}
P4> {1, 2, 3, 5, [4, 9], 6, 7, 8}
P4> {1, 2, 3, [5, 4], 9, 6, 7, 8}
P4> {1, 2, 3, [4, 5], 9, 6, 7, 8}
.
.
.
.
.
.
P4> {1, 2, 3, 4, 5, 9, 6, [7, 8]}
P4> {1, 2, 3, 4, 5, 9, 6, [7, 8]}
P4> {1, 2, 3, 4, 5, 9, [6, 7], 8}
P4> {1, 2, 3, 4, 5, 9, [6, 7], 8}
P4> {1, 2, 3, 4, 5, [9, 6], 7, 8}
P4> {1, 2, 3, 4, 5, [6, 9], 7, 8}
P4> {1, 2, 3, 4, [5, 6], 9, 7, 8}
P4> {1, 2, 3, 4, [5, 6], 9, 7, 8}
.
.
.
.
.
.
.
.
P4> {1, 2, 3, 4, 5, 6, 9, [7, 8]}
P4> {1, 2, 3, 4, 5, 6, 9, [7, 8]}
P4> {1, 2, 3, 4, 5, 6, [9, 7], 8}
P4> {1, 2, 3, 4, 5, 6, [7, 9], 8}
P4> {1, 2, 3, 4, 5, [6, 7], 9, 8}
P4> {1, 2, 3, 4, 5, [6, 7], 9, 8}
.
.
.
.
.
.
.
.
.
.
P4> {1, 2, 3, 4, 5, 6, 7, [9, 8]}
P4> {1, 2, 3, 4, 5, 6, 7, [8, 9]}
P4> {1, 2, 3, 4, 5, 6, [7, 8], 9}
P4> {1, 2, 3, 4, 5, 6, [7, 8], 9}
.
.
.
.
.
.
.
.
.
.
.
.
P4> {1, 2, 3, 4, 5, 6, 7, [8, 9]}
P4> {1, 2, 3, 4, 5, 6, 7, [8, 9]}

*uma vez que já sabemos que os números serão completamente ordenados de um em um a cada execução do Passo4, é valido utilizar um algoritmo que ignore a comparação com os numeros completamente ordenados, e se incerre mais cedo.
A comparação sempre vai dar no mesmo pelo fato que já é ordenada, e assim evita passos desnecessários, (descritos com o '.').
