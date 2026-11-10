// c.js - Worker Thread
const { workerData, parentPort, threadId } = require("worker_threads");

console.log(`${workerData.name} started | threadId: ${threadId}`);

// Heavy nested loop
let result = 0;
for (let i = 0; i < 10000; i++) {
    for (let j = 0; j < 10000; j++) {
        result += Math.sqrt(i * j);
    }
}
parentPort.postMessage(`${workerData.name} done | result = ${result.toFixed(2)}`);
