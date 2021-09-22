import turtle
t = turtle.Pen()
turtle.bgcolor("black")

#Você pode escolher entre 2 a 6 lados para obter formas diferentes
lados = int(turtle.numinput("Escolha entre 2 e 6:", "Número de lados"));
cores = ["red", "yellow", "blue", "green", "orange", "purple"]

for x in range(1000):
    t.pencolor(cores[x % lados])
    t.forward(x * 3 / lados + x)
    t.left(360 / lados + 1)
    t.width(x * lados / 200)