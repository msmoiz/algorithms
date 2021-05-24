// What if anything is wrong with the following statements?
// a. if (a > b) then c = 0;
// => No need for a 'then' keyword
// b. if (a > b) { c = 0; }
// => Missing parens around predicate
// if (a > b) c = 0;
// => Technically fine, but should surround with block
// d. if (a > b) c = 0 else b = 0;
// => Missing semicolon after assignment to c
// and same issue re. block