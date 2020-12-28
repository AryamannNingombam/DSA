function insertSort(array){
    for (let index=0;index<array.length;index++){
        let value = array[index];
        let j = index-1;
        while (j>=0 && value < array[j]){
            array[j+1] = array[j];
            j--;
        };
        array[j+1] = value;
        console.log(array);
    };
    return array;

};

console.log(insertSort([1 ,4 ,234, 24 ,542, 52 ,76 ,234, 542 ,43]))


