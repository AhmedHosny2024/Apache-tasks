// the question can't understand if numbers from 1 to 45 or sequence of 45 number so i have two solutions
//solution one if it is sequence of 45 number 
function findNumber(arr){
    arr.sort(function(a, b){return a - b});
    for(var i=1;i<arr.length;i++){
        if(arr[i]-arr[i-1]!==1){
            return arr[i-1]+1
        }
    }
}

//solution 2 if numbers from 1 to 45
function findMissingNumber(arr) {
    const n = 45; // The total number of integers in the original list
    const expectedSum = (n * (n + 1)) / 2;
    const actualSum = arr.reduce((acc, num) => acc + num, 0);
    return expectedSum - actualSum;
  }
  
// var data=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45]
var test=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,46]
console.log(findNumber(test))
var test2=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45]
console.log(findMissingNumber(test2))
