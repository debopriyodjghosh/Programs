            /* a string is palindrome or not */
        #include<stdio.h>
        #include<conio.h>
        void main()
        {
            char A[10],c;
        int i,j,len,flag=0;

        printf("enter a string\n:");
        scanf("%[^\n]",A);
        printf("%s",A);
            for(len=0;A[len]!='\0';len++);
            printf("\n\n string length is %d\n",len);
            for(i=0,j=len-1;i<len/2;i++,j--)
            {
                if(A[i]==A[j])
                    flag=1;
            }
            if(flag==1)
                printf("string is pallindrome\n");
            else
                printf("string is not pallindrome\n");
        }
