public String getNumberInWords( int num ) {
	String defaultNum = "zero";
	if ( num == 1 ) {
		return "one"; // return a constant
	}
	else if ( num == 2 ) {
		return "two"; // return a constant
	}
	// return a variable
	return defaultNum;
}