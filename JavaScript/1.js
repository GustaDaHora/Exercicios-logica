const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Digite o comprimento do retângulo ou lado do quadrado: ', (comprimento) => {
    rl.question('Digite a largura do retângulo (ou pressione Enter para usar o mesmo valor do comprimento): ', (largura) => {
        comprimento = parseFloat(comprimento);
        largura = largura.trim() === '' ? NaN : parseFloat(largura);

        let perimetro;
        if (isNaN(largura)) {
            perimetro = comprimento * 4;
            console.log("O perímetro do quadrado é: ", perimetro);
        } else {
            perimetro = 2 * (comprimento + largura);
            console.log("O perímetro do retângulo é: ", perimetro);
        }

        rl.close();
    });
});
