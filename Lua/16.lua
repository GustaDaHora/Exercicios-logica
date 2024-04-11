io.write("Digite seu peso")
local peso = io.read()
io.write("Digite sua altura")
local altura = io.read()
local imc = peso/(altura * altura)
if imc <= 18.5 then
    io.write("Voce esta abaixo do peso ideal, sua massa corporea é ", imc)
elseif imc >= 18.5 and imc <= 25 then
    io.write("Voce esta no peso ideal, sua massa corporea é ", imc)
elseif imc > 25 and imc <= 30 then
    io.write("Voce esta com sobrepeso, sua massa corporea é ", imc)
elseif imc > 30 and imc <= 40 then
    io.write("Voce esta obeso, sua massa corporea é ", imc)
elseif imc > 40 then
    io.write("Voce tem obesidade morbida, sua massa corporea é ", imc)
end
