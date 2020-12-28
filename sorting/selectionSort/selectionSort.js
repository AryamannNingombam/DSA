function selectionSort(array){
    for (let i=0;i<array.length;i++){
        for (let j=i;j<array.length;j++){
            if (array[j] < array[i]){
                let temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            };
        };
    };
    return array;


};


console.log(selectionSort([4,2432,3,42
,324524,23423,452,3,4,54,56,7,58,57,
56756,5,3,4,7,5,75,673,134,637,24,356,454654,
2567,45,63,25,453,42,63,4345,6,34,5,6,24,
2553,6,74,5,4



]))