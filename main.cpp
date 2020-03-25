#include <bits/stdc++.h>

using namespace std;


int main(){
	ifstream fe("nombre.txt");
	string s;
	int n;
	while(getline(fe, s)){
		n=s.size();
		for (int i = 0; i < n; ++i)
		{
			if(s[i]!=' ' && s[i]!='\t' && s[i]!='\n')cout<<s[i];
			else cout<<' ';
		}


	}
	return 0;
}
