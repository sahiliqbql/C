#include <stdio.h>
int main(){
    struct car{
        int speed;
    };

    struct supercar{
        int boost_speed;
        struct car x;

    };

    struct supercar lambo;
    
    lambo.boost_speed = 100;
    lambo.x.speed = 200;

    return 0;
}
