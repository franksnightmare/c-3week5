%%

[0-9]+	return 258;
[\t ]	// ignore
\n		// ignore
.		return matched()[0];
