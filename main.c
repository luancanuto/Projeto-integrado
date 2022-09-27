algoritmo "semnome"


var

        idade: inteiro
        votop: real
        nome : caractere
       candidatoA, candidatoB, candidatoC, branco, nulo, votoc: real
       canda, candb, candc, bran, nul, toc: real
inicio

escreval("------------------------------------------------")
escreval("---------------- Eleições 2022 -----------------")
escreval("------------------------------------------------")

 candidatoA<-0
 candidatoB<-0
 candidatoC<-0
 branco<-0
 nulo<-0
 votoc<-0

repita
escreval("-----------------------------------------------")
escreval("-----------------------------------------------")
escreval(" Digite seu Nome: ")
leia (nome)
escreval("-----------------------------------------------")
escreval(" Digite sua idade: ")
leia (idade)

se idade<16 entao
escreval(" Voce ainda não pode votar... ")
senao
 se idade>15 entao
escreval(" Seja bem vindo.. ")
escreval("------------------------------------------------")
 escreval(" Escolha seu candidato ou tecle zero para encerrar. ")

 escreval("  0 -> Sair do Programa ")
 escreval("  1 -> Candidato A")
 escreval("  2 -> Candidato B")
 escreval("  3 -> Candidato C")
 escreval("  4 -> Branco")
 escreval(" Qualquer número diferente de 0,1,2,3 e 4, anulará seu voto")
 leia(votop)


 escolha votop
 caso 1
 candidatoA<- candidatoA+1
 votoc<-votoc+1

  caso 2
 candidatoB<- candidatoB+1
 votoc<-votoc+1

 caso 3
 candidatoC<- candidatoC+1
 votoc<-votoc+1

 caso 4
 branco<- branco+1
 votoc<-votoc+1

 outrocaso
 nulo<- nulo+1
 votoc<-votoc+1


 fimescolha
 fimse
 fimse

 ate votop=0

 escreval("-----------------------------------------------")
 escreval("---------------- Resultados -------------------")
 escreval("-----------------------------------------------")
 escreval("                                               ")

 canda<-(candidatoA*100)/votoc
 candb<-(candidatoB*100)/votoc
 candc<-(candidatoC*100)/votoc
 bran<-(branco*100)/votoc
 nul<-(nulo*100)/votoc

 escreval(" Total de votos: ", votoc)
 escreval("------------------------------------------")
 escreval(" Candidato A: ",canda,"%")
 escreval(" Candidato B: ",candb,"%")
 escreval(" Candidato C: ",candc,"%")
 escreval(" Votos em branco: ",bran,"%")
 escreval(" Votos nulos: ",nul,"%")
 escreval("------------------------------------------")







fimalgoritmo
