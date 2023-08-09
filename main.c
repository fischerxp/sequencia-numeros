#include <stdio.h>
#include <stdlib.h>

/*Faça um programa onde o usuário irá digitar um número referente aos
dias da semana. O programa deve identificar qual o dia da semana
referente ao número digitado. Caso o número digitado não corresponda
a nenhum dia da semana deve ser exibida uma mensagem indicando
que o número digitado é inválido.
1 - Domingo
2 - Segunda-feira
3 - Terça-feira
4 - Quarta-feira
5 - Quinta-feira
6 - Sexta-feira
7 – Sábado*/
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
