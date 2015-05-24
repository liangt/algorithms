/*

// 最大公约数(n>=m)
int gcd(int n, int m)
{
	return m==0 ? n : gcd(m,n%m); 
}

// 最小公倍数
int scm(int n, int m)
{
	return n<m ? n/gcd(m,n)*m : n/gcd(n,m)*m; 
}

// 快速幂 （递归）
int power(int a, int b)
{
	if(b==0)
		return 1;
	if(b==1)
		return a;

	int temp;
	if(b%2)  // b&1
	{
		temp = power(a, (b-1)/2);
		return a*temp*temp;
	}
	else
	{
		temp = power(a, b/2);
		return temp*temp;
	}
}

// 快速幂 (非递归)
int power(int a, int b)
{
	int t=a,ret=1;
	while(b)
	{
		if(b%2)
			ret = ret * t;
		t *= t;
		b >>= 1; //b /= 2;
	}
	return ret;
}

// 快速幂取模（递归）
int power_mod(int a, int b, int m)
{
	if(b==0)
		return 1;
	if(b==1)
		return a;

	int temp;
	if(b%2)
	{
		temp = power_mod(a, (b-1)/2, m) % m;
		return (a*temp*temp) % m;
	}
	else
	{
		temp = power_mod(a, b/2, m) % m;
		return (temp*temp) % m;
	}
}

// 快速幂取模（非递归）
int power_mod(int a, int b, int m)
{
	int t=a%m,ret=1;
	while(b)
	{
		if(b%2)
			ret = (ret * t) % m;
		t = (t * t) % m;
		b >>= 1; //b /= 2;
	}
	return ret;
}

// 矩阵快速幂 （递归）
void power(int a[10][10], int ret[10][10], int k, int m, int n)
{
	if(k==0)
	{
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				ret[i][j] = 1;
		return;
	}
	
	if(k==1)
	{
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				ret[i][j] = a[i][j];
		return;
	}
		

	int temp[10][10], t[10][10];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			t[i][j] = 0;
			ret[i][j] = 0;
		}
	if(k%2)
	{
		power(a, temp, (k-1)/2, m, n);
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				for(int k=0; k<n; k++)
					t[i][j] = (t[i][j] + (temp[i][k] * temp[k][j]) % m) % m;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				for(int k=0; k<n; k++)
					ret[i][j] = (ret[i][j] + (a[i][k] * t[k][j]) % m) % m;		
	}
	else
	{
		power(a, temp, k/2, m, n);
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				for(int k=0; k<n; k++)
					ret[i][j] = (ret[i][j] + (temp[i][k] * temp[k][j]) % m) % m;
	}
}

typedef long long int64;
const int N = 10;
int m;

struct Mat
{
	int64 val[N][N];
	Mat operator * (const Mat& b) const
	{
		Mat temp;
		for(int i=0; i<N; i++)
			for(int j=0; j<N; j++)
			{
				temp.val[i][j] = 0;
				for(int k=0; k<N; k++)
					temp.val[i][j] = (temp.val[i][j] + val[i][k] * b.val[k][j] % m) % m;
			}
		return temp;
	}

	Mat pow_mod(int k)
	{
		Mat temp, tp = *this;
		memset(temp.val, 0, sizeof(temp.val));
		for(int i=0; i<N; i++)
			temp.val[i][i] = 1;
		while(k)
		{
			if(k & 1)
				temp = temp * tp;
			tp = tp * tp;
			k >>= 1;
		}
		return temp;
	}
};

// 大数取模
int big_mod(string str,int num)
{
	int n = str.size();
    int remainder=0;
    for(int i=0;i<n;i++)
    {
        remainder=(remainder*10+(str[i]-'0'))%num;
    }
    return remainder;
}

*/
