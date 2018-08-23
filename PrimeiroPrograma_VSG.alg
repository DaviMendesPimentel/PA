algoritmo "Calculadora"
// Função :
// Autor : Linus Torvalds
// Data : 22/08/2018
// Seção de Declarações 

var Horas, Idade, Dias : inteiro
    nome_Do_Individuo : vetor[0..35] caracter

inicio
// Seção de Comandos
escreval("Programa que calcula as horas de vida")
escreva("Escreva seu nome: ")
leia(nome_Do_Individuo)
escreva("Insira a sua idade: ")
leia(Idade)
Horas <- Idade * (365 * 24)
Dias <- Idade * 365
escreval("O ser ", nome_Do_Individuo, " tem: ")
escreval("Horas vividas aproximadamente = ", Horas)
escreval("Dias Vividos aproximadamente = ", Dias)

fimalgoritmo
