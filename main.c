#include <stdio.h>

int main()
{
    
    float weight;
    float height;
    int bmi (float height, float weight);
    
    printf("Insert Weight \n");
    scanf("%f",&weight);
    printf("Insert Height \n");
    scanf("%f",&height);
    
    height *= height;
    
    int Bmi = bmi(height,weight);
    
    printf("Bmi = %d ",Bmi);
    
    return 0;
}
int bmi(float height,float weight){
    
    int result = weight/height;
    
    return result;
}
