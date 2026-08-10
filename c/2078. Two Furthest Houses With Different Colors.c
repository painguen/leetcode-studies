int maxDistance(int* colors, int colorsSize) {
    int max = 0;
    int current = 0;
    int i = colorsSize;
    int j = colorsSize + 1;
    for (int i = 0; i < colorsSize; i++){
        for (int j = i + 1; j < colorsSize; j++){
            if(colors[i] != colors[j]){
                current = j-i;
            }
            if(current > max){
                max = current;
            }
        }
    }
    return(max);
}
