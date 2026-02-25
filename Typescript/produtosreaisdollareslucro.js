//converte o preço em dólares para reais, incluindo o IOF e calcula o preço da venda
function converterPrecoParaReais1(precoEmDolar1, taxaDeCambio1, iof1, lucro1) {
    if (iof1 === void 0) { iof1 = 6.38; }
    if (lucro1 === void 0) { lucro1 = 45; }
    var precoEmReais1 = precoEmDolar1 * taxaDeCambio1;
    var valorIOF1 = precoEmReais1 * (iof1 / 100);
    var precoComIOF1 = precoEmReais1 + valorIOF1;
    //calcula o preço de venda com 45% de lucro
    var precoVenda1 = precoComIOF1 * (1 + lucro1 / 100);
    return { precoEmReais1: precoEmReais1, valorIOF1: valorIOF1, precoComIOF1: precoComIOF1, precoVenda1: precoVenda1 };
}
// exemplo de dados dos produtos (preços em dólares)
var produtos1 = [
    { nome1: "mouse", precoEmDolar1: 25 },
    { nome1: "teclado", precoEmDolar1: 40 },
    { nome1: "monitor", precoEmDolar1: 200 },
    { nome1: "HD externo", precoEmDolar1: 100 },
    { nome1: "SSD", precoEmDolar1: 120 },
    { nome1: "Placa de vídeo", precoEmDolar1: 500 },
    { nome1: "Processador", precoEmDolar1: 300 },
    { nome1: "Memória RAM", precoEmDolar1: 80 },
    { nome1: "Fonte", precoEmDolar1: 150 },
    { nome1: "Gabinete", precoEmDolar1: 70 }
];
//exemplo de taxa de câmbio (1 USD = 5.10 BRL)
var taxaDeCambio1 = 5.10;
// Converter os preços dos produtos para reais e calcular o preço da venda
produtos1.forEach(function (produto1) {
    var _a = converterPrecoParaReais1(produto1.precoEmDolar1, taxaDeCambio1), precoEmReais1 = _a.precoEmReais1, valorIOF1 = _a.valorIOF1, precoComIOF1 = _a.precoComIOF1, precoVenda1 = _a.precoVenda1;
    console.log("Produto: ".concat(produto1.nome1));
    console.log("Pre\u00E7o em d\u00F3lares: $".concat(produto1.precoEmDolar1.toFixed(2)));
    console.log("Pre\u00E7o em reais (sem IOF): R$ ".concat(precoEmReais1.toFixed(2)));
    console.log("Valor do IOF: R$ ".concat(valorIOF1.toFixed(2)));
    console.log("Pre\u00E7o em reais com IOF: R$ ".concat(precoComIOF1.toFixed(2)));
    console.log("Pre\u00E7o de venda (com 45% de lucro): R$ ".concat(precoVenda1.toFixed(2), "\n"));
});
