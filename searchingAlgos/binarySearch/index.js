function binarySearch(array,left,right,numberToFind){
if (right<left){
    return -1;
};
const midpoint = Math.floor((left+right)/2);


if (array[midpoint] == numberToFind){
    return midpoint;
}
if (array[midpoint] < numberToFind){
    return binarySearch(array,midpoint+1,right,numberToFind);
};
return binarySearch(array,left,midpoint-1,numberToFind);


};

console.log(binarySearch([1,2,3,4,5,6,7,56,89,900],0,9,7));