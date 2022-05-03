<<<<<<< HEAD
#include <cstdio>
#include <algorithm>

int main()
{
    int first, second, one, two;
    
    while (scanf("%d%d", &first, &second), first != -1)
    {
        if (first > second)
        {
            one = first - second;
            two = second + 100 - first;
            
        }
        else
        {
            one = second - first;
            two = first + 100 - second;
        }
        printf("%d\n", std::min(one, two));
    }
=======
#include <cstdio>
#include <algorithm>

int main()
{
    int first, second, one, two;
    
    while (scanf("%d%d", &first, &second), first != -1)
    {
        if (first > second)
        {
            one = first - second;
            two = second + 100 - first;
            
        }
        else
        {
            one = second - first;
            two = first + 100 - second;
        }
        printf("%d\n", std::min(one, two));
    }
>>>>>>> e1a7995c3942d40d2fff2a338b64a56fba2a866e
}