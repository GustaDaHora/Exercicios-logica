peso = float(input('Qual é o seu peso?'))
altura = float(input('Qual é a sua altura?'))
imc = peso / (altura**2)
if imc<18.5:
    print('Seu peso está abaixo da média! Seu índice de massa corporal é de', imc)
    elif imc>=18.5 and imc
