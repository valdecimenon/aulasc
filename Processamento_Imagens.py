#Biblioteca de Visão Computacional
#Processamento de imagens

#Para instalar
#1. Encontrar a pasta de instalação do python
#   usando "abrir local do arquivo" com o mouse sobre o ícone do pyhton
#2. Novamente "abrir local do arquivo"
#3. Abre a pasta Scripts
#4. Copiar o caminho mostrado
#5. Abrir o terminal
#6. Comando:  CD  <colar caminho>
#7. instalar a biblioteca:  pip install opencv-python
#8. pip install scikit-image
#9. pip install pafy
#10. pip install --upgrade youtube_dl

import cv2
from skimage import io
import pafy

#mostra uma imagem salva no disco
def mostraImagem():
    imagem = cv2.imread("frutas.jpg")
    cv2.imshow("Imagem", imagem)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
    
#mostra uma imagem da web
def mostraWeb():
    imagem = io.imread("https://softgraf.com/img/img1.jpg")
    cv2.imshow("Imagem da web", imagem)
    
#mostra o primeiro quadro de um video salvo em disco
def exibeQuadro():
    captura = cv2.VideoCapture("video.mp4")
    ret, frame = captura.read() #pega o primeiro quadro do video
    cv2.imshow("Exibindo um quadro do video", frame)
    
#mostra todos os frames do video salvo em disco    
def exibeVideo():
    #Para capturar imagem da webcam
    #captura = cv2.VideoCapture(0)
    captura = cv2.VideoCapture("video.mp4")
    
    while True:
        ret, frame = captura.read()
        cv2.imshow("Exibindo quadro a quadro", frame)
        if cv2.waitKey(25) & 0xFF == ord('s'):  #Sair
            break
            
    cv2.destroyAllWindows()
 
def exibeYoutube():
    url = "https://www.youtube.com/watch?v=vKrFf7fyIfY"
    video = pafy.new(url)  #cria um link para o video
    best = video.getbest() #baixa o video na melhor qualidade
    captura = cv2.VideoCapture(best.url)
    
    while True:
        ret, frame = captura.read()
        cv2.imshow("Exibindo video do youtube", frame)
        if cv2.waitKey(25) & 0xFF == ord('s'):  #Sair
            break
            
    cv2.destroyAllWindows()
    
#mostraImagem()
#mostraWeb()
#exibeQuadro()
#exibeVideo()
exibeYoutube()

