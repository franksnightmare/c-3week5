%%

[0-9]+	return 257;
[\t ]	// ignore
\n		return matched()[0];
.		return matched()[0];
