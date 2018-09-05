algoritmo "semnome"
// Função :
// Autor :
// Data : 05/09/2018
// Seção de Declarações 
var
   a, b, holder : inteiro
inicio
// Seção de Comandos
escreval("Programa de inversão de valores: ")
escreva("Insira o valor de 'a': ")
leia(a)
escreva("Insira o valor de 'b': ")
leia(b)

holder <- a
a <- b
b <- holder

escreval("O valor de 'a' é ", a)
escreval("O valor de 'b' é ", b)

fimalgoritmo
