#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(char* S)
{
	 	if (S[0] == '\0')
		return;


	if (S[0] == S[1]) {


		int i = 0;
		while (S[i] != '\0') {
			S[i] = S[i + 1];
			i++;
		}
        removeDuplicates(S);
	}
        removeDuplicates(S+1);
}

int main()
{
    int i=0,len=0;
    char str1[20];
    cin>>str1;
    while(str1[i]!='\0')
    {
        len++;
        i++;
    }

    removeDuplicates(str1);
    cout<<len<<endl;
    cout<<str1;
}
