#include <iostream>

int main() {
    int numProdotti;
    float przUnitario;
    float importo;
    float impScontato;
    printf("inserisci il numero di prodotti acquistati: ");
    scanf("%d", &numProdotti);
    printf("inserisci il prezzo unitario : ");
    scanf("%f", &przUnitario);
    importo = numProdotti*przUnitario;
    if(importo>50) {
        impScontato = importo*0,8;
    }
    if (importo > 10 && importo <= 50) {
        impScontato = importo *0.9;
    }
    if (importo <= 10) {
      impScontato = importo;
    }
    printf("l'importo totale e': %.2f\n", importo);
    printf("l'importo scontato e': %.2f\n", impScontato);
}
