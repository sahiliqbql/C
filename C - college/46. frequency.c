// #include <stdio.h>
// int main(){
//     int arr[6] = {1,2,2,3,1,2};
//     int s = 0;
//     for(int i=0; i<6; i++){
//         for(int j=0; j<6; j++){
//             if(arr[i]==arr[j]){
//                 s++;
//             }
//         }
//         printf("%d is present %d times\n",arr[i],s);
//         s=0;
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 2, 3, 1, 2};
    
    for (int i = 0; i < 6; i++) {
        int s = 0;  // Reset the count for each element
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                s++;
            }
        }
        if (s == 0) {
            // Only print if the element hasn't been counted before
            for (int k = i; k < 6; k++) {
                if (arr[i] == arr[k]) {
                    s++;
                }
            }
            printf("%d is present %d times\n", arr[i], s);
        }
    }

    return 0;
}
c