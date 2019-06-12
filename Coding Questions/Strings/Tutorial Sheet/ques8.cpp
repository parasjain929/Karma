#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i=0,c=0,max1=0,flag=0,length=-1,j;
    char str[20],str2[20];
    cin>>str;
    string longstr;
    int len=strlen(str);
    while(str[i]!='\0')
    {
        c=0;
        if(str[i]>='0' && str[i]<='9')
        {
            for(j=i;str[j]>='0' && str[j]<='9';j++)
            {
                str2[c]=str[j];
                c++;
                str2[c]=0;
                if(length<c){
					flag=1;
					longstr=str2;
					length=c;
				}
			}

		}
		i++;

	}
	if(flag==1)
		cout<<longstr<<endl;
	else
		cout<<"no numeric substring"<<endl;

	return 0;
}
