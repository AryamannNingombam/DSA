function bubbleSort(array){
    for (let i = 0;i<array.length;i++){

        for (let j=0;j<array.length-i-1;j++){
            if (array[j+1] < array[j]){
                let temp = array[j+1];
                array[j+1]=array[j];
                array[j]  = temp;
            };
        };
    };
    return array;
};
console.log(bubbleSort([245,25,234,5,53,532,6,534,2,5,2,356,42,35,42,4,25,23,65,4,535,462,42,542,5,2]));