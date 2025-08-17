#include <stdio.h>
int main()
{
    float dollars, rs, pounds;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    rs = dollars * 48;
    pounds = rs / 70;
    printf("%.2f dollars = %.2f pounds\n", dollars, pounds);
    return 0;
}
