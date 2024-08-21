int mediana(int a, int b, int c) {
    // Verificar se a é a mediana
    if ((b <= a && a <= c) || (c <= a && a <= b))
        return a;
    // Verificar se b é a mediana
    else if ((a <= b && b <= c) || (c <= b && b <= a))
        return b;
    // Se não, c é a mediana
    else
        return c;
}

int main() {
    int a, b, c;
    printf("Insira os 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("A mediana eh: %d\n", mediana(a, b, c));

    return 0;
}