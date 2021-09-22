#import turtle


#a = turtle.numinput("Calculadora Gráfica", "Primeiro numero: ")
#b = turtle.numinput("Calculadora Gráfica", "Segundo numero: ")
#print("Total = ", a + b)


#for angulo in range(0, 360, 15):
#    print(angulo)

#frase = input("Digite uma frase: ")
#print(frase)

#tamFrase = len(frase)
#for ind in range(tamFrase):   #0..tamFrase
#    print(frase[ind])


#lista = frase.split()
#print("lista=", lista)
#tamanho = len(lista)
#print("Tamanho da lista", tamanho)
#lista[2] = 'domingo'

#print(lista[0])
#print(lista[1])
#print(lista[2])

listaCores = ['amarelo', 'azul', 'laranja', 'verde']
print(listaCores[0])
print(listaCores[1])
print(listaCores[2])
print(listaCores[3])

listaDiversos = ['futebol', 10, 'softgraf', 3.15, 'joao da silva', 1, 3]
for item in listaDiversos:
    print(item)

import time
mensagem = "um pequeno passo para o python, porém um gigantesco passo para o programador"
for letra in mensagem:
    print(letra, end="")
    time.sleep(0.1)


