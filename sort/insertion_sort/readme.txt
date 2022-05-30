Explicação do algoritmo Insertion_Sort:

Insertion Sort ou Ordenação por Inserção é um algoritmo usado para ordenar uma sequência de números.

sequência de exemplo = {5, 3, 4, 7, 2, 8, 6, 9, 1}

Passo1:
> Para começar, o número mais a esquerda é considerado completamente ordenado.
> {[5], 3, 4, 7, 2, 8, 6, 9, 1}

Passo2:
> Depois, dos números restantes, o número mais a esquerda é escolhido. E comparado com os números já ordenados à esquerda dele, se ele for menor, ele troca de lugar com o número a sua esquerda.
> {(5, [3]), 4, 7, 2, 8, 6, 9, 1}
> {(3, 5), 4, 7, 2, 8, 6, 9, 1}

Passo3:
> o <Passo2> é repetido até que o número a sua esquerda seja menor, ou até ele chegar na ponta esquerda. E este passa a ser considerado totalmente ordenado.

Passo4:
> os <Passo2> e <Passo3> são repetidos até o ultimo número da sequência ser considerado completamente ordenado.
