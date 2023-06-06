const lib = require('./lib.js')
const fs = require('fs');
console.log(performance.now());
// fs.readFile('Text.txt', 'utf-8', (err, data) => {
//       if (err) {
//             console.log(err);
//       }
//       else {
//           console.log(data);
//       }
// });
const data = fs.readFileSync('Text.txt', 'utf-8');
console.log(data);
console.log(performance.now());
console.log(lib.sum(1, 2));
console.log(lib.sub(1, 2));
console.log(lib.mul(1, 2));

console.log(performance.now());
