#include<bits/stdc++.h>
#include<string.h>
#define SUM 8
#define IN 1
#define OUT 0

using namespace std;
int main()
{
  char ch[] ="C is a Sea";
	int state = OUT;
	char space='a';
	int char=0;

	while(ch[char] != '\0')
	{
      if(ch[char] == ' ' || ch[char] == '\t' || ch[char] =='\n'){
        state = OUT;
      }
      else if(state == OUT){
        state = IN;
        ch[char] = tolower(ch[char]);
      }
      else{
        ch[char] = toupper(ch[char]);
      }

      ++char;
		
	}

	cout<<ch;

}
