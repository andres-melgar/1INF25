// Sobrecarga del operador <<

ostream & operator <<(ostream &out, const struct St &st){
    out.precision(2);
    out<<fixed;
    out<<setw(10)<<st.campo<<...;
    return out; 
}

tipo1 operator <<(tipo2 param1, tipo3 param){
    // tipo1, tipo2, tipo3 pueden ser cualquier tipo de dato, 
	// por ejemplo ostream, ostream &, ofstream, o cualquiere
	// otro tipo de dato, siempre y cuando el juego de parámetros 
	// no corresponda a algún juego ya establecido que porduzca 
	// un error d eambigüedad.
	// La orden return es opcional y depende del tipo de dato
}

// Sobrecarga del operador >>

istream & operator <<(istream &in, const struct St &st){
    in>>st.campo>>...;
	
    return out;
}

tipo1 operator <<(tipo2 param1, tipo3 param){
    // tipo1, tipo2, tipo3 pueden ser cualquier tipo de dato, 
	// por ejemplo istream, istream &, ifstream, o cualquiere
	// otro tipo de dato, siempre y cuando el juego de parámetros 
	// no corresponda a algún juego ya establecido que porduzca 
	// un error d eambigüedad.
	// La orden return es opcional y depende del tipo de dato
}

// Sobrecarga del operador ++
tipo1 operator ++(tipo2 param){
	// Tiene un solo parametro, se usa de esta forma: ++dato; 
    // NO SE PUEDE USAR dato++ con este modelo 	
	// tipo1, tipo2 pueden ser cualquier tipo de dato, siempre
	// y cuando el parámetro no corresponda a algún tipo de dato
	// ya establecido que porduzca un error d eambigüedad.
	// La orden return es opcional y depende del tipo de dato
}