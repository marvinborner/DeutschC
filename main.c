#include <stdio.h>
#include "macros.h"

zahl eingang() start
	zahl a soll 42 sein
	buchstabe zeiger satz soll "Deutsch auf c ist toll!" sein

	wenn (a nicht 42)
		drucke_formattiert("%d\n", 42) sofort
	ansonsten wenn (a ist 42)
		drucke_formattiert("%s\n", satz) sofort

	mache
		a verkleinern sofort
	solange (a groesser 0) sein

	antworten a sofort
ende
