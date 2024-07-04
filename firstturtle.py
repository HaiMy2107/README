from turtle import *
import colorsys
tracer(500)
h = 0
bgcolor("black")

for i in range(200):
  c = colorsys.hsv_to_rgb(h,1,1)
  h += 0.005
  pencolor(c)
  fillcolor("black")
  goto(0,50)
  circle(200-i,100)
  lt(100)
  circle(200-i,100)
  rt(100)
  for j in range(4):
    lt(100)
    rt(100)
loop = mainloop()
