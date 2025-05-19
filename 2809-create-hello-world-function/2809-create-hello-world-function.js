/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
        if(args.length>=0 & args.length<=10){
            return "Hello World"
        }
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */