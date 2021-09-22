#Roseta

import turtle
t = turtle.Pen()
t.speed(200)
t.width(3)
turtle.bgcolor("black")
numero = int(turtle.numinput("Número de círculos", "Quantos círculos você quer?"))

t.pencolor("white")
for x in range(numero):
    t.circle(200)
    t.left(360/numero)

t.pencolor("green")
for x in range(numero):
    t.circle(150)
    t.left(360/numero)

t.pencolor("red")
for x in range(numero):
    t.circle(100)
    t.left(360/numero)

t.pencolor("orange")
for x in range(numero):
    t.circle(50)
    t.left(360/numero)

t.pencolor("yellow")
for x in range(numero):
    t.circle(20)
    t.left(360/numero)

turtle.mainloop()