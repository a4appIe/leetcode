
var filter = function(arr, fn){
    let res = [];
    for(i in arr){
        if(fn(arr[i], Number(i))){
            res.push(arr[i])
        }
    }
    return res;
};