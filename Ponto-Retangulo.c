#include <stdio.h>

struct ponto {
    int x, y;
};

void verificarPonto(struct ponto p, struct ponto v1, struct ponto v2) {
    if (p.x >= v1.x && p.x <= v2.x && p.y >= v1.y && p.y <= v2.y)
        printf("O ponto (%d, %d) está dentro do retângulo.\n", p.x, p.y);
    else
        printf("O ponto (%d, %d) está fora do retângulo.\n", p.x, p.y);    
}

int main() {
    struct ponto v1, v2, p;
    
    printf("Digite coordenadas do vértice inferior esquerdo (x1 y1): ");
    scanf("%d %d", &v1.x, &v1.y);
    printf("Digite coordenadas do vértice superior direito (x2 y2): ");
    scanf("%d %d", &v2.x, &v2.y);
    printf("Digite coordenadas do ponto (x y): ");
    scanf("%d %d", &p.x, &p.y);
    
    verificarPonto(p, v1, v2);
    
    return 0;
}
