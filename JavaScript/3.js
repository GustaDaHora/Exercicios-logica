const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Escolha uma opção:\n1. Converter de Celsius para Fahrenheit\n2. Converter de Fahrenheit para Celsius\n', (opcao) => {
    if (opcao == 1) {
        rl.question('Digite a temperatura em Celsius: ', (temperaturaCelsius) => {
            temperaturaCelsius = parseFloat(temperaturaCelsius);
            const temperaturaFahrenheit = (9 / 5) * temperaturaCelsius + 32;
            console.log("A temperatura em Fahrenheit é: ", temperaturaFahrenheit);
            rl.close();
        });
    } else if (opcao == 2) {
        rl.question('Digite a temperatura em Fahrenheit: ', (temperaturaFahrenheit) => {
            temperaturaFahrenheit = parseFloat(temperaturaFahrenheit);
            const temperaturaCelsius = (5 / 9) * (temperaturaFahrenheit - 32);
            console.log("A temperatura em Celsius é: ", temperaturaCelsius);
            rl.close();
        });
    } else {
        console.log("Opção inválida.");
        rl.close();
    }
});
