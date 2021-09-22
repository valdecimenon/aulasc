import turtle
t = turtle.Pen()
turtle.bgcolor("black")

#Você pode escolher entre 2 a 6 lados para obter formas diferentes
nome = turtle.textinput("Digite seu nome:", "Qual seu nome?")
cores = ["red", "yellow", "blue", "green"]

for x in range(1000):
    t.pencolor(cores[x % 4])
    t.penup()    #levanta a caneta (nao desenha linhas normais da espiral)
    t.forward(x * 4)
    t.pendown()  #baixa a caneta para escrever o nome
    t.write(nome, font = ("Arial", int((x+4) / 4), "bold"))
    t.left(92)