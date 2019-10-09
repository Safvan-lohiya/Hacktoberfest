

#include <stdio.h>
#include<strings.h>
#define HRLINE for(int i=0;i<45;i++)\
               printf ("_");

int main() {
char name[50]; 
int length;
   printf("Enter your name :\n");
   gets(name); 

   printf("Your name is: %s\n", name);
   length=strlen(name);
   HRLINE 
   
   printf("\nFull form of your name:\n");
   
   HRLINE 
   for (int i=0;i<length;i++){
       char c=name[ i ];
       switch ( c )
        {
            case 'a':
            case 'A': 
            printf("\nA musing");
            break ;
            case 'b':
            case 'B':
            printf("\nB eautiful");
            break ;
            case 'c':
            case 'C':
            printf("\nC omplicated");
            break ;
            case 'd':
            case 'D':
            printf("\nD aring");
            break ;
            case 'e':
            case 'E':
            printf ("\nE ntertaining");
            break ;
            case 'f':
            case 'F':
            printf ("\nF antastic");
            break ;
            case 'g':
            case 'G':
            printf ("\nG lorious");
            break ;
            case 'h':
            case 'H':
            printf ("\nH umorous");
            break ;
            case 'i':
            case 'I':
            printf ("\nI nnocent");
            break ;
            case 'j':
            case 'J':
            printf ("\nJ oyful");
            break ;
            case 'k':
            case 'K':
            printf ("\nk nowledgeable");
            break ;
            case 'l':
            case 'L':
            printf ("\nL ogical");
            break ;
            case 'm':
            case 'M':
            printf("\nM agnificent");
            break ;
            case 'n':
            case 'N':
            printf ("\nN aive");
            break ;
            case 'o':
            case 'O':
            printf ("\nO pen Minded");
            break ;
            case 'p':
            case 'P':
            printf ("\nP layful");
            break ;
            case 'q':
            case 'Q':
            printf ("\nQ ueer");
            break ;
            case 'r':
            case 'R':
            printf ("\nR espectful");
            break ;
            case 's':
            case 'S':
            printf ("\nS table");
            break ;
            case 't':
            case 'T':
            printf ("\nT idy");
            break ;
            case 'u':
            case 'U':
            printf ("\nU nbelievable");
            break ;
            case 'v':
            case 'V':
            printf ("\nV aliant");
            break ;
            case 'w':
            case 'W':
            printf ("\nW arrior");
            break ;
            case 'x':
            case 'X':
            printf ("\nX traordinary");
            break ;
            case 'y':
            case 'Y':
            printf("\nY outhful");
            break ;
            case 'z':
            case 'Z':
            printf("\nZ appy");
            break ;
            case 32:
            printf ("\n");
            break ;
                                 
        }
        
   } 
   printf("\n\nNOTES:\n1.Evey word in english language contains several meanings so take the meaning of every word in this code in positive way, i have written it in keeping positive meanings in my mind.\n2. if you like this code then give an upvote and share with your friends.\n3.If any spelling mistake is done please ignore it...");
    return 0;
}
