#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa onde o usu�rio ir� digitar um n�mero referente aos
dias da semana. O programa deve identificar qual o dia da semana
referente ao n�mero digitado. Caso o n�mero digitado n�o corresponda
a nenhum dia da semana deve ser exibida uma mensagem indicando
que o n�mero digitado � inv�lido.
1 - Domingo
2 - Segunda-feira
3 - Ter�a-feira
4 - Quarta-feira
5 - Quinta-feira
6 - Sexta-feira
7 � S�bado*/
/*desenvolvedor: fischerxp*/

int main()
{
    char Dia_Semana;
    printf ("insira um numero:");
    scanf ("%c", &Dia_Semana);
    switch (Dia_Semana)
    {
        case '1': printf ( "domingo" ); break;
        case '2': printf ( "segunda-feira" ); break;
        case '3': printf ( "terca-feira" ); break;
        case '4': printf ( "quarta-feira" ); break;
        case '5': printf ( "quinta-feira" ); break;
        case '6': printf ( "sexta-feira" ); break;
        case '7': printf ( "sabado" ); break;
        default: printf ( "dia invalido" );
    }
    return 0;
}
