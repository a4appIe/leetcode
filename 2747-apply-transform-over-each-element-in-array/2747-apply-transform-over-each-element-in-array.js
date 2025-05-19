/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let res = [];
    for(i in arr){
        String(fn(arr[i], Number(i))) && res.push(Number(fn(arr[i], Number(i))));
    }
    return res;
};