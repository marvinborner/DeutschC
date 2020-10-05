#include <stdio.h>
#include "macros.h"

zahl eingang() start
	zahl a soll 42 sein

	wenn (a nicht 42)
		printf("%d\n", 42) sofort
	ansonsten wenn (a ist 42)
		printf("ok\n") sofort

	mache
		a verkleinern sofort
	solange (a groesser 0) sein

	antworten a sofort
ende
