/* 
* struct lconv *localeconv(void) sets or reads location dependent 
* information. These are returned in an object of the lconv structure type.

Example Declaration for localeconv()
struct lconv *localeconv(void);
*/

/*
Return values
typedef struct{
    char *decimal_point;
    char *thousand_sep;
    char *grouping
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
}lconv
*/

#include <stdio.h>
#include <locale.h>

int main(){
    struct lconv *lc;

    setlocale(LC_MONETARY,"it_IT");
    lc = localeconv();
    printf("Local currency symbol : %s\n",lc->currency_symbol);
    printf("International Currency Symbol: %s\n",lc->int_curr_symbol);

    setlocale(LC_MONETARY,"en_US");
    lc = localeconv();
    printf("Local currency symbol : %s\n",lc->currency_symbol);
    printf("International Currency Symbol: %s\n",lc->int_curr_symbol);

    setlocale(LC_MONETARY,"en_IN");
    lc = localeconv();
    printf("Local currency symbol : %s\n",lc->currency_symbol);
    printf("International Currency Symbol: %s\n",lc->int_curr_symbol);

    printf("Decimal Point = %s\n",lc->decimal_point);

    return 0;
}