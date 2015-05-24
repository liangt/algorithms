/*

int intPart(int n, int m)
{
	if(n==0 || m==0)
		return 0;
	if(m>n)
		m = n;
	for(int i=0; i<n; i++)
		num[i][0] = 0;
	for(int i=0; i<m; i++)
		num[0][i] = 0;

	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			if(j>=i)
				num[i][j] = num[i][i-1] + 1;
			else
				num[i][j] = num[i-j][j] + num[i][j-1];
	return num[n][m];
}

int intPart(int n)
{
	if(n==0)
		return 0;
	for(int i=0; i<n; i++)
		num[i][0] = num[0][i] = 0;

	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			if(j>=i)
				num[i][j] = num[i][i-1] + 1;
			else
				num[i][j] = num[i-j][j] + num[i][j-1];
	return num[n][n];
}


*/