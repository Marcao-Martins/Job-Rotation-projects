#include <stdio.h>

int main() {
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;
    float total = sp + rj + mg + es + outros;
    
    float perc_sp = (sp / total) * 100;
    float perc_rj = (rj / total) * 100;
    float perc_mg = (mg / total) * 100;
    float perc_es = (es / total) * 100;
    float perc_outros = (outros / total) * 100;
    
    printf("Percentual de Representação SP: %f\n", perc_sp);
    printf("Percentual de Representação RJ: %f\n", perc_rj);
    printf("Percentual de Representação MG: %f\n", perc_mg);
    printf("Percentual de Representação ES: %f\n", perc_es);
    printf("Percentual de Representação Outros: %f\n", perc_outros);
    
    return 0;
}



