const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Digite o valor da aplicação inicial: ', (aplicacaoInicial) => {
    aplicacaoInicial = parseFloat(aplicacaoInicial);

    rl.question('Digite o período em anos: ', (anos) => {
        anos = parseInt(anos);

        rl.question('Digite a taxa de juros por período anual (%): ', (taxaJuros) => {
            taxaJuros = parseFloat(taxaJuros);
            const taxaDecimal = taxaJuros / 100;
            const juros = aplicacaoInicial * anos * taxaDecimal;

            console.log("O juro simples é: ", juros);
            rl.close();
        });
    });
});
