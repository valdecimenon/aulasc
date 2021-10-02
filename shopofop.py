#Meu ShopoFop
#instalar biblioteca cv2: pip install opencv-python

import cv2

def eventoClique(evento, x, y, flags, param):
    if evento == cv2.EVENT_LBUTTONDOWN:
        print(x,",",y)
        pt = [x,y]
        pincel = cv2.circle(imagem, pt, 30, cor, -1)
        cv2.imshow("Meu SopoFop", imagem)


cor = [255,255,255]  #padrão BGR

imagem = cv2.imread("frutas.jpg")

cv2.imshow("Meu SopoFop", imagem)

cv2.setMouseCallback("Meu SopoFop", eventoClique)

cv2.waitKey(0)
cv2.destroyAllWindows()
cv2.imwrite("frutas_editado.jpg", imagem)