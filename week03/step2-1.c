#include <stdio.h>
4	#include <string.h>
5	char line[15]="123454321";
6	char *p1, *p2;///主題: pointer指標,指到你要看的地方
7	int palindrome()
8	{
9	    int N=strlen(line);
10	    for(int i=0; i<N; i++){
11	        p1 = & line[i]; ///主題: pointer指標 &表示變數的address住址
12	        p2 = & line[N-1-i]; ///主題: pointer指標 &表示變數的address住址
13	        if( line[i] != line[N-1-i] ) return 0;//bad!!!
14	    }
15	    return 1;
16	}
17	int main()
18	{
19	    ///while( scanf("%s", line)==1 ){//上週的week02-1 //不要用while及scanf()
20	        int p = palindrome();
21	        if(p==1) printf("%s -- is a palindrome.\n\n",line);
22	        if(p==0) printf("%s -- is not a palindrome.\n\n",line);
23	    ///}//上週的week02-1
24	    return 0;
25	}
