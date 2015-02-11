var _ = {};

var STATUS_CODE_DESCRIPTION_MAP = {
    '!' : 'Deleted(but tracked)',
    '?' : 'Unknown',
    'A' : 'Added',
    'M' : 'Modified',
    'R' : 'Removed'
};

_.filter = function(arr, callback) {
    var newArr = [];
    for(var e in arr) {
        console.log(arr[e]);
        if(callback(arr[e])) {
            newArr.push(arr[e]);
        }
    }
    return newArr;
}; 


_.mapObject = function(arr, key, callback) {
    var newArr = [];
    for(var e in arr) {
        if(callback(arr[e])) {
            var obj = {};
            obj[key] = arr[e];
            newArr.push(obj);
        }
    }
    return newArr;
}; 

_.mapStatusObject = function(arr, checkEmpty) {
    var newArr = {};
    for(var e in arr) {
        var row = arr[e];
        if(checkEmpty(row)) {
            var pieces = row.split(" ");
            var code = pieces[0] + " - " + STATUS_CODE_DESCRIPTION_MAP[pieces[0]];
            var file = pieces[1];
            if(!newArr[code]) {
                newArr[code] = [];
            }
            newArr[code].push({'name': file});
        }
    }
    return newArr;
}; 

module.exports = _;