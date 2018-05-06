/*
 * Retorna o valor do erro absoluto, dado um valor aproximado e um valor exato.
 */
function absoluto (aprox, exato){
	return Math.abs(aprox - exato);
}

/*
 * Retorna o valor do erro relativo, dado um valor aproximado e um valor exato.
 */
function relativo (aprox, exato){
	return Math.abs(absoluto(aprox, exato) / exato);
}

/*
 * Determine o maior intervalo no qual p* deve deve estar contido a fim de
 * aproximar p com erro relativo de no máximo 10^-4 para a entrada p
 */
function resposta2 (p) {
	i = 0;
	while(1){
		i += 0.0001;
		if(relativo(p, p + i) > 0.0001){
			i -= 0.0001;
			break;
		}
	}
	console.log('[' + (p - i) + ', ' + ' ' + (p + i) + ']');
	console.log(i);
}

/*
 * Efetue os cálculos de erro relativo para entradas truncadas e arrendondadas
 */
function resposta4 (exato, trunc, arred){
	console.log('Truncamento   : ' + relativo(exato, trunc));
	console.log('Arredondamento: ' + relativo(exato, arred));
}

/*
 * Funções da 9:
 */
function aarcotangente () {
	return 4 * (Math.atan(1/2) + Math.atan(1/3))
}

function barcotangente () {
 	return 16 * Math.atan(1/5) + 4 * Math.atan(1/239)
}

function apolinomio () {
	return 4 * (c(1/2) + c(1/3))
}

function bpolinomio () {
 	return 16 * c(1/5) + 4 * c(1/239)
}

function polinomioMaclaurin (x) {
	return x - (1/3) * Math.pow(x,3) + (1/5) * Math.pow(x,5)
}

function bhaskara1 (a, b, c){
	return x1 = (-b + Math.sqrt(b - 4 * a * c)) / 2 * a
}

function bhaskara2 (a, b, c){
	return x2 = (-b - Math.sqrt(b - 4 * a * c)) / 2 * a
}
