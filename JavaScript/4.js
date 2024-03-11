const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Digite o valor inicial: ', (valorInicial) => {
    valorInicial = parseFloat(valorInicial);

    rl.question('Digite o percentual de correção (positivo para aumento, negativo para diminuição): ', (percentualCorrecao) => {
        percentualCorrecao = parseFloat(percentualCorrecao);

        if (percentualCorrecao === 0) {
            console.log("O percentual de correção não pode ser zero.");
            rl.close();
            return;
        }

        let novoValor = valorInicial;
        let contAlteracoes = 0;
        if (percentualCorrecao > 0) {
            const aumento = 1 + (percentualCorrecao / 100);
            while (novoValor <= valorInicial * aumento) {
                novoValor += aumento;
                contAlteracoes++;
                console.log(novoValor, contAlteracoes)
            }
            console.log("O valor pode aumentar", contAlteracoes, "vezes. Novo valor:", novoValor);
        } else if (percentualCorrecao < 0) {
            const aumento = 1 - (percentualCorrecao / 100);
            while (novoValor >= valorInicial * aumento) {
                novoValor -= aumento;
                contAlteracoes++;
                console.log(novoValor, contAlteracoes)
            }
            console.log("O valor pode diminuir", contAlteracoes, "vezes. Novo valor:", novoValor);
        }
        rl.close();
    });
});
