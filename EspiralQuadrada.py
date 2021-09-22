import turtle
t = turtle.Pen()
t.pencolor("red")
turtle.bgcolor("black")
cores = ["red", "yellow", "blue", "green"]

for x in range(1000):
    t.pencolor(cores[x % 4])
    t.circle(x)
    t.left(91)