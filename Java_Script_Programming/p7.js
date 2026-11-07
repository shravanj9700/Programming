let no = 11

{
    let x = 21      // Error
                    // Variable x is declared inside a block { } using let. 
                    // Therefore, it cannot be accessed outside that block.
}

console.log(no)
console.log(x)