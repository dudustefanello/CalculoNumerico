function abs (ap, ex){
	return Math.abs(ap - ex);
}

function rel (ap, ex){
	return Math.abs(abs(ap, ex)/ex);
}

function res2 (p) {
	i = 0;
	while(1){
		i += 0.0001;
		if(rel(p, p + i) > 0.0001){
			i -= 0.0001;
			break;
		}
	}
	console.log('[' + (p - i) + ', ' + ' ' + (p + i) + ']');
	console.log(i);
}

function res4 (i, ii, iii){
	console.log('Truncamento   : '+rel(i, ii));
	console.log('Arredondamento: '+rel(i, iii));
}
