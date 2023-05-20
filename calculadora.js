
function adicionar(a, b) {
  return a 
}
function subtrair(a, b) {
  return a - b;
}
function multiplicar(a, b) {
  return a * b;
}
function dividir(a, b) {
  return a / b;
}
function calcular() {
  var operacao = prompt("Escolha a operação: adicionar, subtrair, multiplicar ou dividir");
  var num1 = parseFloat(prompt("Digite o primeiro número"));
  var num2 = parseFloat(prompt("Digite o segundo número"));
  var resultado;

  switch (operacao) {
    case "adicionar":
      resultado = adicionar(num1, num2);
      break;
    case "subtrair":
      resultado = subtrair(num1, num2);
      break;
    case "multiplicar":
      resultado = multiplicar(num1, num2);
      break;
    case "dividir":
      resultado = dividir(num1, num2);
      break;
    default:
      console.log("Operação inválida");
      return;
  }

  console.log("O resultado é: " + resultado);
}

// Chamada da função principal
calcular();

