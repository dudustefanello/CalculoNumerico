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
