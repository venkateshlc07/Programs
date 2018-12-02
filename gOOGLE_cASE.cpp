/* Given Array of Characters convert each letter into gOOGLE cASE */
#include<bits/stdc++.h>
#include<string.h>
#define IN 1
#define OUT 0

using namespace std;
int main()
{
   char ch[] ="C is a Sea";
   int state;
   int c;
	
   c = 0;
   state = OUT; 
   while(ch[c] != '\0')
   {
      if(ch[c] == ' ' || ch[c] == '\t' || ch[c] =='\n'){
        state = OUT;
      }
      else if(state == OUT){
        state = IN;
        ch[c] = tolower(ch[c]);
      }
      else{
        ch[c] = toupper(ch[c]);
      }

        ++c;
		
   }

    cout<<ch;
}
